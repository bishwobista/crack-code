#include <iostream>
#include <climits>

class Solution {
public:
    int reverse(int x) {
        int reversed = 0;

        while (x != 0) {
            if (reversed > INT_MAX / 10 || reversed < INT_MIN / 10) {
                return 0;
            }

            int digit = x % 10;
            x /= 10;

            if (reversed > (INT_MAX - digit) / 10 || reversed < (INT_MIN - digit) / 10) {
                return 0;
            }

            reversed = reversed * 10 + digit;
        }

        return reversed;
    }
};

int main() {
    Solution solution;

    int num;

    std::cout << "Enter an integer: ";
    std::cin >> num;

    int reversed = solution.reverse(num);

    std::cout << "Reversed Number: " << reversed << std::endl;

    return 0;
}
