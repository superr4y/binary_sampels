#include <stdio.h>
#include <stdlib.h>


typedef struct mylist{
    int a;
    int b;
    void (*foo)(int);
    struct mylist *next; 
}list;

void lalala(int a){
    printf("lalala: %08x\n", a);
}


int main(){
    list la, lb;
    
    // init la
    la.a = 1;
    la.b = 2;
    la.foo = (void (*)(int))&lalala;
    la.next = &lb;

    // init lb
    lb.a = 3;
    lb.b = 4;
    lb.foo = &lalala;
    lb.next = 0;

    printf("la.a = %d, la.b = %d\n", la.a, la.b);
    la.foo(17);
    puts("w00t\n");
    la.next->foo(21);

    return 0;
}
