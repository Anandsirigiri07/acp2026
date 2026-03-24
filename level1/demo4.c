/*Write a modular C program to create a structure Flight with flight_number, destination, and available_seats. Create an array of 4 flights. Write a program that takes a destination name from the user and checks if a flight is available to that location, displaying the flight number if found.
Function prototype:
void readFlights(int n, Flight_t f[]); 
void searchByDestination(int n, Flight_t f[], char searchDest[]);
*/


#include<stdio.h>
#include<string.h>

typedef struct {
    int flightNo;
    char destination[100];
    int availableseats;
} Flight;

void readFlights(int n, Flight f[])
{
    for(int i=0; i<n; i++){
        printf("\nEnter flight no: ");
        scanf("%d",&f[i].flightNo);

        printf("Enter destination: ");
        scanf("%s", f[i].destination);

        printf("Enter available seats: ");
        scanf("%d",&f[i].availableseats);
    }
}

void searchbydestination(int n, Flight f[], char searchdest[])
{
    int found = 0;

    for(int i=0; i<n; i++){
        if(strcmp(f[i].destination, searchdest) == 0){
            printf("\nFlight found!\n");
            printf("Flight No: %d\n", f[i].flightNo);
            printf("Available Seats: %d\n", f[i].availableseats);
            found = 1;
        }
    }

    if(!found){
        printf("\nFlight not found for %s\n", searchdest);
    }
}

int main()
{
    int n = 4;
    Flight f[n];
    char searchdest[100];

    readFlights(n, f);

    printf("\nEnter the destination to search: ");
    scanf("%s", searchdest);

    searchbydestination(n, f, searchdest);

    return 0;
}