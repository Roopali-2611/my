#include <stdio.h> 
int main() { 
int m, a = 0, b = 1, count = 0, temp; 
printf("Enter the number of terms: "); 
scanf("%d", &m); 
printf("Fibonacci Series: "); 
while (count < m) { 
printf("%d ", a); 
temp = a + b; 
a = b; 
b = temp; 
count++; 
} 
return 0; 
}