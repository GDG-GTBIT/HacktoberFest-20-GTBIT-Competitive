#include<iostream>
using namespace std;
int main()
{
int n, i, j, temp, min;
cin >> n;
int arr[n];
for(i = 0; i < n; i++)
{
cin >> arr[i];
}
for (i = 0; i < n - 1; i++) 
{ 

// Finding the minimum element in unsorted array 
min = i; 
for (j = i + 1; j < n; j++) 
if (arr[j] < arr[min]) 
min = j; 

// Swaping the found minimum element with the first element 
temp = arr[min];
arr[min] = arr[i];
arr[i] = temp;
} 
for(i = 0; i < n; i++)
{
cout << arr[i] << " ";
}
}
