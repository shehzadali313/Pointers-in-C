#include <stdio.h>

int main()
{

    int a = 1337;
    int* a_p = &a;
    int value_a = *(a_p);

    float b = 313.3;
    float* b_p = &b;
    float value_b = *(b_p);

    char c = 'S';
    char* c_p = &c;
    char value_c = *(c_p);

    printf("-------------Addressess------------------\n");
    printf("\t The Address of a is %p \n", a_p);
    printf("\t The Address of b is %p \n", b_p);
    printf("\t The Address of c is %p \n", c_p);

    printf("----------Accessing Exact values-----------\n");
    printf("\t The Address of a is %d \n", value_a);
    printf("\t The Address of b is %f \n", value_b);
    printf("\t The Address of c is %c \n", value_c);

    return 0;
}
