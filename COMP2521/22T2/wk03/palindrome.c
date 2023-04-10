#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isPalindrome(char *s);

int main(int argc, char *argv[]) {
	if (argc == 2) {
		if (isPalindrome(argv[1])) {
			printf("yes\n");
		} else {
			printf("no\n");
		}
	}
	return 0;
}

// returns true if string s is a palindrome
// otherwise false
// Time complexity: O(n)
bool isPalindrome(char *s) {
	int forward = 0;
	int reverse = strlen(s) - 1;

	while (forward <= reverse) { // we iterate through this n/2 times
		if (s[forward] != s[reverse]) {
			return false;
		}
		forward++;
		reverse--;
	}

	return true;
}
