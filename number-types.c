#include <stdio.h> //Header File
#include <stdlib.h> 

float  Oil_price = 10; // A float  32 bits
long double  Gas_price = 25.00; // A long double 64 Bits 
double  Repair_price = 300.56; // A double 64 bits


int main() {
    printf("\n%f", Oil_price); //10.000000
    printf("\n%Le", Gas_price); //-6.805647e+038 
    printf("\n%f", Repair_price); //300.560000
}
