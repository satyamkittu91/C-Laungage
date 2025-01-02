#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){

    char questions[][100] = {"1. What year did the C language debut?: ",
                            "2. Who is credited with creating C?: ",
                            "3. What is predecessor of C?: "};

    char options[][100] = {"A. 1970", "B. 1972", "C. 1978", "D. 1980",
                            "A. Dennis Ritchie", "B. Ken Thompson", "C. Bjarne Stroustrup", "D. Linus Torvalds",
                            "A. B", "B. BCPL", "C. A,B", "D. D\n"};

    char answers[3] = {'B', 'A', 'A'};
    int number_of_questions = sizeof(questions) / sizeof(questions[0]);

    char guess;
    char score;

    printf("Welcome to the C Quiz Game!\n");
    printf("*************************\n");

    for (int i = 0; i < number_of_questions; i++) {
        printf("*************************\n");
        printf("%s", questions[i]);
        printf("\n***********************\n");

        for (int j =0; j<4; j++){
            printf("%s\n", options[(i*4)+j]);
        }
        printf("Enter Your Guess: ");
        scanf(" %c", &guess);

        if (toupper(guess) == answers[i]){
            printf("Correct!\n");
            score++;

        }else{
            printf("Incorrect!\n");
        }

        printf("*************************\n");
        printf("Score: %d/%d\n", score, number_of_questions);
        printf("*************************\n");

    }
    return 0;

}