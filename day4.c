//count even and odd numbers

#include <stdio.h>

int main() {
    int arr[6] = {12, 7, 4, 9, 10, 3};
    int even = 0, odd = 0;

    for (int i = 0; i < 6; i++) {
        if (arr[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }

    printf("Even numbers = %d\n", even);
    printf("Odd numbers = %d\n", odd);

    return 0;
}
