#include <stdio.h>
#include <string.h>
#include <time.h>

#define MAX_TEXT_LENGTH 256

void calculateAccuracy(char *original, char *typed, int *correctChars, int *totalChars) {
    int i = 0;
    *correctChars = 0;
    *totalChars = strlen(typed);

    while (original[i] != '\0' && typed[i] != '\0') {
        if (original[i] == typed[i]) {
            (*correctChars)++;
        }
        i++;
    }
}

int main() {
    char sampleText[] = "The quick brown fox jumps over the lazy dog.";
    char typedText[MAX_TEXT_LENGTH];
    int correctChars = 0, totalChars = 0;
    double timeTaken = 0.0;
    double accuracy = 0.0, speed = 0.0;

    printf("Typing Speed and Accuracy Test\n");
    printf("Type the following text exactly as shown:\n\n");
    printf("\"%s\"\n\n", sampleText);

    printf("Press Enter to start typing...\n");
    getchar(); // Wait for the user to start
