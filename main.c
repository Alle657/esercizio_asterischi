
        #include <stdio.h>

        int main(void) {
            int n;

            do {
                printf("Inserire numero righe\n");
                scanf("%d", &n);

            } while (n <= 0);

            for (int i = n; i > 0; i--) {
                for (int j = 0; j < n - i; j++) {
                    printf("\t");
                }
                for (int j = 0; j < i; j++) {
                    printf("*\t");
                }
                printf("\n");
            }
            return 0;
        }












