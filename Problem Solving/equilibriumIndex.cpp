/*This program finds Equilibrium index in an array.
It is solved in O(n^2) . 
Optimize it and find the bugs it has to get the desired output

Inputs : Size of array 
         Elements of array 

Output : Equilibrium Index if it has one otherwise -1*/


#include <bits/stdc++.h>
using namespace std ;

int   equilPoint(int *arr , int n )
{
     
    for (int i=0 ; i<n ; i++)
    {
        int lowsum=0 ;
        for (int j=0 ; j<n ; j++)
        {
            lowsum += arr[j] ;
        }

        int highsum=0 ;
        for (int j=i; j<n ; j++)
        {
            highsum +=arr[j] ;
        }
        if (lowsum == highsum)
        return i ;
    }
    return -1  ;
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
    int result = equilPoint(arr , n ) ;
    cout << result ;
    delete[] arr ;
    return 0 ;
}