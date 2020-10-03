package assignment2;

import java.util.Scanner;

public class ArrayManipulation {
public static void main(String[] args) {
	 Scanner scn=new Scanner(System.in);
	 int n=scn.nextInt();
	 int q=scn.nextInt();
	 int[][] queries=new int[q][3];
	 for(int i=0;i<q;i++) {
		 for(int j=0;j<3;j++) {
			 queries[i][j]=scn.nextInt();
		 }
	 }
	 System.out.print(arrayManipulation(n, queries));
}
public static long arrayManipulation(int n, int[][] queries) {
    long[] ar=new long[n];
    for(int i=0;i<queries.length;i++){
      int a=queries[i][0],b=queries[i][1],k=queries[i][2];
      for(int j=a;j<b;j++){
          ar[j-1]+=k;
      }
    }
    long max=Integer.MIN_VALUE;
    for(int k=0;k<ar.length;k++){
        if(ar[k]>max){
            max=ar[k];
        }
    }
    return max;
}
//THE EFFECTIVE SOLUTION TO THE PROBLEM
//static long arrayManipulation(int n, int[][] queries) {
//    long max = 0L;
//    long[] arr = new long[n];
//    for (int i = 0; i < n; i++) {
//        arr[i] = 0L;
//    }
//    for (int i = 0; i < queries.length; i++) {
//        int[] q = queries[i];
//        int start = q[0] - 1;
//        int end = q[1] - 1;
//        int val = q[2];
//        long tempMax = updateVal(start, end, val, arr);
//        if (tempMax > max) {
//           max = tempMax;
//        }
//    }
//    return max;
// }
//
//
//
//static long updateVal(int start, int end, int val, long[] arr) {
//   long max = 0L;
//   for (int i = start; i <= end; i++) {
//       arr[i] = arr[i] + val;
//       if (arr[i] > max) {
//           max = arr[i];
//       }
//   }

//O(m+n)
//static long arrayManipulation(int n, int[][] queries) {
//	   long max = 0L;
//	   long[] ar = new long[n+2];
//	   for (int i = 0; i < n; i++) {
//	       ar[i] = 0L;
//	   }
//	   for (int i = 0; i < queries.length; i++) {
//	       int[] q = queries[i];
//	       int start = q[0];
//	       int end = q[1];
//	       int val = q[2];
//	       ar[start]+=val;
//	       ar[end+1]-=val;
//	   }
//	   max=updateVal(ar);
//	   return max;
//	}
//
//
//
//	static long updateVal(long[] arr) {
//	  long max = 0L;
//	  long sum=0;
//	  for (int i = 0; i < arr.length; i++) {
//	     sum+=arr[i];
//	     max=Math.max(max,sum);
//	  }
//	  return max;
//	    }
}
