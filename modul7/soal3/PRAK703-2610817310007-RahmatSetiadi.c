#include <stdio.h>
#include <ctype.h>

int main()
{
    char Word[100];
    int vowels = 0, consonant = 0;
    printf("kalimat : ");
    scanf(" %[^\n]", Word);

    for (int i = 0; Word[i] != '\0'; i++)
    {
        if (Word[i] == 'a' || Word[i] == 'i' || Word[i] == 'u' ||
            Word[i] == 'e' || Word[i] == 'o')
        {
            vowels++;
        }
        else if (isalpha(Word[i]))
        {
            consonant++;
        }
    }

    printf("Jumlah Vokal : %d\n", vowels);
    printf("Jumlah Konsonan : %d\n", consonant);

    return 0;
}
