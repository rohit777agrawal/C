#include <stdio.h>
#include <math.h>

int main(){

    char name[20];
    printf("What is your name? ");                      // scanf for string: scanf(%s, name);
    fgets(name, 20, stdin);                             // scanf(%d, %age); -> int %lf -> double %c -> char
    printf("You name is %s.\n", name);                  // use fgets for string
    return 0;
}