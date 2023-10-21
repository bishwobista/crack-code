// Q: There are n stairs, a person standing at the bottom wants to climb stairs to reach the nth stair. 
// The person can climb either 1 stair or 2 stairs at a time, the task is to count the number of ways that a person can reach at the top.

//SOLUTION: 

import java.util.Scanner; // Import the Scanner class for user input.

public class StairClimbingWays {
    public static int countWaysToClimbStairs(int n) {
        if (n <= 1) {
            // There's only one way to climb 0 or 1 stair (by doing nothing or climbing 1 step).
            return 1;
        }

        // Create an array to store the number of ways to reach each stair.
        int[] ways = new int[n + 1];
        ways[0] = 1; // There's one way to climb 0 stairs (by doing nothing).

        // There's one way to climb the first stair (by climbing 1 step).
        ways[1] = 1;

        for (int i = 2; i <= n; i++) {
            // The number of ways to reach the current stair is the sum of ways to reach
            // the previous stair and the stair before the previous one (1 or 2 steps at a time).
            ways[i] = ways[i - 1] + ways[i - 2];
        }

        // The final value in the ways array represents the total number of ways to reach the top.
        return ways[n];
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the number of stairs: ");
        int n = scanner.nextInt();

        int ways = countWaysToClimbStairs(n);
        System.out.println("Number of ways to climb " + n + " stairs: " + ways);


        scanner.close();
    }
}
