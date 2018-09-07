main:	main.o Racional.o Radical.o Real.o
		g++ main.o Racional.o Radical.o Real.o -o main
		rm *.o

main.o:	main.cpp Racional.h Radical.h Real.h
		g++ -c main.cpp

Real.o:	Real.h
		g++ -c Real.cpp

Racional.o:	Real.h Racional.h
			g++ -c Racional.cpp

Radical.o:	Real.h Radical.h
			g++ -c Radical.cpp