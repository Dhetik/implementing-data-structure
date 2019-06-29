#include <stdio.h>

struct Rectangle
{
    int length;
    int breadth;
};

int main()
{
    struct Rectangle r = {10, 5};
    struct Rectangle *p =&r;
    printf("the length of the Rectangle is %d\n", r.length ); //Accessing member using Data Variable
    
    (*p).length= 20;  // Accessing members using pointers
    printf("the length of the Rectangle is %d\n", (*p).length);

    p->length = 50 ;   // Accessing members using pointers
    printf("the length of the Rectangle is %d\n", p->length);
}