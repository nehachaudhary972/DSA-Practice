#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[6],n;
    cout<<"enter the size of array: "<<endl;
    cin>>n;
    cout<<"enter the elements of array: "<<endl;
    for(int i=0;i<n;i++){
    cin>>arr[i];
    }
    cout<<"The new list is: "<<endl;
    int i=-1;
    int pivot=0;
    for(int j=0;j<n;j++) 
    {
        if(arr[j]<pivot)
        {
        i++;
        swap(arr[i],arr[j]);
        }

  }
  for(i=0;i<n;i++) cout<<arr[i]<<" ";
  
      return 0;


}