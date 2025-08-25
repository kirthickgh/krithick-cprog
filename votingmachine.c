#include <stdio.h>

int main() {
    int choice;
    int votes1 = 0, votes2 = 0, votes3 = 0, spoilt = 0;
    int voters, i;

    printf("Enter number of voters: ");
    scanf("%d", &voters);

    for(i = 1; i <= voters; i++) {
        printf("\nVoter %d, please cast your vote:\n", i);
        printf("1. Candidate A\n");
        printf("2. Candidate B\n");
        printf("3. Candidate C\n");
        printf("Enter your choice (1-3): ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: votes1++; break;
            case 2: votes2++; break;
            case 3: votes3++; break;
            default: spoilt++;
        }
    }

    printf("\n--- Voting Results ---\n");
    printf("Candidate A: %d votes\n", votes1);
    printf("Candidate B: %d votes\n", votes2);
    printf("Candidate C: %d votes\n", votes3);
    printf("Spoilt Votes: %d\n", spoilt);

    if(votes1 > votes2 && votes1 > votes3)
        printf("\nWinner is Candidate A\n");
    else if(votes2 > votes1 && votes2 > votes3)
        printf("\nWinner is Candidate B\n");
    else if(votes3 > votes1 && votes3 > votes2)
        printf("\nWinner is Candidate C\n");
    else
        printf("\nIt's a Tie!\n");

    return 0;
}

