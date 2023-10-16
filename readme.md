# Banjo-Kazooie XBLA decompilation project

A research project to decompile the XBLA version of Banjo-Kazooie with help from (looking at the code of) the [N64 decompilation project](https://gitlab.com/banjo.decomp/banjo-kazooie).

Some code, like enumerations or structure definitions, are taken from the N64 project.

## Requirements

* [split360](https://github.com/banjo360/split360) and [coff-linker](https://github.com/banjo360/coff-linker) in the PATH.
* Visual Studio 2010 installed.
* XBOX 360 SDK installed.
* Editing `tools/vs2010.bat` to change `PROGRAMFILES` to the correct path.
* WINE installed if building on linux.
* Editing `Makefile` to remove the call to WINE if building on Windows (untested).

## Usage

You need to have an uncrypted `default.xex` from Banjo-Kazooie (sha1: `24f81f8058d1be416d95ccfcb5ebd2503eb4fd47`) at the root of the project.

Look at the `Makefile` to see what you can do. But basically, you do `make split` the first time (and each time you edit `bk.yaml`), then just `make` to regenerate `merged.xex`.

## Current state

Still looking how to get matching bytes. At the time of writing, the 11 bytes differences come from `__chJinjo_clamp_rotation` where 1 instruction is *out-of-order* compared to the target binary:

```as
// default.xex
mr  r31, r3
mr  r30, r4
lfs f31, 0x54(r31)

// compiled code
lfs fr31,54h(r3)
mr  r31,r3
mr  r30,r4
```
