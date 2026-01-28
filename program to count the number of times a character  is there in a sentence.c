#include <stdio.h>
#include <string.h>

int main() {
    char sentence[1000];
    char ch;
    int count = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    printf("Enter the character to count: ");
    scanf("%c", &ch);

    for (int i = 0; i < strlen(sentence); i++) {
        if (sentence[i] == ch) {
            count++;
        }
    }

    printf("The character '%c' appears %d times in the sentence.\n", ch, count);

    return 0;
}
