#!/usr/bin/env python

import os
import subprocess

for (dirpath, dirnames, filenames) in os.walk("matching"):
    for filename in filenames:
        if filename.endswith(".s"):
            fname = os.path.join(dirpath, filename)
            obj = fname[:-2] + ".o"
            subprocess.run(["powerpc64-linux-gnu-as", fname, "-mregnames", "-o", obj])
