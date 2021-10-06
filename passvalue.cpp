#include<bits/stdc++.h>
using namespace std;
void swap(int x,int y)
{
    int z=x;
    x=y;
    y=z;
}
int main()
{
    int a=5, b=7;
    cout<<"after swapping "<<endl<<"a: "<<a<<endl<<"b: "<<b<<endl<<endl;
    swap(a,b);

    cout<<"before swapping "<<endl<<"a: "<<a<<endl<<"b: "<<b<<endl<<endl;
    return 0;

}