#include <iostream>
using namespace std;
int merge(int arr[], int start, int mid, int end) 
{
int i, j, k; 
int num1 = mid - start + 1; 
int num2 = end - mid; 
// create temporary arrays
int arr1[num1], arr2[num2]; 
// Copy data to temporary arrays arr1[] and arr2[] 
for (i = 0; i < num1; i++) 
arr1[i] = arr[start + i]; 
for (j = 0; j < num2; j++) 
arr2[j] = arr[mid + 1 + j]; 
// Merge the temp arrays back into arr[]
i = 0; // Initial index of first subarray 
j = 0; // Initial index of second subarray 
k = start; // Initial index of merged subarray 
while (i < num1 && j < num2) 
{ 
if (arr1[i] <= arr2[j]) 
{ 
arr[k] = arr1[i]; 
i++; 
} 
else
{ 
arr[k] = arr2[j]; 
j++; 
} 
k++; 
} 

// Copy the remaining elements of arr1[], if there are any 
while (i < num1) 
{ 
arr[k] = arr1[i]; 
i++; 
k++; 
} 

// Copy the remaining elements of arr2[], if there are any
while (j < num2) 
{ 
arr[k] = arr2[j]; 
j++; 
k++; 
} 
} 
int divide(int arr[], int start, int end)
{
if(start < end)
{
int mid;
mid = (start + end) / 2;
divide(arr, start, mid);
divide(arr, mid + 1, end);
merge(arr, start, mid, end);
}
}
int print(int arr[], int n)
{
for(int i = 0; i < n; i++)
{
cout << arr[i] << " ";
}
}

int main()
{
int n, i;
cin >> n;
int arr[n];
for(i = 0; i < n; i++)
{
cin >> arr[i];
}
divide(arr, 0, n - 1);
print(arr, n);
}
