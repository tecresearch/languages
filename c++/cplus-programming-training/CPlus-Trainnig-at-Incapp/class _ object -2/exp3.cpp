#include<iostream>
using namespace std;
class Demo
{
  public:
            int x;
            int y;
             Demo(int a,int b)
             {
                 x=a;
                 y=b;
                 cout<<" const. x : "<<x<<endl;
                   cout<<"const  y : "<<y<<endl;
             }
             void Show()
             {
                 cout<<"Show x : "<<x<<endl;
                   cout<<"Show y : "<<y<<endl;
             }

};
main()
{
   Demo d1= Demo(2,5), d2(34,67);
   Demo *d= new Demo(3,5);
}

