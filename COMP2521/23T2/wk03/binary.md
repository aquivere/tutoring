Consider the following algorithm, which converts a positive integer $n$ to its binary representation.
```
BinaryConversion:
	Input:  positive integer n
	Output: binary representation of n on a stack
	
	create empty stack S
	while n > 0 do
		push (n mod 2) onto S
		n = floor(n / 2)
	end while
	return S
```
What is the time complexity of the algorithm? Assume that creating a stack and pushing an element onto a stack are both $O(1)$ operations (i.e., constant).

Time complexity = $O(log(n))$