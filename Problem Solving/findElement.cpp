/*This program searches for an element in an array and if its present there it returns its index .
It is solved with O(n) .
Optimize it .  

Inputs : Size of array 
         Elements of array
         Element to be searched */


#include <bits/stdc++.h>
using namespace std ;
int search(int *arr , int target , int n )
{
    for (int i =0 ; i<n ; i++ )
    {
        if (arr[i] == target )
        return i ;
    }
    return -1 ;
}
int main ()
{
    int n ;
    cin >> n ;
    int *arr = new int [n]  ;
    for (int i=0 ; i<n ;i++)
    {
        cin >> arr[i] ;
    }
    int target ;
    cin >> target ;
    int result = search (arr , target , n ) ;
    cout << result ;
    delete[] arr ;
    return 0 ;
}