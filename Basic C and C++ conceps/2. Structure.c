// 1. Defining Structue
// 2. Size of Structure
// 3. Declarion of structure
// 4. Accessing the members

// 1. Defining Structue
#include <stdio.h>
struct Rectangle
{
    int length;  // size is 2
    int breadth; // size is 2
};

// 3. Declarion of structure
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