# Banjo-Kazooie XBLA decompilation project

A research project to decompile the XBLA version of Banjo-Kazooie with help from (looking at the code of) the [N64 decompilation project](https://gitlab.com/banjo.decomp/banjo-kazooie).

Some code, like enumerations or structure definitions, are taken from the N64 project.

## Requirements

* [split360](https://github.com/banjo360/split360) and [coff-linker](https://github.com/banjo360/coff-linker) in the PATH.
* Visual Studio 2005 SP1 installed.
* XBOX 360 SDK installed (I'm using 7645).
* Editing `tools/vs2005.bat` to change `XEDK` to the correct path.
* WINE installed if building on linux.
* Editing `Makefile` to remove the call to WINE if building on Windows (untested).

Optional: you can add [dump-diff](https://github.com/banjo360/dump-diff) to your PATH if you want to print the non-matching differences.

## Usage

You need to have an uncrypted `default.xex` from Banjo-Kazooie (sha1: `24f81f8058d1be416d95ccfcb5ebd2503eb4fd47`) at the root of the project.

Look at the `Makefile` to see what you can do. But basically, you do `make split` the first time (and each time you edit `bk.yaml`), then just `make` to regenerate `merged.xex`.

## Current state

Copying functions from the Ghidra pseudo-code or from the N64 decompilation project and see if they match.
