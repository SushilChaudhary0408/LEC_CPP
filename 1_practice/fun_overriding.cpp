#include <iostream>
using namespace std;
class base {

 public:
    void displaycircle(){    //base class
        cout<<"this is a circle";
    }
};
class child:public base{  //derive class
    public:
    void displayrectangle(){
        cout<<"this is a rectangle";
    }
};
int main(){
    child r;
    r.displayrectangle();

return 0;
}