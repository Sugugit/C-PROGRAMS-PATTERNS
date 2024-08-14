CODE:

#include <stdio.h>
int main() {
    int i, j,n;
    printf("Enter the number of rows for the pyramid: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= i; j++) {
            if(j == 1 || j == i || i == n) {
                printf("* ");
            } else {
                printf("  "); // Two spaces to maintain the shape
            }
        }
        printf("\n");
    }
    return 0;
}

OUTPUT:

Enter the number of rows for the pyramid: 5
* 
* * 
*   * 
*     * 
* * * * * 
