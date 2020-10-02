package assignment2;
import java.io.*;
import java.util.*;

public class bargraph{

public static void main(String[] args) throws Exception {
    Scanner scn=new Scanner(System.in);
    int n=scn.nextInt();
    int[] arr=new int[n];
    int max=0;
    for(int i=0;i<n;i++){
        arr[i]=scn.nextInt();
        if(max<arr[i]){
            max=arr[i];
        }
    }
    int row=1;
    int rows=max;
    for (int r = 1; r <= max; r++) {
		for (int i = 0; i < arr.length; i++) {
			if (r <= max - arr[i])
				System.out.print(" ");
			else
				System.out.print("*");
		}
		System.out.println();
	}

}
}

