#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,d,s=0;
    cout<<"enter the number"<<endl;
    cin>>n;
    m=n;
    while(m>0)
    {
        d=m%10;
        s=s+d;
        m=m/10;
    }
    cout<<"sum of the digit" " "<<s;
    return 0;
}