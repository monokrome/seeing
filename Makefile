TARGET  := bin/seeing.so
CC      := clang

sources = $(wildcard src/*.c)
objects = $(patsubst src/%.c,lib/%.o,$(sources))


$(TARGET): $(objects)
	mkdir -p $(@D)
	$(CC) -shared $^ -o $@


lib/%.o: src/%.c
	mkdir -p $(@D)
	$(CC) -std=c11 -fPIC -c $< -o $@


install: $(TARGET)
	mkdir -p ${PREFIX}/bin
	cp $(TARGET) ${PREFIX}/bin
.PHONY: install
