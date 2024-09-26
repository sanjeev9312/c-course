#include<stdio.h>

int main(){

    char i = 'A';
    char*j = &i;

    float m = 200.25 ;
    float *n = &m ;
    
    printf("The address of i is %p\n", &i);
    printf("The address of i is %p\n", j);
    printf("The address of i is %p\n", &n);
    

    printf("The value of i is %p\n",*(&i));
    printf("The value of m is %u\n",*(&m));


    return 0;
    }