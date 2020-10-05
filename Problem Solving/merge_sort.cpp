#include<iostream>
using namespace std;
void merge(int arr[],int start1,int start2,int end){
    int k = start1;
    int m = start2-1;
    int n = end;
    int temp[100];
    int index=0;
    while(start1<=m && start2<=n){
        if(arr[start1]<arr[start2]){
            temp[index++] = arr[start1++];
        }else{
            temp[index++] = arr[start2++];
        }
    }
    while(start1<=m){
        temp[index++] = arr[start1++];
    }
     while(start2<=n){
        temp[index++] = arr[start2++];
    }
    for(int i=0;i<index;i++){
        arr[k+i] = temp[i];
    }
    return;
}
void mergeSort(int arr[],int start,int end){
    if(start>=end){
        return;
    }
    int mid = (start+end)/2;
    mergeSort(arr,start,mid);
    mergeSort(arr,mid+1,end);
    merge(arr,start,mid+1,end);
    return;
}
int main(){
int arr[100] = {5,1,7,2,9};
mergeSort(arr,0,4);
for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
}
