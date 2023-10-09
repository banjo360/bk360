C_FILES := $(wildcard src/*.c)
OBJ_FILES := $(C_FILES:.c=.obj)
OBJ_FILES := $(addprefix build/,$(notdir $(OBJ_FILES)))

all: compile patch merge sha1
	@printf "done\n"

split:
	@printf "split\n"
	@split360 split bk.yaml

compile_init:
	@printf "compile\n"
	@mkdir -p build

build/%.obj: src/%.c
	@wine tools/vs2010.bat $< $@

compile: compile_init $(OBJ_FILES)

patch:
	@printf "patch\n"
	@$(foreach file,$(wildcard build/*.obj),coff-linker -a addresses.txt -o build $(file);)

merge:
	@printf "merge\n"
	@split360 merge bk.yaml merged.xex

sha1:
	@split360 checksum bk.yaml merged.xex
	$(eval DIFF := $(shell cmp -l default.xex merged.xex | wc -l))
	$(info Difference: $(DIFF) bytes)

clean:
	@printf "cleaned\n"
	@rm -rf asm bin build

total: clean split all
