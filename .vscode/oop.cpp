#include<bits/stdc++.h>
using namespace std;
class Cars
{
    private:
     string company_name;
     string model_name;
     string fuel_type;
     float milage;
     double price;

     public:
     void setData(string cname,string mname,string ftype,float m,double p)
     {
         company_name=cname;
         model_name=mname;
         fuel_type=ftype;
         milage=m;
         price=p;
     }
     void displayData()
     {
         cout<<"car properties: "<<endl;
         cout<<"company name: "<<company_name<<endl;
         cout<<"model name: "<<model_name<<endl;
         cout<<"fuel type: "<<fuel_type<<endl;
         cout<<"milage: "<<milage<<endl;
         cout<<"price: "<<price<<endl;
      }
};
int main()
{
    Cars car1 ,car2;
    car1.setData("toyota","atlas","petrol",15.5,150000);
    car2.setData("ritz","mn78","desiel",16.5,190000);
    car1.displayData();
    car2.displayData();
    return 0;

    
}