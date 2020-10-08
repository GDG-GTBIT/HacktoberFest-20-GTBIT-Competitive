/*This program finds leader elements of an array.
It is solved with (On^2) . Optimize it .
Inputs : Size of array 
         Elements of array
Output : Leader Elements         */

#include <bits/stdc++.h>
using namespace std ;
void leaders (int *arr , int n)
{
	/*	--Old Algorithm
    for (int i = 0; i < n; i++) 
    { 
        int j; 
        for (j = i+1; j < n; j++) 
        { 
            if (arr[i] < arr[j]) 
                break; 
        }     
        if (j == n) 
            cout << arr[i] << " "; 
    } 
    return ;
    */
    
    //	--New Algorithm--
    int leader =  arr[n-1]; 
  
    cout << leader << " "; 
      
    for (int i = n-2; i >= 0; i--) 
    { 
        if (leader <= arr[i])  
        {            
            leader = arr[i]; 
            cout << leader << " "; 
        } 
    }     
}

int main ()
{
    int n ;
    cin >> n ;
    int *arr = new int [n] ;
    for (int i=0 ; i<n ; i++) 
    {    
        cin >> arr[i] ;
    }
    leaders (arr , n) ;
    delete[] arr ;
    return 0 ;
}
