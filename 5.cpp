#include<bits/stdc++.h>
using namespace std;

void dnfSort(int arr[],int n){
    int  low=0;
    int mid=0;
    int high=n-1; 

    while(mid<=high)
    {
        switch(arr[mid])
        {
        case 0:
        swap(arr[low],arr[mid]);
        low++; 
        mid++;
        break;
        case 1:
        mid++;
        break;
        case 2:
        swap(arr[mid],arr[high]);
        high--;
        }
    } 
}      
    int main(){

        int arr[]= {1,2,1,1,2,0,0,1,2};   
        dnfSort(arr,9);
        for(int i=0;i<9;i++){
         cout<<arr[i]<<" ";
    }
    return 0;
}