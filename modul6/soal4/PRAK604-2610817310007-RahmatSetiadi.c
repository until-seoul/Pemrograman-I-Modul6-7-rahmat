#include <stdio.h>
#include <string.h>

int main()
{
    char code[100], message[100];
    scanf("%[^\n]%*c", code);
    scanf("%[^\n]%*c", message);
    if (strlen(code) != strlen(message))
    {
        printf("Panjang kalimat berbeda, pesan palsu");
    }
    else
    {
        int star = 0;
        int hash = 0;

        for (int i = 0; i < strlen(code); i++)
        {
            if (code[i] == ' ' && message[i] == ' ')
            {
                printf(" ");
            }
            else if (code[i] == message[i])
            {
                printf("*");
                star++;
            }
            else
            {
                printf("#");
                hash++;
            }
        }

        printf("\n* = %d\n", star);
        printf("# = %d\n", hash);

        if (star >= hash)
        {
            printf("Pesan Asli");
        }
        else
        {
            printf("Pesan Palsu");
        }
    }
}
