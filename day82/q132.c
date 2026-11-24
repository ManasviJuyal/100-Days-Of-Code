//Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.

/*
Sample Test Cases:
Input 1:
GREEN
Output 1:
Go

*/
#include <stdio.h>
enum TrafficLight
{
    RED,
    YELLOW,
    GREEN
};
int main()
{
    enum TrafficLight light;
    char input[20];
    printf("Enter traffic light: ");
    scanf("%19s", input);
    if (input[0] == 'R' || input[0] == 'r')
        light = RED;
    else if (input[0] == 'Y' || input[0] == 'y')
        light = YELLOW;
    else
        light = GREEN;
    switch (light)
    {
        case RED:
            printf("Stop");
            break;
        case YELLOW:
            printf("Wait");
            break;
        case GREEN:
            printf("Go");
            break;
    }
    return 0;
}