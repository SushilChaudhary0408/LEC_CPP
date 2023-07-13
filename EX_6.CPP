#include<iostream>
#include<cstring>
using namespace std;

class product{

    int productid;
    char name[15];
    float cost;

    public:

    void setdata(int pid,char pname[],float cst)
    { 
        productid=pid;
        strcpy(name,pname);
        cost=cst;

    }

    void showdata()
    {
        cout<<"PRODUCT ID: "<<productid<<endl;
        cout<<"PRODUCT Name: "<<name<<endl;
        cout<<"PRODUCT Cost: "<<cost<<endl;

    }
};

int main()
{
    product p1,p2;
    p1.setdata(994,"CD-ROM",1500.00);
    p2.setdata(945,"Pen Drive",1000.00);
    cout<<"INFOS OF first PRODUCT\n";
    p1.showdata();
    cout<<"\n\nINFOS OF second PRODUCT\n";
    p2.showdata();
    return 0;
}