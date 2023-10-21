import java.util.*;
class PowerOfNum {
    public static double myPow(double x, long n) {
        // System.gc();
        if (n == 0) 
            return 1;
        if (n < 0) 
            return 1/myPow(x,-n);
        if (n%2 == 1) 
            return x*myPow(x,n-1);
        return myPow(x*x, n/2);
    }
    public static void main(String[] args) {
   	Scanner sc = new Scanner(System.in);
	System.out.println("Reading base... ");
	int base = sc.nextInt();
	System.out.println("Reading power... "); 
	int power = sc.nextInt();
	System.out.println("Result : " + myPow(base, power));
    }
}
