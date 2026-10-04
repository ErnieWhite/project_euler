CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: largest_palindrome_product smallest_multiple

largest_palindrome_product: src/largest_palindrome_product.c
	$(CC) $(CFLAGS) -o bin/largest_palindrome_product src/largest_palindrome_product.c

smallest_multiple: src/smallest_multiple.c
	$(CC) $(CFLAGS) -o bin/smallest_multiple src/smallest_multiple.c

.PHONY: all clean largest_palindrome_product smallest_multiple

clean:
	rm -f bin/largest_palindrome_product
	rm -f bin/smallest_multiple
