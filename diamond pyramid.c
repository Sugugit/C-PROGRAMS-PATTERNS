#include <stdio.h>
CODE:

int main() {
    int i, j, n;
    printf("Enter the number of rows for the diamond: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        for(j = 0; j < n - i; j++) {
            printf(" ");
        }
        for(j = 0; j < i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    for(i = n - 1; i > 0; i--){
        for(j = 0; j < n - i; j++) {
            printf(" ");
        }
        for(j = 0; j < i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

OUTPUT:

Enter the number of rows for the diamond: 5
    * 
   * * 
  * * * 
 * * * * 
* * * * * 
 * * * * 
  * * * 
   * * 
    * 
