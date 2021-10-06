#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[5],n,j,t,i;
    cout<<"enter the no of elements"<<endl;
    cin>>n;
    cout<<"now enter the elements"<<endl;
    for(i=0;i<n;i++)
    cin>>a[i];
    for(i=0;i<n;i++)
    {
        for(j=0;j<(n-i-1);j++)
        {
           if(a[j]>a[j+1])
           {
        
               t=a[j];
               a[j]=a[j+1];
               a[j+1]=t;
           }
        }   
    }         
    cout<<"sorted array"<<endl;
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";

    return 0;
}    









