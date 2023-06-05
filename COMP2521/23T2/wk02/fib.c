#include <stdio.h>
#include <stdlib.h>

int fib(int n);
int fibIterative(int n);

int main(int argc, char **argv) {
    int n = atoi(argv[1]);
    int result = fibIterative(n);
    printf("%d\n", result);
}

// Recursive method to find nth Fibonacci number
int fib(int n) {
	if (n == 0) return 0;
	if (n == 1) return 1;
	return fib(n - 1) + fib(n - 2);
}

// A faster version of Fibonacci using an iterative method
int fibIterative(int n) {
    if (n == 0) return 0;
	if (n == 1) return 1;

    int first = 0;
    int second = 1;
    int fibResult;

    for (int i = 2; i <= n; i++) {
        fibResult = first + second;
        first = second;
        second = fibResult;
    }
    return fibResult;
}