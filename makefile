temp:	main.o Racional.o
		g++ main.o Racional.o -o temp
main.o:	main.cpp Racional.h
		g++ -c main.cpp
Racional.o:	Racional.cpp Racional.h
		g++ -c Racional.cpp
