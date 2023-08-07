#include <stdio.h>
#include <math.h>

int main()
{
    int N = 7;
    int count = 0;
    int primevector[N];
    int j = 0;

    for (int i = 2; i <= N; i++) {
        int is_prime = 1;
        int limit = (int) sqrt(i);
        for (int k = 2; k <= limit; k++) {
            if (i % k == 0) {
                is_prime = 0;
                break;
            }
        }
        if (is_prime == 1) {
            primevector[j++] = i;
        }
    }

    int sum = primevector[0];
    for (int i = 1; i < j; i++) {
        sum += primevector[i];
        if (sum > N)
            break;
        int is_prime = 1;
        int limit = (int) sqrt(sum);
        for (int k = 2; k <= limit; k++) {
            if (sum % k == 0) {
                is_prime = 0;
                break;
            }
        }
        if (is_prime == 1) {
            count++;
        }
    }

    printf("%d", count);
    return 0;
}
