#include <stdio.h>
//#include <stdlib.h>

#define MAX_QUESTIONS 100
#define MAX_OPTIONS 4

void addQuestion(char questions[][300], char options[][MAX_O][300], int *correctAnswers, int *totalQuestions);

int main() {
    char questions[MAX_Q][300];
    char options[MAX_Q][MAX_O][300];
    int correctAnswers[MAX_Q];
    int totalQuestions = 0;
    int userAnswer, score = 0;

    // Menu for faculty to add questions
    int choice;
    do {
        printf("\n1. Add a new question\n");
        printf("2. Start the quiz\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (totalQuestions < MAX_Q) {
                    addQuestion(questions, options, correctAnswers, &totalQuestions);
                } else {
                    printf("You have reached the maximum number of questions.\n");
                }
                break;
            case 2:
                // Start quiz
                if (totalQuestions == 0) {
                    printf("No questions available for the quiz.\n");
                } else {
                    for (int i = 0; i < totalQuestions; i++) {
                        printf("\n%s", questions[i]);

                        // Display options
                        for (int j = 0; j < MAX_O; j++) {
                            printf("%s", options[i][j]);
                        }

                        // Get user's answer
                        printf("Enter your choice (1-4): ");
                        scanf("%d", &userAnswer);

                        // Check answer and update score
                        if (userAnswer == correctAnswers[i]) {
                            printf("Correct!\n");
                            score++;
                        } else {
                            printf("Incorrect! The correct answer is option %d.\n", correctAnswers[i]);
                        }
                    }

                    // Display final score
                    printf("\nYour final score is: %d out of %d\n", score, totalQuestions);
                }
                break;
            case 3:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 3);
  
    return 0;
}

// Function to add a new question
void addQuestion(char questions[][300], char options[][MAX_O][300], int *correctAnswers, int *totalQuestions) {
    printf("\nEnter the question: ");
    getchar();  // To consume the newline character left by previous input
    fgets(questions[*totalQuestions], 256, stdin);
    
    // Getting options
    for (int i = 0; i < MAX_O; i++) {
        printf("Enter option %d: ", i + 1);
        fgets(options[*totalQuestions][i], 256, stdin);
    }

    // Getting the correct answer
    printf("Enter the correct option number (1-4): ");
    scanf("%d", &correctAnswers[*totalQuestions]);
    
    (*totalQuestions)++;
}