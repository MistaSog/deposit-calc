all:  deposit

deposit: mkDir main.o deposit.o
	gcc build/main.o build/deposit.o -o bin/deposit
mkDir:
	mkdir bin
	mkdir build
main.o: src/main.c
	gcc -Wall -Werror -c src/main.c -o build/main.o
deposit.o: src/deposit.c
	gcc -Wall -Werror -c src/deposit.c -o build/deposit.o
.PHONY:  clean	
clean:
	rm -r -f bin/*
	rm -r -f build/*
rebuild: rmDir deposit
rmDir: 
	rm -r bin
	rm -r build