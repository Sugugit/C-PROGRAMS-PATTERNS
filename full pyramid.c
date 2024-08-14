CODE:

#include <stdio.h>
int main() {
    int i, j, k;
    int n;
    printf("Enter the number of levels for the pyramid: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        for (j = i; j < n; j++) {
            printf(" ");
        }
        for (k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

OUTPUT:

Enter the number of levels for the pyramid: 5

    *
   ***
  *****
 *******
*********
