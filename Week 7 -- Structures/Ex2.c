#include <stdio.h>
#include <string.h>

struct Car {
    char brand[50];
    char model[50];
    char ID[50];
};

int main() {

    int size;
    printf("Enter amount of car :");
    scanf ("%d" , &size);
    struct Car car[size];

    // GET Input
    for (int i = 1; i <= size; i++) {
        printf("INPUT CAR NO: %d\n", i + 1);
        printf("Enter ID: ");
        scanf("%s", car[i].ID);
        printf("Enter Brand: ");
        scanf("%s", car[i].brand);
        printf("Enter model: ");
        scanf("%s", car[i].model);
    }
    printf("|========================|\n");
    printf("|     Car information    |\n");
    printf("|========================|\n");
    // POST Input
    for (int i = 1; i <= size ; i++) {
        printf("\tCar NO: %d\n", i + 1);
        printf("Car ID\t%s\n", car[i].ID);
        printf("Car brand\t%s\n", car[i].brand);
        printf("Car model\t%s\n", car[i].model);
    }

    return 0;
}
