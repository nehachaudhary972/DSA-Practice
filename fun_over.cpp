#include<bits/stdc++.h>
using namespace std;
int add(int a,int b)
{ 
    cout<<"finction 1"<<endl;
    return (a+b);
}
double add(double a, double b)
{
    cout<<"function 2"<<endl;
    return (a+b);

}
double add(int a, double b)
{
    cout<<"function 3"<<endl;
    return(a+b);

}
int add(int a, int b, int c)
{
   cout<<"function 4"<<endl;
   return(a+b+c);
}  
double add(double a, int b)
{
    cout<<"function 4"<<endl;
    return(a+b);
}


int main()
{ 
   cout<<add(1,2)<<endl;
   cout<<add(9.56,67.34)<<endl;
   cout<<add(45,67.56)<<endl;
   cout<<add(6,8,5)<<endl;
   cout<<add(34.67,7)<<endl;
   return 0;

}
