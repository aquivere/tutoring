#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isPalindrome(char *s, int n);

int main(int argc, char *argv[]) {
	if (argc == 2) {
		if (isPalindrome(argv[1], 7)) {
			printf("yes\n");
		} else {
			printf("no\n");
		}
	}
	return 0;
}

// returns true if string s is a palindrome
// otherwise false
// Time complexity: ?
bool isPalindrome(char *s, int n) {
	return false;
}