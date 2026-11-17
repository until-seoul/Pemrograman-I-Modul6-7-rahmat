#include <stdio.h>
#include <string.h>

int main()
{
    char texts[100];
    scanf("%[^\n]%*c", texts);

    if (strlen(texts) > 20)
    {
        printf("%.*s...\n", 20, texts);
    }
    return 0;
}
