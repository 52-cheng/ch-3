#include <stdio.h>
#include <ctype.h>
char changeCase(char c)
{
    if (islower(c)) 
    {
        return toupper(c); 
    }
    else if (isupper(c)) {
        return tolower(c);
    }
    else {
        return c;
    }
}
int main() {
    char ch;
    printf("Please enter a letter: ");
    scanf_s("%c", &ch);
    printf("Transform the case form: %c\n", changeCase(ch));
    return 0;
}