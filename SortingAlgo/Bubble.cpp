#include<iostream>
#include<stdbool.h>
using namespace std;

int main()
{
int n, i, j, temp;
bool swapped;
cin >> n;
int arr[n];
for(i = 0; i < n; i++)
{
cin >> arr[i];
}
for(i = 0; i < n - 1; i++) // to keep track of number of iteration
{
swapped = false; // to check whether swapping of two elements happened or not
for(j = 0; j < n - i - 1; j++) // to compare the elements within the particular iteration
{

// swap if any element is greater than its adjacent element
if(arr[j] > arr[j + 1]) 
{
temp = arr[j];
arr[j] = arr[j + 1];
arr[j + 1] = temp;
swapped = true;
}
}

// if swapping of two elements does not happen then break
if(swapped == false)
break;
}
for(i = 0; i < n; i++)
{
cout << arr[i] << " ";
}
}