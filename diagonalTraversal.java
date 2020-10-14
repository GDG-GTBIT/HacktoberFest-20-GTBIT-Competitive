import java.io.*;
import java.util.*;

public class Main {

    public static void main(String[] args) throws Exception {
      Scanner sc= new Scanner(System.in);
      int n=sc.nextInt();
      int arr[][]=new int[n][n];
      for(int i=0;i<arr.length;i++){
          for(int j=0;j<arr.length;j++){
              arr[i][j]=sc.nextInt();
              
          }
         
      }
    
          for(int gap=0;gap<n;gap++){
              for(int i=0, j=i+gap; j<n;i++,j++){
                  System.out.println(arr[i][j]);
              }
          }
      
      
    }

}