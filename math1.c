#include <stdio.h>
#include <stdlib.h>

int isOddEven(int n) {
    if (n % 2 == 0)
        return 0;
    else
        return 1;
}

int isPrime(int n) {
    if (n <= 1)
        return 0;
    else if (n == 2)
        return 1;
    else if (n % 2 == 0)
        return 0;
    
    for (int i = 3; i * i < n; i++) {
        if (n % (i * i) == 0)
            return 0;
    }
    
    return 1;
}

char* minSumSeq(int n) {    // kx = n - (k * (k - 1)) / 2  # n: sum, k: count, x: first term
    for (int k = 2; k < n; k++) {
        int kx = n - (k * (k - 1)) / 2;
        if (kx % k == 0) {
            int x = kx / k;
            if (x > 0) {
                char *result = malloc(n * 2);
                int pos = 0;
                for (int i = 0; i < k; i++) {
                    pos += sprintf(result + pos, "%d", x + i);
                    if (i < k - 1) {
                        pos += sprintf(result + pos, ", ");
                    }
                }
                
                return result;
            }
        }
    }

    return NULL;
}

void main() {
}
