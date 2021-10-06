#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[5],n,m,i;
    cout<<"enter number of element"<<endl;
    cin>>n;
    cout<<"now enter the elements"<<endl;
    for(i=0;i<n;i++)
    cin>>a[i];
    cout<<"now enter search element"<<endl;
    cin>>m;
    for(i=0;i<n;i++)
         if(a[i]==m)
            break;
    if(i==n)   
    cout<<"element not found"<<endl;
    else
    cout<<"location of "<<m<< " ""is"" "<<(i++);
       return 0;
}
