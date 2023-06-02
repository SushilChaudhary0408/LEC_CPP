#include <iostream>
using namespace std;
class a{
    public:
    int data;
    void getdata(){
        cout<<"Enter the data";
        cin>>data;
    }
    void showdata()
    {
        cout<<"the value of a is"<<data<<"";
    
    }
   
        
    };

     class b{
        public:
        int b;
        class a c1;
        void getdata(){
             
            
            cout<<"Enter the value of b\n";
            cin>>b;
             c1.getdata();
        }
        void showdata(){
            c1.showdata();
         cout<<"the value of b is "<<b<<"\n";
        }

};

int main()
{
    class b c2;
    c2.getdata();
    c2.showdata();


    return 0;

}