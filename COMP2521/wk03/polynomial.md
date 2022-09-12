Design an O(n) time algorithm for computing p(x). Assume the coefficients a_i are stored in array A.

Note: assume the power function uses a loop to compute the i^th power of x

```
evalPolynomial(A, n, x): 
    result = 0
    for i = 0 up to n do
        result = result + A[i] * power(x, i)
    end for 
    return result 
```

What is the above's time complexity? ```O()``` 


How could we compute this more efficiently? 

```
evalPolynomial(A, n, x):
```