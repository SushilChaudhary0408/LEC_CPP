#include <iostream>
using namespace std;
class parent {
    public:
    void display(parent);

};
class child : public parent {
    public:
    void display(child);
};
int main(){
parent *bptr;
child c1;
bptr = &c1;
bptr->display();

return 0;
}