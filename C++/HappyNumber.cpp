/*The problem is to check whether a number is happy number or not.
A number is said to be happy number if replacing the number by the
sum of the squares of its digits, and repeating the process makes 
the number equal to 1. if it does not become 1 and loops endlessly
in a cycle which does not include 1, it is not a happy_number.
Example:
Input: n = 19
Output: True
19 is Happy Number.
Explanation:
1^2 + 9^2 = 82
8^2 + 2^2 = 68
6^2 + 8^2 = 100
1^2 + 0^2 + 0^2 = 1
As we reached to 1, 19 is a Happy Number.*/


// C++ program to check a number is a Happy number or not
#include <bits/stdc++.h>
using namespace std;
 
// Utility method to return sum of square of digit of n
int numSquareSum(int n)
{
    int squareSum = 0;
    while (n) {
        squareSum += (n % 10) * (n % 10);
        n /= 10;
    }
    return squareSum;
}
 
//    method return true if n is Happy number
bool isHappynumber(int n)
{
    int slow, fast;
    // initialize slow and fast by n
    slow = fast = n;
    do {
        // move slow number by one iteration
        slow = numSquareSum(slow);
        // move fast number by two iteration
        fast = numSquareSum(numSquareSum(fast));
    } while (slow != fast);
    // if both number meet at 1, then return true
    return (slow == 1);
}
//    Driver code to test above methods
int main()
{
    int n = 13;
    if (isHappynumber(n))
        cout << n << " is a Happy number\n";
    else
        cout << n << " is not a Happy number\n";
}
