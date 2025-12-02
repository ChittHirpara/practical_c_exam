#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("%d is first interger\n",a);
    printf("%d is second integer\n",b);

    a = a + b;  
    b = a - b;  
    a = a - b;  

    printf("%d is first integer\n",b);
    printf("%d is first integer",a);
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
