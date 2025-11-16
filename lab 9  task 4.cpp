#include <stdio.h>

int main() {

    int arr[3][4];  
    int i, j, key;
    int *p = &arr[0][0];   
    int found = 0;

    
    printf("Enter 12 elements for a 3x4 array:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

   
    printf("Enter element to search: ");
    scanf("%d", &key);

    
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {

            
            if (*(p + i * 4 + j) == key) {
                printf("Element found at Row %d, Column %d\n", i, j);
                found = 1;
                break;
            }
        }
    }

    if (!found) {
        printf("Element not found.\n");
    }

    return 0;
}
