#include <stdio.h>

int main(void) 
{
    int age = 21;
    printf("The variable %s is stored at memory location %p and holds the value %d\n", "age", &age, age);
    
    int *pAge;
    
    pAge = &age;
    printf("The variable %s is stored at memory location %p and holds the value %d\n", "age", pAge, age);
    
    printf("The variable %s is stored at memory location %p and holds the value %d\n", "age", pAge, *pAge);
    
    return 0;
}

// https://docs.google.com/document/d/1_mWNqcPbA8ugSD6HQpYz78MM0VcAQK9-_rg4tXeMOCE/edit?usp=sharing