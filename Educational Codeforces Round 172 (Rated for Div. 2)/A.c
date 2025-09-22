#include <stdio.h>
#include <stdlib.h>

// Comparator function for descending order sorting
int compare(const void *a, const void *b) {
    return (*(int *)b - *(int *)a);
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, k;
        scanf("%d %d", &n, &k);

        int a[n], totalCoins = 0;

        // Read the coins in the chests
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
            totalCoins += a[i];
        }

        // Sort the array in descending order
        qsort(a, n, sizeof(int), compare);

        // Ensure the total coins in all chests is at least k
        int coinsToAdd = (totalCoins >= k) ? 0 : k - totalCoins;
        totalCoins += coinsToAdd;

        // Find the minimum coins to add to satisfy Monocarp's requirement
        int takenCoins = 0, chestsTaken = 0;
        for (int i = 0; i < n; i++) {
            takenCoins += a[i];
            chestsTaken++;
            if (takenCoins >= k) {
                break;
            }
        }

        // Adjust coins to ensure Monocarp takes exactly k coins
        if (takenCoins > k) {
            coinsToAdd += (takenCoins - k);
        }

        // Print the result for this test case
        printf("%d\n", coinsToAdd);
    }

    return 0;
}
