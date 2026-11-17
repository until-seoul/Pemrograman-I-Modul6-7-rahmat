#include <stdio.h>

int main()
{
    int a;
    int b;
    scanf("%d", &a);
    scanf("%d", &b);
    int n1[a];
    int n2[b];

    if (a != b)
    {
        printf("Jumlah tidak sama");
    }
    else
    {
        for (int i = 0; i < a; i++)
        {
            scanf("%d", &n1[i]);
        }
        for (int i = 0; i < b; i++)
        {
            scanf("%d", &n2[i]);
        }
        for (int i = 0; i < a; i++)
        {
            printf("%d ", n1[i] * n2[i]);
        }
    }
    return 0;
}
