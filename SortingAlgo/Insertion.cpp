#include<iostream>
using namespace std;
int main()
{
int i, n, j, temp, min, key;
cin >> n;
int arr[n]; 
for(i = 0; i < n; i++)
{
cin >> arr[i];
}
for (i = 1; i < n; i++) 
{ 
key = arr[i]; 
j = i - 1; 
// comparing whether the first element is greater than the second element
// if yes, then store the largest element to the next position
while (j >= 0 && arr[j] > key)
{ 
arr[j + 1] = arr[j]; 
j = j - 1; 
} 
// storing the smallest element in the correct position
arr[j + 1] = key; 
} 
for(i = 0; i < n; i++)
{
cout << arr[i] << " ";
}
}