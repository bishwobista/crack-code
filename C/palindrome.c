/*This a C program to check if a number is palindrome or not. Palindrome is a number which remains same when its digits are reversed. 
For example, 121 is a palindrome as its reverse is also 121 whereas 123 is not a palindrome as its reverse is 321.*/
#include<stdio.h>
bool isPalindrome(int x){
    if (x < 0) return false;
    long int x1 = x;
    long int n = 0;
    while(x1>0)
    {
        int rem = x1%10;
        n = n*10 + rem;
        x1 = x1/10;
    }
    if (n==x) return true;
    else
    return false;
}
int main()
{
    int x;
    scanf("%d",&x);
    if (isPalindrome(x)) printf("true");
    else printf("false");
    return 0;
}