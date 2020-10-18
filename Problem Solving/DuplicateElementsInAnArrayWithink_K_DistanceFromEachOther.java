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
public class DuplicateElementsInAnArrayWithink_K_DistanceFromEachOther {
    static boolean check(int arr[],int k){
    HashSet<Integer> set=new HashSet<>();
    for(int i=0;i<arr.length;i++){
    if(set.contains(arr[i]))
        return true;
    set.add(arr[i]);
    if(i>=k)
        set.remove(arr[i-k]);
    
        }
    return false;
    }
    
    public static void main(String[]args){
   
    
    int arr[]={1,2,3,4,1,2,3,4};
    
   
    int k=3;
    System.out.println(check(arr,k));
}
}
