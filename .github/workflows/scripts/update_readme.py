import os
import re
import json
from datetime import date

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))

def count_cpp_files(folder):
    return len([f for f in os.listdir(folder) if f.endswith('.cpp')])

def get_week_folders():
    weeks = []
    for name in sorted(os.listdir(ROOT)):
        if name.startswith("Week ") and os.path.isdir(os.path.join(ROOT, name)):
            weeks.append(name)
    return weeks

def build_table(weeks):
    rows = ["| Week | Problems | Topics Covered |", "|:----:|:--------:|-----------------|"]
    for w in weeks:
        count = count_cpp_files(os.path.join(ROOT, w))
        link = w.replace(" ", "%20")
        rows.append(f"| [{w}](./{link}) | {count} | - |")
    return "\n".join(rows)

def update_readme(table):
    path = os.path.join(ROOT, "README.md")
    with open(path, "r", encoding="utf-8") as f:
        content = f.read()

    new_content = re.sub(
        r"<!-- PROGRESS-TABLE-START -->.*?<!-- PROGRESS-TABLE-END -->",
        f"<!-- PROGRESS-TABLE-START -->\n{table}\n<!-- PROGRESS-TABLE-END -->",
        content,
        flags=re.DOTALL
    )

    with open(path, "w", encoding="utf-8") as f:
        f.write(new_content)

def update_stats(weeks):
    total = sum(count_cpp_files(os.path.join(ROOT, w)) for w in weeks)
    stats = {
        "total": total,
        "weeks": len(weeks),
        "lastUpdated": str(date.today())
    }
    with open(os.path.join(ROOT, "stats.json"), "w", encoding="utf-8") as f:
        json.dump(stats, f, indent=2)

if __name__ == "__main__":
    weeks = get_week_folders()
    table = build_table(weeks)
    update_readme(table)
    update_stats(weeks)
