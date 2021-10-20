build:
	fallocate -l 1G bigobject.txt
	mkdir move_here || true
	g++ main.cpp -I /mnt/c/Tools/CStar/CStar/include -o main

clean:
	rm main || true
	rm -rf move_here || true
	rm bigobject.txt || true

run:
	@echo "Output:"
	./main
	@echo ""


all: build run clean