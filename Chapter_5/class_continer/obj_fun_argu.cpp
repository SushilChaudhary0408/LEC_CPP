#include <iostream>
using namespace std;
class student{
    public:
    int marks;
    student(double x)
    {
        marks=x;
    }
};
   void calculateaverage (student s1, student s2)
   {
    cout<<"the average is "<<(s1.marks+s2.marks)/2<<"\n";

   }
 
 int main(){
    class student s3(100),s4(200);
    calculateaverage(s3,s4);
    return 0;
     
 }
