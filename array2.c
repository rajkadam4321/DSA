#include <stdio.h>

void main() {
    int size = 10;   
    int arr[size];    
    int value;        
    int i;            
    int index;        

    
    printf("Enter %d elements for the array:\n", size);
    for (i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);  
    }

    
    printf("The array is: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);  
    }
    printf("\n");

    
    while (1) {
        printf("Enter the index of the element you want to update (0 to %d, or -1 to exit): ", size - 1);
        scanf("%d", &index);

        if (index == -1) {
            break;  
        }

        if (index < 0 || index >= size) {
            printf("Invalid index. Please enter a value between 0 and %d.\n", size );
            continue;
        }

        printf("Enter the new value for index %d: ", index);
        scanf("%d", &value);  

        
        arr[index] = value;

        
        printf("The updated array is: ");
        for (i = 0; i < size; i++) {
            printf("%d ", arr[i]);  
        }
        printf("\n");
        break;
    }
}
  