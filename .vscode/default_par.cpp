#include<bits/stdc++.h>
using namespace std;
int sum(int a,int b,int c=3,int d=6)
{
    return(a+b+c+d);

}
int main()
{
    cout<<"sum of 1,2,3,4: "<<sum(1,2,3,4)<<endl;
    cout<<"sum of 1,2,3,6: "<<sum(1,2)<<endl;
    return 0;
}
