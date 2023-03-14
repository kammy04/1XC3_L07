CC = gcc
CFLAGS = -Wall
BUILD_DIR = build
SRC_DIR = src

test: all
	mkdir -p test
	$(BUILD_DIR)/square inches< ./test_data/square_input.txt > test/square_output.txt
	diff test/square_output.txt test_data/square_expected.txt


	$(BUILD_DIR)/multiply 2 < ./test_data/multiply_input.txt > test/multiply_output.txt 
	diff test/multiply_output.txt test_data/multiply_expected.txt


	$(BUILD_DIR)/max 4 3 2 1 5 7 8 10 6 > test/max_output.txt

	diff test/max_output.txt test_data/max_expected.txt

all: multiply max square library.o

.PHONY: clean
clean:
	 rm -rf $(BUILD_DIR)
	 rm -rf test

$(shell mkdir -p $(BUILD_DIR))


library.o: $(SRC_DIR)/library.c
	$(CC) $(CFLAGS) -c $< -o $(BUILD_DIR)/$@

multiply: $(SRC_DIR)/multiply.c $(SRC_DIR)/library.o
	$(CC) $(CFLAGS) $^ -o $(BUILD_DIR)/$@

max: $(SRC_DIR)/max.c $(SRC_DIR)/library.o
	$(CC) $(CFLAGS) $^ -o $(BUILD_DIR)/$@

square: $(SRC_DIR)/square.c $(SRC_DIR)/library.o
	$(CC) $(CFLAGS) $^ -o $(BUILD_DIR)/$@


