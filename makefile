factprime.exe: main.o fact.o prime.o
	gcc -o factprime.exe main.o fact.o prime.o
main.o: main.c
	gcc -c main.c
fact.o: fact.c
	gcc -c fact.c
prime.o: prime.c
	gcc -c prime.c
