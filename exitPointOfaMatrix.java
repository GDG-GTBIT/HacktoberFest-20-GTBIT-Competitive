// Question
// 1. You are given a number n, representing the number of rows.
// 2. You are given a number m, representing the number of columns.
// 3. You are given n*m numbers (1's and 0's), representing elements of 2d array a.
// 4. Consider this array a maze and a player enters from top-left corner in east direction.
// 5. The player moves in the same direction as long as he meets '0'. On seeing a 1, he takes a 90 deg right turn.
// 6. You are required to print the indices in (row, col) format of the point from where you exit the matrix.

// Input Format
// A number n
// A number m
// e11
// e12..
// e21
// e22..
// .. n * m number of elements


// Output Format
// row
// col (of the point of exit)



import java.io.*;
import java.util.*;

public class Main {

    public static void main(String[] args) throws Exception {
       Scanner sc= new Scanner(System.in);
       int row=sc.nextInt();
       int col=sc.nextInt();
       int arr[][]= new int[row][col];
       for(int i=0;i<arr.length;i++){
           for(int j=0;j<arr[0].length;j++){
               arr[i][j]=sc.nextInt();
               
           }
       }
       
      int dir=0, r=0,c=0;
       while(true){
           int val=arr[r][c];
            dir=((dir+val)%4);
            if(dir==0){
                c=c+1;
            }
            else if(dir==1){
                r=r+1;
                
            }else if(dir==2){
                c=c-1;
            }else{
                r=r-1;
            }
            if(r==-1){
                r++;break;
            }else if(c==-1){
                c++; break;
            }else if(r==arr.length){
                r--;break;
            }else if(c==arr[0].length){
                c--;break;
            }
       }
       System.out.println(r);
       System.out.println(c);
       
    }

}