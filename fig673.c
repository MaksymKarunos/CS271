  
#include <stdio.h>
a) Assume: char str[5];
 scanf("%s", str); // User types hello
 // This will not work because there is not enough space for the '\0' character
b) Assume: int a[3];
 printf("$d %d %d\n", a[1], a[2], a[3]);
 // Arrays in C start with index 0 and finish at index length-1, in this case it should have been 0, 1 ,2 
 // $d - is not a valid way to output integers
 // if every line has to be new interger it should have been \n\n\n in the end 
c) double f[3] = { 1.1, 10.01, 100.001, 1000.0001 };
// The array is declared to be size 3 but 4 items are intitalized 
d) Assume: double d[2][10];
 d[1, 9] = 2.345
 // indexing is done using two square brackets like below:
 d[1][9] = 2.345