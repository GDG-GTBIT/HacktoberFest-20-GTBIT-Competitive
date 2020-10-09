//Radix Sort
#include <iostream>
using namespace std;

// this function will do count sort od array to digit which
// are represent by exp
void countSort(int array[], int n, int exp)
{
    int out[n]; // output array
    int i, count[10] = { 0 };
 
    // count stores freqeuncy of specific digit
    for (i = 0; i < n; i++)
        count[(array[i] / exp) % 10]++;
 
    //set actual position
    for (i = 1; i < 10; i++)
        count[i] += count[i - 1];
 
    // Build the output array
    for (i = n - 1; i >= 0; i--) {
        out[count[(array[i] / exp) % 10] - 1] = array[i];
        count[(array[i] / exp) % 10]--;
    }
 
    //change array according to sorting order of curent digit
    for (i = 0; i < n; i++)
        array[i] = out[i];
}
 
// Radix Sort
void radixSort(int array[], int n)
{
    //First we have to find the maximum number to find maximum digits
    int max = array[0];
    for (int i = 1; i <n; i++){
        if (array[i] > max)
            max = array[i];
    }
   // count sort for every digit
    // exp is passed. exp is 10^i  where i is current digit number
    for (int exp = 1; max/exp > 0; exp *= 10)
        countSort(array, n, exp);
}
 
// Function to print an array
void printArray(int array[], int n)
{
    for (int i = 0; i<n; i++){
        cout<<array[i]<<" ";
    }
}
 
// main function
int main()
{
    int array[] = { 230,12, 1, 190, 450, 47, 45, 231 };
    int n =  sizeof(array)/sizeof(array[0]);
    
    radixSort(array, n);
    printArray(array, n);
    return 0;
}
