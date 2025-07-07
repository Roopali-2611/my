#include <stdio.h> 
#include <math.h> 
 
int count_digits(int n) { 
    int count = 0; 
    while (n != 0) { 
        n /= 10; 
        count++; 
    } 
    return count; 
} 
 
int is_armstrong(int n) { 
    int count = count_digits(n); 
    int sum = 0, temp = n; 
     
    while (temp != 0) { 
        int digit = temp % 10; 
        sum += pow(digit, count); 
        temp /= 10; 
    } 
     
    return (sum == n); 
} 
 
int main() { 
    int n; 
    printf("Enter a number: "); 
    scanf("%d", &n); 
 
    if (is_armstrong(n)) { 
        printf("%d is an Armstrong number.\n", n); 
    } else { 
        printf("%d is not an Armstrong number.\n", n); 
    } 
    return 0; 
}