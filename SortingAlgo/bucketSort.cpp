// Program of the implementation of bucket sort
#include <algorithm> 
#include <iostream> 
#include <vector> 
using namespace std; 
  
void bucketSort(float array[], int n) 
{ 
    // empty bucket creation
    vector<float> buck[n]; 
  
    // divide array elements in different buckets 
    for (int i = 0; i < n; i++) { 
        int bi = n * array[i]; // Index in bucket 
        buck[bi].push_back(array[i]); 
    } 
  
    //Sort individual buckets 
    for (int i = 0; i < n; i++) 
        sort(buck[i].begin(), buck[i].end()); 
  
    // Concatenation of all buckets into array[] 
    int index = 0; 
    for (int i = 0; i < n; i++) 
        for (int j = 0; j < buck[i].size(); j++) 
            array[index++] = buck[i][j]; 
} 
  
// Main function to start
int main() 
{ 
    float array[] = { 0.997, 0.656, 0.1234, 0.134, 0.265, 0.4564 }; 
    int n = sizeof(array) / sizeof(array[0]); 
    bucketSort(array, n); 
  
    cout << "Our sorted array: \n"; 
    for (int i = 0; i < n; i++) 
        cout << array[i] << " "; 
    return 0; 
}
