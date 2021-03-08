#include <string.h>
#include <stdio.h>

int main(){
    char inbuffer[256];
    char * result;
    char * Result;
    char * please = " please";

    printf("What is your request: ");

    fgets(inbuffer, 249, stdin);

    // Remove newline
    inbuffer[strlen(inbuffer)-1] = '\0';

    // Look for please in the string
    result = strstr(inbuffer, "please");
    Result = strstr(inbuffer, "Please");

    if (result == NULL && Result == NULL){
        // Concatenate strings
        strcat(inbuffer, please);
    }

    printf("You asked: %s\n", inbuffer);

}
