#include "stdio.h"

int main() {
    int size = 1;
    int input = 16;
    float values[10];   
    do{ 
        printf("Input Array Size: ");
        scanf("%d", &size);
        if (size < 4 || size > 1073741824){
            printf("Invalid Size\n"); 
        }
    } while (size < 7 || size > 1073741824);

    printf("Your array can hold %d elements\n", size);

    float arr[size]; //error for no reason 

    //populate array with 0
    for(int i = 0; i < size; i++){
        arr[i] = 0;
    }

    //take in first 16 digits since thats what matters
    if (size < 16){
        input = size;
    }

    for(int i = 0; i < input; i++){
        printf("Input %d: ", i+1);
        scanf("%f", &arr[i]);
    }

    
    printf("\n");
    int index = 0;
    //computation
    for(int i = 3; i < size-3; i++){
        values[index] = arr[i-3] + arr[i-2] + arr[i-1] + arr[i] + arr[i+1] + arr[i+2] + arr[i+3];
        index++;
    }

    //output
    for(int i =0; i < index; i++){
        printf("%.2f\n", values[i]);
    }
    
}