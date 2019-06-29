//Accessing Heap Memory

#include<stdio.h> 
#include <stdlib.h>
int main()
{
    int *a;
    a =(int *)malloc(5*sizeof(int));
    a = new int[5];  //this only works in c++       
}