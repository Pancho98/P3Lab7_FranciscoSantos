make.out: Racional.o Main.o
	g++ Racional.o Main.o -o make.out

Racional.o: Racional.h Racional.cpp
	g++ -c Racional.cpp

Main.o: Racional.h Main.cpp
	g++ -c Main.cpp
