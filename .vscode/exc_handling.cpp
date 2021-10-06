#include<bits/stdc++.h>
using namespace std;
int main()
{
  int numerator,denominator,result=0;
  cout<<"enter two number"<<endl;
  cin>>numerator>>denominator;
try
{ 
    if(denominator==0)
    {

       throw denominator;

    }
    result = numerator/denominator;
}
catch(int ex)
{
    cout<<"expection: divide by zero is not allowed  "<<endl<<ex<<endl;
    
}
    cout<<"Division is: "<<result;

  return 0;

}

