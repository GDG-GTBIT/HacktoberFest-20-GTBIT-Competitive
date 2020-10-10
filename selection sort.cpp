#include<iostream>
using namespace std;
int main(){
    int arr[10] = {5,4,3,2,1};
    int n = 5;
    for(int i=0;i<n;i++){
        int min = INT_MAX;
        int minIndex = i;
        for(int j=i;j<n;j++){
            if(arr[j]<min){
                min = arr[j];
                minIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = min;
        arr[minIndex] = temp;
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cin>>n;
}
