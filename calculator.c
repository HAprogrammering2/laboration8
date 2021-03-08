#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char * argv[]){
    int x, y;
    
    // Check number of parameters
    if (argc != 4){
        printf("Wrong number of parameters.\n");
        return EXIT_FAILURE;
    }

    // Convert to integers
    x = strtol(argv[1], NULL, 10);
    y = strtol(argv[3], NULL , 10);

    // Check plus or minus
    if (strcmp(argv[2], "plus") == 0) {
        printf("%d + %d = %d\n", x, y, x+y);
    } 
    else if (strcmp(argv[2], "minus") == 0){
        printf("%d - %d = %d\n", x, y, x-y);
    }
}
