/* %d = Integer, %f = Floating point value's, %c = Chars.*/
#include <stdio.h> /*Header File*/
#include <stdlib.h> /*Header File*/
void calculate_car (int oil, int gas, int maintenance)/*Three variables hidden in a void method*/
{
    int total; 
    oil = 16;
    gas = 45;
    maintenance = 330;
    total = oil + gas + maintenance; /*Setting your three variables to the total */
    printf("\nThe price to fill up your gas tank is %d$.", gas); /* The place where the %d takes your variables spot*/
    printf("\nGetting an oil change with a coupon is %d$.", oil);
    printf("\nIf you drive a Toyota\nover 200,000 miles you will\nroughly spend %d$ in Maintenance.", maintenance);
    printf("\nThe total cost you will spend on the Toyota is %d$ factoring maintenance, one oil change and gas.", total);
}

int main()
{
    calculate_car (1, 2, 3);
    exit(0);
}
