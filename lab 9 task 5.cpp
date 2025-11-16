#include <stdio.h>

void printData(void *ptr, char type) {
    if (type == 'i') {
        printf("Product ID: %d\n", *(int *)ptr);
    }
    else if (type == 'f') {
        printf("Price: %.2f\n", *(float *)ptr);
    }
    else if (type == 'c') {
        printf("Category Code: %c\n", *(char *)ptr);
    }
    else {
        printf("Invalid type code!\n");
    }
}

int main() {
    int productID = 101;
    float price = 299.99;
    char category = 'A';

    printf("\nDisplaying all product details:\n\n");

    printData(&productID, 'i');   
    printData(&price, 'f');       
    printData(&category, 'c');    

    return 0;
}
