#include <stdio.h>
int main()
{ 
    int * pc, c;
    c=20;
    printf(" Adders of c: %p\n", &c);
    printf(" value of c: %d\n\n", c);

    pc= &c;
     printf(" Adders of pointer pc: %p\n", pc);
     printf(" content of pc: %d\n\n", *pc);

     c=11;
     printf(" Adders of pointer pc: %p\n", pc);
     printf(" content of pc: %d\n\n", *pc);

     *pc = 2;
     printf(" Adders of c: %p\n", pc);
     printf(" value of c: %d\n\n", c);
     return 0;
}