CC := gcc
COMPILE_FLAGS := -Wall -Werror 

SRC_PATH := src
TEST_PATH := test

INCLUDES := -I $(SRC_PATH)/ -I thirdparty/

.PHONY: all
all: mkDir deposit

test: mkDir deposit_test

.PHONY: deposit
deposit: main.o deposit.o
	$(CC) build/$(SRC_PATH)/main.o build/$(SRC_PATH)/deposit.o -o bin/deposit-calc
	./bin/deposit-calc

deposit_test: main_test.o deposit_test.o
	$(CC) build/$(TEST_PATH)/main.o build/$(TEST_PATH)/deposit_test.o -o bin/deposit-calc-test
	./bin/deposit-calc-test

mkDir:
	mkdir -p bin
	mkdir -p build
	mkdir -p build/$(SRC_PATH)
	mkdir -p build/$(TEST_PATH)

main.o: $(SRC_PATH)/main.c
	$(CC) $(COMPILE_FLAGS) $(INCLUDES) -c $(SRC_PATH)/main.c -o build/$(SRC_PATH)/main.o

deposit.o: $(SRC_PATH)/deposit.c
	$(CC) $(COMPILE_FLAGS) $(INCLUDES) -c $(SRC_PATH)/deposit.c -o build/$(SRC_PATH)/deposit.o

main_test.o: $(TEST_PATH)/main.c
	$(CC) $(COMPILE_FLAGS) $(INCLUDES) -c $(TEST_PATH)/main.c -o build/$(TEST_PATH)/main.o

deposit_test.o: $(TEST_PATH)/deposit_test.c
	$(CC) $(COMPILE_FLAGS) $(INCLUDES) -c $(TEST_PATH)/deposit_test.c -o build/$(TEST_PATH)/deposit_test.o

.PHONY: clean
clean:
	rm -r -f bin/*
	rm -r -f build/*