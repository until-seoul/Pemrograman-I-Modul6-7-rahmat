#include <stdio.h>
#include <string.h>

int main()
{
    char First_Name[100], Last_Name[100];

    printf("Nama depan: ");
    scanf("%[^\n]%*c", First_Name);
    printf("Nama belakang: ");
    scanf("%[^\n]%*c", Last_Name);

    printf("%s %s\n", First_Name, Last_Name);
    printf("Panjang Nama (tanpa spasi): %lu\n", strlen(First_Name) + strlen(Last_Name));
    return 0;
}
