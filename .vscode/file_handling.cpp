#include<bits/stdc++.h>
using namespace std;
int main()
{
    char arr[100];
    cout<<"enter name and age"<<endl<<endl;
    cin.getline(arr,100);
    ofstream myfile("abc.txt",ios::app);
    myfile<<arr;
    myfile.close();
    cout<<"file write operation performed successfully"<<endl<<endl;
    cout<<"reading from file operation started"<<endl;
    char arr1[100];
    ifstream obj("xyz.txt");
    obj.getline(arr1,100);
    cout<<"array content: "<<arr1<<endl;
    cout<<"file read operation completed";
    obj.close();

    return 0;
    



}