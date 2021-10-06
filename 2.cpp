#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[5],i,n,s,l;
    cout<<"Enter the size of an array: "<<endl;
    cin>>n;
    cout<<"now enter the elements: "<<endl;
    for(i=0;i<n;i++){
    cin>>a[i];
    }
    s=a[0];
    l=a[0];
    for(i=1;i<n;i++)
    {
        if(s>a[i])
        s=a[i];
        else if(l<a[i])
        l=a[i];

    }
     cout<<"smallest number = "<<s<<endl;;
     cout<<"largets number  =   "<<l<<endl;
     cout<<endl;
     return 0;
}