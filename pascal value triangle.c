CODE:

#include <stdio.h>
int main() {
    int n, i, j, coef = 1;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        for(j = 0; j <= n - i - 1; j++) {
            printf(" ");
        }
        for(j = 0; j <= i; j++) {
            if (j == 0 || i == 0)
                coef = 1;
            else
                coef = coef * (i - j + 1) / j;

            printf("%d ", coef);
        }
        printf("\n");
    }
    return 0;
}

OUTPUT:

Enter the number of rows: 5
     1 
    1 1 
   1 2 1 
  1 3 3 1 
 1 4 6 4 1 
