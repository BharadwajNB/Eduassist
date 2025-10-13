// Analyse the uppercase or lower case

#include <stdio.h>
int main() 
{
    char ch;
    // Input a character
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if uppercase
    if (ch >= 'A' && ch <= 'Z')
     {
        printf("The character '%c' is an uppercase letter.\n", ch);
    }
    // Check if lowercase
    else if (ch >= 'a' && ch <= 'z')
     {
        printf("The character '%c' is a lowercase letter.\n", ch);
    }
    // If it's neither uppercase nor lowercase
    else {
        printf("The character '%c' is not a letter.\n", ch);
    }
    return 0;
}