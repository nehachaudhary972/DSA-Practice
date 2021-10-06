# include<bits/stdc++.h>
using namespace std;
int main()
{
int num1,num2,num,ch;
cout<<"enter your choice"<<endl;
cout<<"press 1 for +"<<endl;
cout<<"press 2 for -"<<endl;
cout<<"press 3 for *"<<endl;
cout<<"press 4 for /"<<endl;
cin>>ch;
cout<<"enter the two value: ";
cin>>num1>>num2;
switch(ch)
{
case 1:
  num=num1+num2;
  cout<<num;
  break;
case 2:
  num=num1-num2;
  cout<<num;
  break;
case 3:
  num=num1*num2;
  cout<<num;
  break;
case 4:
  num=num1/num2;
  cout<<num;
  break;
}
return 0;
}