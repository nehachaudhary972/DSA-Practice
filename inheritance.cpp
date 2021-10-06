#include<bits/stdc++.h>
using namespace std;
class Shape
{
protected:
       int width;
       int height;
public:
      void setWidth(int w)
      {
         width=w;
      }
      void setHeight(int h)
      {
         height=h;
      }
};      
class Rectangle:public Shape
{
public:
      int getArea()
    {
     return(width*height);
    }
};
int main()
{
Rectangle Rect;

Rect.setWidth(5);
Rect.setHeight(6);


cout<<"total area: "<< Rect.getArea()  <<endl;
return 0;
}