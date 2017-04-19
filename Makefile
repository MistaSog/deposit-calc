all:  deposit

deposit: main.o deposit.o
	gcc build/main.o build/deposit.o -o bin/deposit
main.o: src/main.c
	gcc -Wall -Werror -c src/main.c -o build/main.o
deposit.o: src/deposit.c
	gcc -Wall -Werror -c src/deposit.c -o build/deposit.o	
clean:
	rm -r -f bin/*
	rm -r -f build/*