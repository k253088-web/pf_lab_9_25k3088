#include <stdio.h>


void recordStatus(int beds[3][5]) {
    int ward, bed;

    printf("Enter bed status (1 = occupied, 0 = empty):\n\n");

    for (ward = 0; ward < 3; ward++) {

        if (ward == 0) printf("General Ward:\n");
        else if (ward == 1) printf("ICU Ward:\n");
        else printf("Private Ward:\n");

        for (bed = 0; bed < 5; bed++) {
            printf("  Bed %d: ", bed + 1);
            scanf("%d", &beds[ward][bed]);
        }
        printf("\n");
    }
}


void countBeds(int beds[3][5]) {

    int occupied = 0;
    int empty = 0;

    int *ptr = &beds[0][0];  

    for (int i = 0; i < 15; i++) {   
        if (*(ptr + i) == 1)
            occupied++;
        else
            empty++;
    }

    printf("\nTotal occupied beds: %d\n", occupied);
    printf("Total empty beds: %d\n", empty);
}

/
void displayStatus(int beds[3][5]) {
    int ward, bed;

    printf("\n----- Hospital Bed Status -----\n");

    for (ward = 0; ward < 3; ward++) {
        if (ward == 0) printf("General Ward: ");
        else if (ward == 1) printf("ICU Ward: ");
        else printf("Private Ward: ");

        for (bed = 0; bed < 5; bed++) {
            printf("%d ", beds[ward][bed]);
        }
        printf("\n");
    }
}

int main() {

    int beds[3][5];

    recordStatus(beds);
    displayStatus(beds);
    countBeds(beds);

    return 0;
}
