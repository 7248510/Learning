#include <stdio.h> /*Header File*/
#include <stdlib.h> 
void calculate_time (int mph, int hwy, int city)
{
    mph = 35;
    hwy = 60;
    city = 25;
    printf("If you are traveling 200 miles at %dmph it will take you 5.7 hours\n" ,mph);
    printf("If you are traveling 200 miles at %dmph it will take you 3 hours\n" ,hwy);
    printf("If you are traveling 200 miles at %dmph it will take you 8 hours\n" ,city);
}



int main(int argc, char *argv[]) //argc is the argument count, char *argv[] is the array of characters. 
{
    int mileage = 200;
    calculate_time(1,2,3);
    printf("You are %d miles away from home. \n" ,mileage);
    return 0;
    exit(0);
}
