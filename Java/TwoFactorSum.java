/*
 * Difficulty: EASY
 * 
 * Two Factor sum is an easy yet challenging problem for the beginners. The object is to find two such numbers 
 * whose sum is less the smallest of all yet their multiplication result is the given number.
 * 
 * Learn it by example:
 * 
 * Example: 1
 *   Input: 
 *      Target=30
 *   Output:
 *      5,6 as their sum is 11 and 5 times 6 is 30
 *      we cannot choose 2, 15 as their multiplication result is 30 but their sum is 17 which is greater than 11
 * 
 * Example: 2
 *   Input: 
 *      Target=45
 *   Output:
 *      5, 9 as their sum is 14 and 5 times 9 is 45
 *      we cannot choose 3, 15 as their multiplication result is 45 but their sum is 18 which is greater than 14
 * 
 * 
*/

package Java;

public class TwoFactorSum {
    public static void main(String[] args) {
        int[] temp = twoFactorSum(30);

        System.out.println(temp[0] + " " + temp[1]);
    }

    public static int[] twoFactorSum(int target) {
        int[] result = new int[2];
        int[][] storage = new int[100][3];
        int counter = 0;

        for (int i = 1; i <= target; i++) {
            if (target % i == 0) {

                storage[counter][0] = target / i;
                storage[counter][1] = i;
                storage[counter++][2] = i + target / i;
            }
        }

        int smallest = storage[0][2], index = 0;
        for (int i = 1; i < counter; i++) {
            if (storage[i][2] < smallest) {
                index = i;
                smallest = storage[i][2];
            }
        }

        result[0] = storage[index][0];
        result[1] = storage[index][1];

        return result;
    }
}