CC = gcc
CFLAGS = -Wall
BUILD_DIR = build
SRC_DIR = src


all: multiply max square library.o

.PHONY: clean
clean:
	 rm -rf $(BUILD_DIR)

$(shell mkdir -p $(BUILD_DIR))


library.o: $(SRC_DIR)/library.c
	$(CC) $(CFLAGS) -c $< -o $(BUILD_DIR)/$@

multiply: $(SRC_DIR)/multiply.c $(SRC_DIR)/library.o
	$(CC) $(CFLAGS) $^ -o $(BUILD_DIR)/$@

max: $(SRC_DIR)/max.c $(SRC_DIR)/library.o
	$(CC) $(CFLAGS) $^ -o $(BUILD_DIR)/$@

square: $(SRC_DIR)/square.c $(SRC_DIR)/library.o
	$(CC) $(CFLAGS) $^ -o $(BUILD_DIR)/$@


