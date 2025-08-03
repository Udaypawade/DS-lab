// Write a program that demonstrates how to organize (sort)
// cards in a hand using insertion sort.
// Uday Pawade (B24CE1088)
#include <stdio.h>

int main() {
    int n = 0;
    printf("Enter the number of cards: ");
    scanf("%d", &n);

    int cards[n];
    printf("Enter the card values: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &cards[i]);
    }

    printf("Original hand: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", cards[i]);
    }
    printf("\n");

    // Insertion Sort
    for (int i = 1; i < n; i++) {
        int key = cards[i];
        int j;
        for (j = i - 1; j >= 0 && cards[j] > key; j--) {
            cards[j + 1] = cards[j];
        }
        cards[j + 1] = key;
    }

    printf("Sorted hand: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", cards[i]);
    }
    printf("\n");

    return 0;
}
