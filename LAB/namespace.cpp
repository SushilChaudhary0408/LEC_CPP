#include <iostream>
namespace BEI{
char subject[20] = "Electronics";
int room = 401;
void printSubject()
{
    std::cout<<subject<<std::endl;
}
}
void printRoom(){
    std::cout<<"room"<<std::endl;
}
namespace BCT{
    char subject[30] = "Software Engineering";
    int labRoom = 401;
void printSubject(){
std::cout<<subject<<endl;
}
void printLabRoom(){
std::cout<<labRoom<<std::endl;
}
}
int main()
{
using namespace BEI;
using namespace BCT;
printLabRoom();
printRoom();
BEI::printSubject();
BCT::printSubject();
return 0;
}