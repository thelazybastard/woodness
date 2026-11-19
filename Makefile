.PHONY: build run clean

build:
	@cmake -B build -G Ninja

run:
	@cmake --build build && ./build/woodness

clean:
	@rm -rf build