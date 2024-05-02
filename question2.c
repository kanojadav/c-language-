#include <stdio.h>
#include <string.h>

void countVowels(char sentence[]) {
    int vowels[5] = {0}; // Array to store the counts of each vowel: A, E, I, O, U

    for (int i = 0; i < strlen(sentence); i++) {
        char ch = sentence[i];
        switch (ch) {
            case 'a':
            case 'A':
                vowels[0]++;
                break;
            case 'e':
            case 'E':
                vowels[1]++;
                break;
            case 'i':
            case 'I':
                vowels[2]++;
                break;
            case 'o':
            case 'O':
                vowels[3]++;
                break;
            case 'u':
            case 'U':
                vowels[4]++;
                break;
            default:
                break;
        }
    }

    printf("Counts of each vowel:\n");
    printf("A: %d\n", vowels[0]);
    printf("E: %d\n", vowels[1]);
    printf("I: %d\n", vowels[2]);
    printf("O: %d\n", vowels[3]);
    printf("U: %d\n", vowels[4]);
}

int main() {
    char sentence[100];

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Remove the newline character from the end of the sentence
    sentence[strcspn(sentence, "\n")] = '\0';

    countVowels(sentence);

    return 0;
}
