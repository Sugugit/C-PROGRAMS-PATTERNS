CODE:

#include <stdio.h>
int main() {
    int i, j;
    int n;
    printf("Enter the number of levels for the pyramid: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

OUTPUT:

Enter the number of levels for the pyramid: 5
*
**
***
****
*****
