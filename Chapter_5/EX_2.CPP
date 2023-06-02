#include<iostream>
using namespace std;
class iteminfo{
   
   int itemid;
   float cost;

   public:

   void getdata(int x,float y)
   {
    itemid=x;
    cost=y;
   }

   void showdata()
   {
    cout<<"\nITEM ID: "<<itemid;
    cout<<"\n COST: "<<cost;
   }

};

int main()
{
    iteminfo i1,i2;
    i1.getdata(55,35.50);
    i2.getdata(555,135.50);
    cout<<"INFOS OF first ITEM:\n";
    i1.showdata();
    cout<<"\n\nINFOS OF second ITEM:\n";
     i2.showdata();
     return 0;
}