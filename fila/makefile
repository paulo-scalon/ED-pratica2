exec : main.o lista.o fila.o
	g++ -o fila.x main.o lista.o fila.o

main.o : main.cpp fila.cpp lista.cpp fila.hpp lista.hpp 
	g++ -c main.cpp
lista.o : main.cpp fila.cpp lista.cpp fila.hpp lista.hpp 
	g++ -c lista.cpp
fila.o : main.cpp fila.cpp lista.cpp fila.hpp lista.hpp
	g++ -c fila.cpp
	
clean :
	rm *.o
run : 
	make; ./fila.x > ./saida.txt; make clean
