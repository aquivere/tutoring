Implement a queue using two stacks  
A possible solution: 
```
QueueNew:
	initialise two empty stacks s1 and s2

QueueEnqueue:
	push given item onto s1

QueueDequeue:
	while s1 is not empty:
		pop an item from s1 and push it onto s2

	front = pop item from s2

	while s2 is not empty:
		pop an item from s2 and push it onto s1

	return front
```

Enqueue time complexity: ```O()```  
Dequeue time complexity: ```O()```  
  
How can we improve the efficiency of dequeue?
```

```