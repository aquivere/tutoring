Design an O(n) time algorithm for computing $p(x)=a_nx^n + a_{n-1}x^{n-1} + ... + a_1x+a_0$. Assume the coefficients $a_i$ are stored in array $A = [a_0, a_1, a_2,...,a_n]$.

Note: assume the power function uses a loop to compute the $i^{th}$ power of x

```
evalPolynomial(A, n, x): 
    result = 0
    for i = 0 up to n do
        result = result + A[i] * power(x, i)
    end for 
    return result 
```

What is the above's time complexity? ```O(n^2)``` 


How could we compute this more efficiently? 

```
evalPolynomial(A, n, x):
    powerx = 1
    result = 0
    for i = 0 up to n do
        result = result + A[i] * powerx
        powerx = powerx * x
    end for
```
Time complexity: O(n)