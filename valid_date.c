#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "date.h"

int main(int argc, char * argv[]){
    char * daystr, * monthstr, * yearstr;
    int day, month, year;
    char * delimiters = "./-";
    date adate;

    if (argc != 2){
        printf("Wrong number of parameters.\n");
        return EXIT_FAILURE;
    }

    // Valid formats: 12.1.2021, 12/1/2021, 12-1-2021
    daystr = strtok(argv[1], delimiters);
    monthstr = strtok(NULL, delimiters);
    yearstr = strtok(NULL, delimiters);

    if (daystr == NULL   ||
        monthstr == NULL ||
        yearstr == NULL) {
        printf("Incorrect date given. Please use a valid date format.\n");
        return EXIT_FAILURE;
    }

    day = atoi(daystr);
    month = atoi (monthstr);
    year = atoi (yearstr);

    set_date(&adate, day, month, year);
    if (is_valid(adate)){
        printf("Date ");
        print_fi_std(adate);
        printf(" is valid.\n");
    }
    else {
        printf("Date ");
        print_fi_std(adate);
        printf(" is not valid.\n");
    }
}
