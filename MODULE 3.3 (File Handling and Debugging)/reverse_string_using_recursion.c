#include <stdio.h>
void reverseSentence() // function declaration
{
    char c;
    scanf("%c", &c);
    if (c != '\n')
    {
        reverseSentence(); // recursion calling function
        printf("%c", c);
    }
}
int main()
{
    printf("Enter a sentence: ");
    reverseSentence(); //call function
    return 0;
}

// void reverseSentence() {
//     char c;
//     scanf("%c", &c);
//     if (c != '\n') {
//         reverseSentence();
//         printf("%c", c);
//     }
// }
