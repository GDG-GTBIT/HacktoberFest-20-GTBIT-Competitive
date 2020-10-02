package assignment2;

import java.util.Scanner;
import java.util.Stack;

public class NextGreaterElement {

		public static void main(String[] args) {

			Scanner scn = new Scanner(System.in);

			int t = scn.nextInt();

			while (t > 0) {
				int n = scn.nextInt();
				int[] arr = new int[n];

				for (int i = 0; i < arr.length; i++)
				arr[i] = scn.nextInt();

				nextLarger(arr);

				t--;
			}

		}

		// Function to print Next Greater Element for each element of the array
		public static void nextLarger(int[] arr,int idx,String ans) {
			
		}
}
