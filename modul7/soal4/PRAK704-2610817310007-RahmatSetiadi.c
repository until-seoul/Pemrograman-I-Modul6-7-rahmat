#include <stdio.h>
#include <string.h>

int main()
{
    char texts[100];
    scanf("%[^\n]%*c", texts);

    if (strlen(texts) > 20)
    {
        printf("%.20s...\n", texts);
    }
    return 0;
}
