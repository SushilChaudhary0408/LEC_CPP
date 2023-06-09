#include<stdio.h>
#include<stdlib.h>
int main()
{

    int n;
    printf("enter the value of n: ");
    scanf("%d",&n);
    int m=1;
  
    if(n==1 || n==0)
    {
        printf("\nthe factorial is 1\n");
        exit(13);
    }
       while(n!=1){
        m=m*n;
        n=n-1;
        }

   
    printf("the factorial = %d",m);
    return 0;
}