/*Goal: Print 25 & 3 */
#include <stdio.h>

void add_two_vars (int a, int b)
{
    int c;
    c = a + b; 
    printf ("%d\n", c);
}

int main()
{
    int var1, var2; /* Initalizing the variable */
/*variables obtaining the value's that were supplied them */
    var1 = 2;
    var2 = 23;

add_two_vars (var1 , var2); /* Both of the variable names */
add_two_vars (1,2); /* The places of the variables */
/*The function add_two_vars being created, it's purpose is to add two variables */
}

