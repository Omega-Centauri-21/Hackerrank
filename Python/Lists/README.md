# **[Lists](https://www.hackerrank.com/challenges/python-lists/problem)**

## Problem 
Consider a list (list = []). You can perform the following commands:

- insert i e: Insert integer `e` at position `i`.
- print: Print the list.
- remove e: Delete the first occurrence of integer `e`.
- append e: Insert integer `e` at the end of the list.
- sort: Sort the list.
- pop: Pop the last element from the list.
- reverse: Reverse the list.
Initialize your list and read in the value of `n` followed by `n` lines of commands where each command will be of the `7` types listed above. Iterate through each command in order and perform the corresponding operation on your list.

## Solution ( Python 3 )

```
if __name__ == '__main__':
    N = int(input())
    lst = [ ]
    for i in range(N):
        s = input().split()     # dividing input to conquer the individual elements 
        command  = s[0]
        arguments = s[1:]
        if command != "print":
            command += "(" + ",".join(arguments) +")"
            eval("lst."+command)
        else:
            print(lst)            
  ```
  
  ## Explanation 
  
  The code is pretty self explanatory however for those who did not understand the solution, we were given `n` lines of commands 
  which were to be executed to gain a certain list. But for the commands to be executed, they had to be in a proper syntax. 
  
  So we created a function where we first created an `empty list` and then started a `for loop` for n number of times so that we could 
  read all the lines given to us. Then on line 5 we split the inputs on the line; which on the next line were divided into commands 
  and arguments. As the numbering in python starts from 0, we took the zeroth value present on the line as the command and the rest 
  as arguments.
  
  Then we set a condition on line 8 for if the "command" i.e. the zeroth value on the line was not zero, we join our command and the
  arguments in the proper syntax using the join() method built-in which similar to the split () method used above in line 4 but works 
  opposite to it. The eval () function evaluates the specified expression, if the expression is a legal Python statement, it will be
  executed.Finally we complete the command to generate the lists as per requirnment and pass it through the eval function to evaluate 
  and then process it or else if the the zeroth value begins with "print", it will print the list at that stage of the execution.
