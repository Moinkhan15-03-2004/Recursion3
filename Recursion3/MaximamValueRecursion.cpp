#include<iostream>
using namespace std;
void printmax(int arr[],int n,int idx,int max){
    if(idx==n){
        cout<<max;
        return;

    }
    if(max<arr[idx]) max = arr[idx];
    printmax(arr,n,idx+1,max);
}
int maxInArray(int arr[],int n,int idx){
    if(idx==n) return INT16_MIN;
    return max(arr[idx],maxInArray(arr,n,idx+1));
}
int main(){
    int arr[] = {2,1,6,3,1,9,0,2,100,5};
    int n= sizeof(arr)/sizeof(arr[0]);
   // printmax(arr, n,0,arr[0]);
    cout<<maxInArray(arr,n,0);
}