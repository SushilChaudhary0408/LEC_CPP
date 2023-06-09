#include <iostream>
using namespace std;
string arr[3][3]={{"00","01","02"},{"10","11","12"},{"20","21","22"}} ;
int i,j,k,a,b,inputi,inputj;
string turn ="X";

void refresh(){

cout<< arr[0][0] <<" " <<arr[0][1]<<" "<<arr[0][2]<<endl;
cout<< arr[1][0] <<" " <<arr[1][1]<<" "<<arr[1][2]<<endl;
cout<< arr[2][0] <<" " <<arr[2][1]<<" "<<arr[2][2]<<endl;

    for(i = 0 ; i <3; i++){
 
        if (arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2]  )
        {
            cout<<arr[i][0]<<" HAS WON"<<endl;
            arr[i][0]=".";
        }
        if (arr[0][i] == arr[1][i] && arr[1][i] == arr[2][i]  )
        {
            cout<<arr[0][i]<<" HAS WON"<<endl;
            arr[0][i]=".";
        }
       
      
       }
    
       if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2]  )
        {
            cout<<arr[0][0]<<" HAS WON"<<endl;
            arr[0][0]=".";
           
        }
        if (arr[2][0] == arr[1][1] && arr[1][1] == arr[0][2]  )
        {
            cout<<arr[2][0]<<" HAS WON"<<endl;
            arr[2][0]=".";
         
        }

}
    



 int main(){



for ( i = 0; i <=9 ;i++)
{
    cout<< "enter the positon to fill";
    cin >>inputi>>inputj;
    if( turn =="X")
    {
        arr[inputi][inputj] ="X";
        turn = "O";
    }
  else
    {
        arr[inputi][inputj] ="O";
        turn = "X";
    }
    

    refresh();


 }
 }
