#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void) {
    int random, guess;
    int numofguess = 0;
    srand(time(NULL));
    printf("Welcome to the world of guessing Numbers!\n"); // print welcome message;
    random =  rand() % 100 + 1;  // Generating between 0 and 100
    do{
        printf("Enter a number between 1 and 100: ");
        scanf("%d", &guess); // take an input to match with random number;
        numofguess++;

        if (guess < random) {
            printf("Guess a larger number\n");
        } else if (guess > random) {
            printf("Guess a smaller number\n");
        }else{
            printf("Congratulations! You have successfully guessed the correct number in %d attempts.\n", numofguess);
            break;
        } 

    }while (guess != random);
    
    printf("The number you were trying to guess was %d.\n", random);
    printf("Bye Bye! Thanks for playing\n");
    printf("Developed by @mdshahria");

    return 0;
}
