#include <stdio.h>
void main(){
int *pc, p;
p = 5;
pc = &p;
printf("value of address of c is given by pointer variable %p", pc);
printf("value of value of c is given by *pc i.e %d", *pc);
}