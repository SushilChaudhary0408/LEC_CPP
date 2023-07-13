#include <iostream>
using namespace std;
class parent {
    public:
    parent()
    {
        cout<<"\n call the parent base class constructor";
    }
    ~parent(){

    cout<<"\n call the parent bass destructor";
    }

};
class child : public parent{
    public:
    child()
    {
        cout<<"\n call the child derive class constructor";
    }
    ~child(){

    cout<<"\n call the parent bass destructor";
    }


};
int main(){
    parent p1;
    child c1;
return 0;
}
