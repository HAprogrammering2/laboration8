#include <string.h>
#include <stdio.h>

int main(){
    char inbuffer[256];
    char * position = NULL; 

    printf("Please enter a string: ");
    fgets(inbuffer, 256, stdin);

    position = strchr(inbuffer, 'e');

    if (position == NULL){
        printf ("No e:s found.\n");
    }
    else {
        printf("First e in position %ld.\n", position - inbuffer + 1);

        position = strrchr(inbuffer, 'e');

        printf("Last e in position %ld.\n", position - inbuffer + 1);
    }

}
