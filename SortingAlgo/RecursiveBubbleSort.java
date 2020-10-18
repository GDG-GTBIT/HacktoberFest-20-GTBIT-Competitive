/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @vaishnavi khurana
 */
import java.util.*;
public class RecursiveBubbleSort {
    static void bubbleSort(int arr[], int n)
    {
        // Base case
        if (n == 1)
            return;
      
        // first  pass of bubble sort. After
        // this pass, the largest element
        // is moved  to end.
        for (int i=0; i<n-1; i++)
            if (arr[i] > arr[i+1])
            {
                // Now we have to swap arr[i], arr[i+1]
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
      
        // Largest element is fixed,
        // recur for remaining array
        bubbleSort(arr, n-1);
    }
     
    // Driver Method
    public static void main(String[] args)
    {
        int arr[] = {64, 34, 25, 12, 22, 11, 90};
      
        bubbleSort(arr, arr.length);
         
        System.out.println("Sorted array : ");
        System.out.println(Arrays.toString(arr));
    }
}

