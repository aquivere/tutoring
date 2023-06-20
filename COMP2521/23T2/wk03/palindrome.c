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
// Time complexity: O(n)
bool isPalindrome(char *s, int n) {
	int i = 0;
	while (i < n / 2) {
		if (s[i] != s[n - i - 1]) {
			return false;
		}
		i++;
	}
	return true;
}
