package hacktoberfest;
import java.util.*;

public class LinearSearch {
	
	public static int linearSearch(int[] arr, int key) {
		
		int n = arr.length;
		int i, flag = 0;
		
		// Traversing array to find the key
		for(i=0; i<n; i++) {
			if(arr[i]==key) {
				flag = 1;
				break;
			}
		}
		
		// Returning the index if the key was found
		if(flag==1) {
			return i;
		}
		else {
			return -1;
		}
	}

	// Driver code
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		int[] arr = {1, 4, 9, 16, 25};
		
		// User input for the key to be searched
		System.out.print("Enter Key To Be Searched = ");
		int key = sc.nextInt();
		
		// Calling the method
		int idx = linearSearch(arr, key);
		
		if(idx == -1) {
			System.out.println("Key Not Found!!");
		}
		else {
			System.out.println("Found At Position - " + (idx+1));
		}
	}

}
