#include<bits/stdc++.h>
using namespace std;
int max(int x,int y)
{
    if(x>y)
    return x;
    else
    return y;
}
int main()
{
   int a,b;
   cout<<"enter two number to find the greatest"<<endl;
   cin>>a>>b;
   int c = max(a,b);
   cout<<"greatest value is: "<<c<<endl;
   cout<<"find the greatest value from 5,78 is: "<<max(5,78);
   return 0;

}
