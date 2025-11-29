#include <stdio.h>
int main (){
    int n, i;
    printf("Enter a number: ");
    scanf("%d", &n);
    int fact = 1;
    for (int i = 1; i <= n; i++){
        fact = fact * i;
    }
    printf("factorial = %d\n", fact);
    return 0;
}