#include <stdio.h>


void replaceVowels(char arr[3][20]) {

    int i, j;

    for (i = 0; i < 3; i++) {
        for (j = 0; arr[i][j] != '\0'; j++) {
            char ch = arr[i][j];

            
            if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
                ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U') 
            {
                arr[i][j] = '*';  
            }
        }
    }
}


void displayArray(char arr[3][20]) {

    int i;

    printf("\nUpdated Array:\n");
    for (i = 0; i < 3; i++) {
        printf("%s\n", arr[i]);
    }
}

int main() {

    char arr[3][20];  

    printf("Enter 3 strings:\n");

    for (int i = 0; i < 3; i++) {
        scanf("%s", arr[i]);
    }

    replaceVowels(arr);
    displayArray(arr);

    return 0;
}
