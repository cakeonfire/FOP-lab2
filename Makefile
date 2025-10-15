TYPE := .cpp
SRC  := z11
OUT_DIR := out

ifeq ($(TYPE), .c)
	CC := gcc
else ifeq ($(TYPE), .cpp)
	CC := g++
endif

src := $(SRC)$(TYPE)
out := $(subst $(TYPE),.exe,$(SRC))

$(out) : any $(src)
	$(CC) -o $(OUT_DIR)/$(out) $(src)

# always runs
any:
	@if not exist $(OUT_DIR) mkdir $(OUT_DIR)
