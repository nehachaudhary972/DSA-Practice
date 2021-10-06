#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a=-1,b=1,c,i;
    cout<<"enter the number of terms"<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        c=a+b;
        cout<<c;
        a=b;
        b=c;
    }
    return 0;

}
