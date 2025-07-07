#include <stdio.h> 
int main() { 
    int n; 
    printf("Enter the number of elements: "); 
    scanf("%d", &n); 
    int arr[n]; 
 
    // Input elements into the array 
    for (int i = 0; i < n; i++) { 
        printf("Enter element %d: ", i + 1); 
        scanf("%d", &arr[i]); 
    } 
    int max = arr[0]; 
    int min = arr[0]; 
 
    // Find maximum and minimum elements 
    for (int i = 1; i < n; i++) { 
        if (arr[i] > max) { 
            max = arr[i]; 
        } 
        if (arr[i] < min) { 
            min = arr[i]; 
        } 
    } 
    printf("Maximum element: %d\n", max); 
    printf("Minimum element: %d\n", min); 
 
    return 0; 
}