#include <stdio.h>

int main() {

    int var = 20; //Variable declaration
    int *pvar;  // pointer declaration

    pvar=&var; // adresa var premennej je uchovana v pointeri

    printf("Address of var variable: %x \n", &var);

    printf("Address of pvar : %x \n", pvar);

    printf("Value of *pvar : %d \n", &pvar);



    return 0;
}
