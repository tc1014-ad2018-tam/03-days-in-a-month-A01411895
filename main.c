//Luis Ignacio Acosta Zamora A01411895
//Write a code in C that ask the user for a month and a year.  The program should tell the user the number of days in the given month and year.  The specifications for the program are:
    //The month should be provided as an integer and should always be a positive number between 1 and 12, inclusive.
    //The year should be provided as a signed integer.
    //The program must use the switch structure to give the right answer.

#include <stdio.h>

int main() {

    //Create variables
    unsigned short month;
    int year;

    //Ask for the month
    printf("Please enter a month, between 1 and 12: ");
    scanf("%i", &month);

    //Ask for the year
    printf("Please enter a year: ");
    scanf("%d", &year);

    //Start the switch command
    switch (month){
        // Establish months with 31 days
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("The month has 31 days!\n");
            break;
        // Establish months with 30 days
        case 4:
        case 6:
        case 9:
        case 11:
            printf("The month has 30 days!\n");
            break;
        // Establish the leap year
        case 2:
            if( year % 4 == 0 & year % 100 !=0 || year % 400 == 0){
                printf("The month has 29 days!\n");
            }
            else {
                printf("The month has 28 days!\n");
            }

            break;

        // If anything else is given, finish
        default:
            printf("Thats not a valid month!\n");
    }
    return 0;
}