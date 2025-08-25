
/// display Count vowels, consonants, digits and white spaces in a string

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int is_vowel(char c) {
    c = tolower((unsigned char)c);
    return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
}

int main() {
    char s[101];

    printf("Please enter a string:\n");

    if (!fgets(s, sizeof(s), stdin)) return 0;

    if (s[0] == '\n') {
        if (!fgets(s, sizeof(s), stdin)) return 0;
    }

    s[strcspn(s, "\n")] = '\0';

    int vowels = 0, consonants = 0, digits = 0, whites = 0;
    for (size_t i = 0; s[i]; ++i) {
        char c = s[i];
        if (isalpha((unsigned char)c)) {
            if (is_vowel(c)) vowels++;
            else consonants++;
        } else if (isdigit((unsigned char)c)) {
            digits++;
        } else if (isspace((unsigned char)c)) {
            whites++;
        }
    }


    printf("Number of Vowels = %d\n", vowels);
    printf("Number of Consonants = %d\n", consonants);
    printf("Number of Digits = %d\n", digits);
    printf("Number of White space = %d\n", whites);
    return 0;
}

