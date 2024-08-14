CODE:

#include <stdio.h>
int main() {
    int i, j;
    int n;
    printf("Enter the number of levels for the inverted pyramid: ");
    scanf("%d", &n);
    for (i = n; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

OUTPUT:

Enter the number of levels for the inverted pyramid: 7
*******
******
*****
****
***
**
*
