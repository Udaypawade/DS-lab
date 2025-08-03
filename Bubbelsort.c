// Write a game development program that implements the Bubble Sort algorithm.
// Uday Pawade (B24CE1088)

#include <stdio.h>

int main() {
    int m;
    printf("Enter the number of plays: ");
    scanf("%d", &m);

    int player1[m], player2[m];

    printf("Enter scores of Player 1:\n");
    for (int i = 0; i < m; i++) {
        printf("Score %d: ", i + 1);
        scanf("%d", &player1[i]);
    }

    printf("Enter scores of Player 2:\n");
    for (int i = 0; i < m; i++) {
        printf("Score %d: ", i + 1);
        scanf("%d", &player2[i]);
    }

    // Bubble sort for Player 1
    for (int i = 0; i < m - 1; i++) {
        for (int j = 0; j < m - i - 1; j++) {
            if (player1[j] > player1[j + 1]) {
                int temp = player1[j];
                player1[j] = player1[j + 1];
                player1[j + 1] = temp;
                printf("Swapping score %d with %d for Player 1 : Leveling up!\n",
                       player1[j + 1], player1[j]);
            }
        }
    }

    // Bubble sort for Player 2
    for (int i = 0; i < m - 1; i++) {
        for (int j = 0; j < m - i - 1; j++) {
            if (player2[j] > player2[j + 1]) {
                int temp = player2[j];
                player2[j] = player2[j + 1];
                player2[j + 1] = temp;
                printf("Swapping score %d with %d for Player 2 : Leveling up!\n",
                       player2[j + 1], player2[j]);
            }
        }
    }

    printf("\nLevel complete! Scores sorted!\n");

    printf("\nSorted Scores for Player 1: ");
    for (int i = 0; i < m; i++) {
        printf("%d ", player1[i]);
    }
    printf("\n");

    printf("Sorted Scores for Player 2: ");
    for (int i = 0; i < m; i++) {
        printf("%d ", player2[i]);
    }
    printf("\n");

    if (player1[m - 1] > player2[m - 1]) {
        printf("Player 1 wins the level!\n");
    } else if (player2[m - 1] > player1[m - 1]) {
        printf("Player 2 wins the level!\n");
    } else {
        printf("It's a tie!\n");
    }

    return 0;
}
