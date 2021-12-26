# Pointers
A pointer in C++ is used to share a memory address among different contexts (primarily functions). They are used whenever a function needs to modify the content of a variable,
but it does not have ownership.
In order to access the memory address of a variable, **val** , prepend it with & sign. For example, &val returns the memory address of **val**.
This memory address is assigned to a pointer and can be shared among functions. For example,**int*p=&val** assigns the memory address of **val** to **pointer p/(*p)**. 
To access the content of the memory pointed to, 
prepend the variable name with a **\***. For example, ***p** will return the value stored in  and any modification to it will be performed on **val**.
```
void increment(int *v) {
    (*v)++;
}

int main() {
    int a;
    scanf("%d", &a);
    increment(&a);
    printf("%d", a);
    return 0;
}  
```
### Function Description

Complete the update function in the editor below.

Update has the following parameters:

  - int *a: an integer
  - int *b: an integer
### Returns
The function is declared with a void return type, so there is no value to return. Modify the values in memory so that **a** contains their sum and **b** contains their 
absoluted difference.
  - a' = a + b
  - b' = |a - b|

### Input Format

Input will contain two integers, **a** and **b**, separated by a newline.

### Sample Input
```
4
5
```
### Sample Output
```
9
1
```
### Example
  - a' = 4 + 5 = 9
  - b' = |4 - 5| = 1

## Explanation
The start of the code was easy - declare a void (no return) function and the main function as said.
```
// incomplete code
void update(int *a,int *b) {
    // Complete this function 
    (*a) = *a + *b;
    (*b) = (abs(*a - *b)); // abs( ) is an inbuilt cpp func. which outputs absolute values.}
int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);
```
However the code wouldn't run simply using what is given. The addition happens easily however because we are using pointers, the the second operation does not provide us any valid solution.
This is because while in the first case the value of **\*a** becomes **\*a + \*b** and so after the second operation completes you are left with the absolute original value of **\*b**
```
Example

*a = 4, *b = 5 // initially
*a = *a + *b  --> *a = 4 + 5 = 9
So the new value of *a becomes 9

*a = 9, *b = 5 // Now
So if we do 
*b = | *a - *b | --> | 9 - 5 | = 4 (which was the original value of *a
```
Because **\*b** is now added to the value of **\*a**, we have to add the value of **\*b** to the original value of **\*b** i.e. double the value of **\*b**. Thus
```
(*b) = (abs(*a - 2* *b));
```
So our final code comes to this 👇 
```
#include <stdio.h>
#include <iostream>
#include <cmath>

void update(int *a,int *b) {
    // Complete this function 
    (*a) = *a + *b;
    (*b) = (abs(*a - 2* *b));
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
```

