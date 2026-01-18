#!/usr/bin/env python

import os
import json

output = {
  "min_version": "2.3.2",
  "target_dir": "build",
  "base_dir": "matching",
  "build_base": False,
  "build_target": False,
  "watch_patterns": [],
  "units": []
}

for (dirpath, dirnames, filenames) in os.walk("matching"):
    for filename in filenames:
        if filename.endswith(".s"):
            name = filename[:-2]
            unit = {
                "name": name,
                "target_path": f"build/{name}.obj",
                "base_path": f"matching/{name}.o"
            }
            output['units'].append(unit)

with open('objdiff.json', 'w') as f:
    f.write(json.dumps(output, indent = 2))
