#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,d,s=0;
    cout<<"enter the number to find whether its armstrong or not";
    cin>>n;
    m=n;
    while(m>0)
    {
        d=m%10;
        s=s+d*d*d;
        m=m/10;
    }
    if(n==s)
        cout<<"armstrong"<<endl;
    else
         cout<<"not armstrong"<<endl;
   return 0;
}           


