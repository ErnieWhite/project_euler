CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: largest_palindrome_product smallest_multiple 10001st_prime largest_product_in_a_series special_pythagorean_triplet summation_of_primes

largest_palindrome_product: src/largest_palindrome_product.c
	$(CC) $(CFLAGS) -o bin/largest_palindrome_product src/largest_palindrome_product.c

smallest_multiple: src/smallest_multiple.c
	$(CC) $(CFLAGS) -o bin/smallest_multiple src/smallest_multiple.c

10001st_prime: src/10001st_prime.c
	$(CC) $(CFLAGS) -o bin/10001st_prime src/10001st_prime.c -lm

largest_product_in_a_series: src/largest_product_in_a_series.c
	$(CC) $(CFLAGS) -o bin/largest_product_in_a_series src/largest_product_in_a_series.c

special_pythagorean_triplet: src/special_pythagorean_triplet.c
	$(CC) $(CFLAGS) -o bin/special_pythagorean_triplet src/special_pythagorean_triplet.c

summation_of_primes: src/summation_of_primes.c
	$(CC) $(CFLAGS) -o bin/summation_of_primes src/summation_of_primes.c

.PHONY: all clean 

clean:
	rm -f bin/largest_palindrome_product
	rm -f bin/smallest_multiple
	rm -f bin/10001st_prime
	rm -f bin/largest_product_in_a_series
	rm -f bin/special_pythagorean_triplet
	rm -f bin/summation_of_primes
