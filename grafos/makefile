exec : main.o grafos.o
	gcc -o grafo.x main.o grafos.o

main.o : main.c grafos.c grafos.h
	gcc -c main.c
grafos.o : grafos.c grafos.h main.c
	gcc -c grafos.c
	
clean :
	rm *.o
run : 
	make; ./grafo.x > ./saida.txt; make clean
