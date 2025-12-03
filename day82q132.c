/* Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value. */

#include<stdio.h>
#include<string.h>

enum TrafficLight { RED, YELLOW, GREEN };

int main(){
    enum TrafficLight light;
    char input[20];
    printf("Enter the traffic light colour: ");
    gets(input);

    if(strcmp(input, "RED") == 0){
        light = RED;
    }else if(strcmp(input, "YELLOW") == 0){
        light = YELLOW;
    }else if(strcmp(input, "GREEN") == 0){
        light = GREEN;
    }else{
        printf("Invalid input!\n");
        return 0;
    }

    if(light == RED){
        printf("Stop\n");
    }else if(light == YELLOW){
        printf("Wait\n");
    }else{
        printf("Go\n");
    }
    
    return 0;
}