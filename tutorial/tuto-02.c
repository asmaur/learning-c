#include <stdio.h>

int print_big(int number);

int main(){
    printf("%d\n", print_big(55));
    printf("%d\n", print_big(90));
    printf("%d\n", print_big(100));
    return 0;
}

int print_big(int number){
    static int total = 0;
    total += number;

    return total;
}