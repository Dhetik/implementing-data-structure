#include <stdio.h>
struct Rectangle
{
    int length;
    int breadth;
};

int main()
{
    struct Rectangle amp; //Declaration
        printf("The length of rectangle is %d and breadth is %d", amp.length, amp.breadth);

    struct Rectangle amp = {10, 5}; //Initialization with Declaration
    printf("The length of rectangle is %d and breadth is %d", amp.length, amp.breadth);

    //Accession the property using dot operator
    amp.length = 15;
    amp.breadth = 10;
        printf("The length of rectangle is %d and breadth is %d", amp.length, amp.breadth);

    return 0;
}