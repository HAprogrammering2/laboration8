#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void read_date(){
    char inbuffer[80];
    int day, month, year;
    printf("Please enter a date: ");
    fgets(inbuffer, 80, stdin);

    sscanf(inbuffer, "%d.%d.%d", &day, &month, &year);
    printf("You wrote: %d.%d.%d\n", day, month, year);
}

int main(){
    char inbuffer[80];
    bool done = false;

    while(!done){
        printf("Make your selection:\n");
        printf("1. A rock\n");
        printf("2. A hard place\n");
        printf("3. Quit\n");
        printf("> ");

        fgets(inbuffer, 80, stdin);
        
        switch(atoi(inbuffer)){
            case 1:
                printf ("You chose a rock\n");
                break;
            case 2: 
                printf ("You chose a hard place\n");
                read_date();
                break;
            case 3:
                done = true;
                break;
            default:
                printf("Please choose a valid menu item.\n");
        }
    }
}
