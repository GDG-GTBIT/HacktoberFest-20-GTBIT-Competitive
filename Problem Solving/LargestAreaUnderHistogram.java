/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author a
 */
import java.util.*;
public class LargestAreaUnderHistogram {
    public static int largestarea(int [] h){
    if(h.length==0) return 0;
    if(h.length==1) return h[0];
    Stack<Integer> s=new Stack<>();
    int max=0;
    s.push(0);
    for(int i=1;i<h.length;i++){
        if(h[i]>=h[s.peek()]){
        s.push(i);
        }
        else {
        while(!s.isEmpty() && h[i]<=h[s.peek()]){
            int temp=h[s.pop()];
            if(s.isEmpty()){
            max=Math.max(max,temp*i);}
            else 
                 max=Math.max(max,temp*(i-s.peek()-1));
            
        }
        s.push(i);
        }
        
    }
    if(!s.isEmpty()){
    int i=h.length;
    while(!s.isEmpty()){
    int temp=h[s.pop()];
    if(s.isEmpty()){
         max=Math.max(max,temp*i);
    }
    else 
         max=Math.max(max,temp*(i-s.peek()-1));
    
    }
    }
    return max;
    
}
    public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
    int n=sc.nextInt();
    int h[]=new int[n];
    for(int t=0;t<n;t++){
    h[t]=sc.nextInt();
    }
    System.out.println("The largest area is"+" "+largestarea(h));
    
    
    }
    
}
