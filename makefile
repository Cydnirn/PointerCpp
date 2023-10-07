clean: all
	rm pointer

all: pointer
	./pointer

pointer:
	g++-12 -o pointer pointer.cpp pointerLib.cpp
