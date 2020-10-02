package assignment2;

import java.util.Scanner;

public class RainWaterTrapping {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner scn = new Scanner(System.in);
		int t = scn.nextInt();
		while (t > 0) {
			int n = scn.nextInt();
			int[] one = new int[n];
			for (int i = 0; i < n; i++) {
				one[i] = scn.nextInt();
			}
			rainWater(one);
			t--;
		}
	}

	public static void rainWater(int[] arr) {

		int MaxWaterTrapped = 0;
		for (int b = 0; b < arr.length; b++) {
			int left = Integer.MIN_VALUE;
			for (int l = b; l >= 0; l--) {
				if (arr[l] > left)
					left = arr[l];
			}
			int right = Integer.MIN_VALUE;
			for (int r = b ; r < arr.length; r++) {
				if (arr[r] > right)
					right = arr[r];
			}
			int WaterperBuilding = Math.min(left, right) - arr[b];
			MaxWaterTrapped += WaterperBuilding;
		}
		System.out.println(MaxWaterTrapped);
	}

}
