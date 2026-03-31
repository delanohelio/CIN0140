#include <stdio.h>
#include <ctype.h>

int main() {
    char string[100];

    scanf("%s", &string);
        
    int i = 0;
    char c = (char)tolower(string[0]);

    while(c != '\0') {

        if (c != 'a' && c != 'o' && c != 'y' && c != 'e' && c != 'u' && c != 'i') {
            printf(".%c", c);
        }

        i++;
        c = (char)tolower(string[i]);
    }

    return 0;
}