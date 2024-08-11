#include <stdio.h>

int main() {
    int array[10]; 
    int i, num, found = 0;

    
    printf("Enter 10 numbers to the array:\n");
    for (i = 0; i < 10; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &array[i]);
    }

   
    printf("The array is: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    
    printf("Enter a number to check if it is present in the array: ");
    scanf("%d", &num);


    for (i = 0; i < 10; i++) {
        if (array[i] == num) {
            found = 1;
            break;
        }
    }

    
    if (found) {
        printf("The number %d is present in the array.\n", num);
    } else {
        printf("The number %d is not present in the array.\n", num);
    }

    return 0;
}
