
/// remove all characters except alphapets and spaces

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char s[201];
    char out[201];
    printf("Please enter your text (max 200 chars):\n");
    if (!fgets(s, sizeof(s), stdin)) return 0;

    if (s[0] == '\n') {
        if (!fgets(s, sizeof(s), stdin)) return 0;
    }
    s[strcspn(s, "\n")] = '\0';

    int j = 0;
    for (int i = 0; s[i]; ++i) {
        char c = s[i];
        if (isalpha((unsigned char)c) || c == ' ') {
            out[j++] = c;
        }

    }
    out[j] = '\0';
    printf("New text is:\n%s\n", out);
    return 0;
}

