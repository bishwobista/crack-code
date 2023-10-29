/*

Write a C program to display a pattern like a right angle triangle with a number.

1
12
123
1234

*/

// Solution

#include <stdio.h>
void main()
{
    int i, j, rows;
    printf("Input number of rows : ");
    scanf("%d", &rows);
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= i; j++)
            printf("%d", j);
        printf("\n");
    }
}

/* Explaination

- In the above loop, the variable i is initialized to 1,
and the loop will continue as long as i is less than or equal to the value of variable 'rows'.

- In each iteration of the outer loop, another loop is started with variable j, initialized to 1,
and it will continue as long as j is less than or equal to the value of i.

- In each iteration of the inner loop, the printf() function will print the value of j to the console.
 This value will be printed j times, as the value of j is increasing by 1 in each iteration of the inner loop.

- After the inner loop completes, the outer loop will print a newline character (\n) to create a new line.

- Finally, the outer loop will increment the value of i by 1, and the process will repeat
  until the condition i<=rows is no longer true.

*/
