#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={2, 4, 6, 8 ,10, 12},i,n=6,k=2;
    sort(arr,arr+n);
    cout<<" largest number: "<<endl<<endl;
    for(i=0;i<k;i++)
    {
        cout<<arr[n-i-1]<<" ";
    
    } 
    cout<<endl;
    cout<<"smallest number: "<<endl;
    for(i=0;i<k;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;

}