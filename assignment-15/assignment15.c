#include <stdio.h>

#define max(a, b) (((a) < (b)) : (a) ? (b))

int main(void) {
    int player_score[4][5];
    double avarage_score[5];

    int i;
    for (i = 0; i < 4; ++i) {
        printf("Game #%d\n", i + 1);
        int j;
        for (j = 0; j < 5; ++j) {
            printf("Enter scoring total for Player #%d: ", j + 1);
            scanf("%d", &player_score[i][j]);
        }
    }

    for (i = 0; i < 4; ++i) {
        int j;
        for (j = 0; j < 5; ++j) {
            avarage_score[j] += player_score[i][j]; 
        }
    }

    for (i = 0; i < 5; ++i) {
        avarage_score[i] /= 4;
    }

    int index_of_max = 0;
    double max = 0;

    for (i = 0; i < 5; ++i) {
        if (avarage_score[i] > max) {
            max = avarage_score[i];
            index_of_max = i;
        }
    }

    printf("Player #%d had the highest scoring average at %.2lf points per game.", index_of_max + 1, max);

}