CPPFLAGS=-Wall -Wextra -pedantic -std=c++14
dcode: dcode.cpp
	g++ dcode.cpp -o dcode $(CPPFLAGS)
