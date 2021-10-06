#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,a=0,b=1,c,s=1;
    cout<<"enter the number of terms"<<endl;
    cin>>n;
    for(i=2;i<n;i++)
    {
        c=a+b;
        s=s+c;
        a=b;
        b=c;
    }
    cout<<"sum of series" " "<<s;
    return 0;
}