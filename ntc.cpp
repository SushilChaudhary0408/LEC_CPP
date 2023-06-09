#include<iostream>
using std::cin;
using std::cout;

int main(){
 int select=0;
  while(select!=4){
    cout<<"enter the selection\n";
    cin>>select;

    switch(select){

        case 1:
          cout<<"You entered 1 \n";
          break;

         case 2:
         cout<<"You entered 2\n";
         break;

         case 3:
         cout<<"You entered 3\n"; 
         break;
        
        case 4:
        cout<<"you entered 4\n";
        break;

         default:
         cout<<"invalid selection point\n";
         exit(0);

    }

  }
    return 0;
}