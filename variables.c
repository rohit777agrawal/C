#include <stdio.h>
#include <math.h>

int main(){
    
    const int vaue = 354;                                       //This value can't be changec
    char charaterName[]= "John";
    int age = 35;                                                // integer %d
    double gpa = 3.7;                                           // decimal number %f
    char grade = 'A';                                           // One single character %c
    char phrase[] = "Something store";                          //String is stored as an array in char. %s

    printf("There once was a man named %s\n", charaterName);     // placeholder for string or char
    printf("He is %d years old.\n", age);                        // placeholder for int
    printf("His GPA is %f\n", gpa);
    printf("His grade is %c\n", grade);


    printf("%f\n", pow(2,3));    //2^3
    printf("%f\n", sqrt(16));
    printf("%f\n", ceil(36.35));
    printf("%d\n", vaue);
    return 0;
    
}