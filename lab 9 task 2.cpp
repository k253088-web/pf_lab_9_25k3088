#include <stdio.h>

void addressbalance(int *p) {

    int person, deposit, withdraw;
    char choice;

    printf("Enter (d) for deposit or (w) for withdraw: ");
    scanf(" %c", &choice);

    printf("Enter person number (1-5): ");
    scanf("%d", &person);

    person -= 1;

    if (choice == 'd') {
        printf("Enter deposit amount: ");
        scanf("%d", &deposit);
        p[person] += deposit;
        printf("New balance: %d\n", p[person]);
    }
    else {
        printf("Enter withdraw amount: ");
        scanf("%d", &withdraw);
        p[person] -= withdraw;
        printf("New balance: %d\n", p[person]);
    }
}

int main() {

    int amount[5];
    int *p = amount;
    int i, sum = 0;
    float avg = 0;

    printf("Enter 1st person balance: ");
    scanf("%d", &amount[0]);

    printf("Enter 2nd person balance: ");
    scanf("%d", &amount[1]);

    printf("Enter 3rd person balance: ");
    scanf("%d", &amount[2]);

    printf("Enter 4th person balance: ");
    scanf("%d", &amount[3]);

    printf("Enter 5th person balance: ");
    scanf("%d", &amount[4]);

    addressbalance(p);

    for (i = 0; i < 5; i++) {
        sum += *(p + i);
    }

    avg = (float)sum / 5;  
    printf("Average is: %.2f", avg);

    return 0;
}
