#include <stdio.h>
int main()
{
    int speed,time,distance;
    printf("Enter the speed and time: ");
    scanf("%d %d", &speed, &time);
    distance = speed * time; 
    printf("The distance travelled by an object %d", distance);
    return 0;
}