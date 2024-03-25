#include <stdio.h>
//Function To find out the sum
//Using Divide and Conquer Approach
void find(int arr[], int n, int X) {
    int l = 0;
    int r = n - 1;

    while (l < r) {
        int sum = arr[l] + arr[r];

        if (sum == X) {
            printf("Pair found at indexes: %d and %d\n", l, r);
            return;
        } else if (sum < X) {
            l++;
        } else {
  
            r--;
        }
    }

    printf("The sum is not possible for this array.");
}

int main() {
    int arr[6] = {1, 2, 4, 7, 11, 15};
    int X = 15;

    find(arr, 6, 15);

    return 0;
}
