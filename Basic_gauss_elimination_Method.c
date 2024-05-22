#include <stdio.h>
#include <stdlib.h>

#define SIZE 10
/* the equation is :
  3x1+6x2+x3=16
  2x1+4x2+3x3=13
  x1+3x2+2x3=9

  Output will be: x1=1 , x2=2 , x3=3
*/
int main() {
    float a[SIZE][SIZE + 1], x[SIZE], ratio;
    int i, j, k, n;

    printf("Enter the number of equations: ");
    scanf("%d", &n);


    for (i = 0; i < n; i++) {
        for (j = 0; j <= n; j++) {
            printf("a[%d][%d] = ", i + 1, j + 1);
            scanf("%f", &a[i][j]);
        }
    }


    for (i = 0; i < n; i++) {
        if (a[i][i] == 0.0) {

            for (k = i + 1; k < n; k++) {
                if (a[k][i] != 0.0) {
                    for (j = 0; j <= n; j++) {
                        float temp = a[i][j];
                        a[i][j] = a[k][j];
                        a[k][j] = temp;
                    }
                    break;
                }
            }
        }

        if (a[i][i] == 0.0) {
            printf("Mathematical Error! Diagonal element is zero.\n");
            exit(0);
        }

        for (j = 0; j < n; j++) {
            if (j != i) {
                ratio = a[j][i] / a[i][i];

                for (k = 0; k <= n; k++) {
                    a[j][k] = a[j][k] - ratio * a[i][k];
                }
            }
        }
    }


    for (i = 0; i < n; i++) {
        x[i] = a[i][n] / a[i][i];
    }


    printf("\nThe result of the values is:\n");
    for (i = 0; i < n; i++) {
        printf("x[%d] = %0.3f\n", i + 1, x[i]);
    }

    return 0;
}
