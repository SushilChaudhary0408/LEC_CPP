#include <iostream>
using namespace std;
class student{
    public:
    char name[20];
    char address[30];
    int roll;

    void data(){
        cout<<"enter your mame";
        cin>>name;
        cout<<"enter your address";
        cin>>address;
        cout<<"enter your roll";
        cin>>roll;

    }
    void display(){
        
    }
    };
    int main(){
        int i;
        class student s[3];
        for( i=0; i<3; i++){
            s[i].data();
        }
       for( i=0; i<3; i++){
            s[i].data();
            return 0;
        }

    }
        

