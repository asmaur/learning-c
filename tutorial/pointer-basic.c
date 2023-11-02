#include <stdio.h>

int main(){
    int a = 0;

    int * point_to_a = &a;

    printf("%d\n", point_to_a);

    return 0;
}