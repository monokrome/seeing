PREFIX  := .
TARGET  := lib/seeing.so
CC      := clang
CFLAGS  := -I include -std=c11

sources = $(wildcard src/*.c)
objects = $(patsubst src/%.c,lib/%.o,$(sources))


$(TARGET): $(objects)
	mkdir -p $(@D)
	$(CC) -shared $^ -o $@


lib/%.o: src/%.c
	mkdir -p $(@D)
	$(CC) $(CFLAGS) -fPIC -c $< -o $@


install: $(TARGET)
.PHONY: install

clean:
	rm -rf $(objects)
	rm -rf $(TARGET)
.PHONY: clean
