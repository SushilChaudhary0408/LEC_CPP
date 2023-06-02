#include<iostream>
using namespace std;
class friends{
     int phone;
     char name[20];
     char address[10];

     public:
     void getdata(){
        cout<<"Enter the name of the student:\n";
        cin>>name;
        cout<<"Enter the address of the student:\n";
        cin>>address;
        cout<<"Enter the phone number of the studnet:\n";
        cin>>phone;

     }

     void showdata()
     {
        cout<<"\nNAME: "<<name;
        cout<<"\nADRESS: "<<address;
        cout<<"\nPHONE NUMBER: "<<phone;

     }


};

int main()
{
    friends susil,kristal;
    susil.getdata();
    kristal.getdata();
    cout<<"INFOS OF first STUDENT\n";
    susil.showdata();
    cout<<"\n\nINFOS OF second STUDENT\n";
    kristal.showdata();
    return 0;
}