/*
 * Creator: Courtney Pattison
 * Description: Find the Mugwump in the 10x10 grid
 */


#include <stdio.h>
#include <stdlib.h>
#include <time.h>


struct point {
    int x, y;
};


 void play_mugwump();

 void show_board(struct point mugwump, int grid_size);
 

int main(void)
{
    srand(time(NULL));

    printf("Mugwump\n"
           "=======\n"
           "You get ten turns to guess the Mugwump's location.\n"
           "For each guess, the Manhattan distance between your guess and the Mugwump will be printed.\n");

    play_mugwump();

    return 0;
}


void play_mugwump()
{

    const int GRID_SIZE = 10,
              MAX_TURNS = 10,
              MIN_GUESS = 0,
              MAX_GUESS = GRID_SIZE - 1;
    char play_again = 'y';

    do {
        struct point mugwump = {rand() % GRID_SIZE, rand() % GRID_SIZE},
                     guess = {0, 0};
        int units_from_mugwump = 1,
            turn_number = 0;

        do {
            printf("What's your guess (x y)? ");
            scanf("%d %d", &guess.x, &guess.y);

            if (((guess.x >= MIN_GUESS) && (guess.x <= MAX_GUESS))
                && ((guess.y >= MIN_GUESS) && (guess.y <= MAX_GUESS))) {
                units_from_mugwump =  abs(guess.x - mugwump.x) + abs(guess.y - mugwump.y);
                printf("You are %d units from the Mugwump.\n", units_from_mugwump);
                show_board(guess, GRID_SIZE);
                turn_number++;
                printf("Turn number %d\n", turn_number);
            } else {
                printf("Your guess is off the grid!\n"
                       "Please input numbers between 0 and 9.\n");
            }
        } while ((units_from_mugwump != 0) && (turn_number != MAX_TURNS));

        if (units_from_mugwump == 0) {
            printf("You win!\n");
        } else {
            printf("Sorry, you lose.\n");
        }
        printf("The Mugwump is at (%d, %d).\n"
               "Do you want to play again (y/n)? ", mugwump.x, mugwump.y);
        scanf(" %c%*c", &play_again);

        if (play_again == 'y') {
            printf("Great, let's get started.\n");
        } else {
            printf("Thank you for playing!\n");
        }
     } while (play_again == 'y');
}


void show_board(struct point guess, int grid_size)
{
    int i, j;

    printf(" ");
    for (i = 0; i < grid_size; i++) {
        printf(" %d", i);
    }
    printf("\n");

    for (i = 0; i < grid_size; i++) {
        printf("%d ", i);
        for (j = 0; j < grid_size; j++) {
            if ((guess.x == i) && (guess.y == j)) {
                printf("W ");
            } else {
                printf(". ");
            }
        }
        printf("\n");
    }
    return;
}
