// Swapping values of two variables without using a third variable

#include <stdio.h>

// Swap using arithmetic operations (addition and subtraction)
// NOTE: There may be integer overflow in this method if values of a and b are large
void swap1(int a, int b)
{
    printf("Before swap1: a = %d, b = %d\n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swap1: a = %d, b = %d\n", a, b);
}

// Swap using bitwise operation (bitwise XOR)
void swap2(int a, int b)
{
    printf("Before swap2: a = %d, b = %d\n", a, b);

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("After swap2: a = %d, b = %d\n", a, b);
}

int main()
{
    int a = 48;
    int b = 85;
    swap1(a, b);
    swap2(a, b);
    return(0);
}