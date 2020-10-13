/*This program searches for an element in an array and if its present there it returns its index .
It is solved with O(n) .
Optimize it .  

Inputs : Size of array 
         Elements of array
         Element to be searched */


#include <bits/stdc++.h>
using namespace std ;
/*int search(int *arr , int target , int n )
{
    for (int i =0 ; i<n ; i++ )
    {
        if (arr[i] == target )
        return i ;
    }
    return -1 ;
} */

//Implementing binary search reduce time complexity
int search(int *arr, int target, int n)
{
    int l=0;
    int r=(n-1);
    int step;
    while(r>=l)
    {
        int mid = (l+(n-1))/2;
        step++;

        if(a[mid]==target)
        return mid;

        else if(a[mid]>target)
            r= mid-1;

        else
            l = mid-1;
    }
    return -1;
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
