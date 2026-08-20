#include <stdio.h>

int main()
{
    char name[20] = "Bangladesh";
    char copyname[20];

    int j = 0;

    for(int i = 0; i < 6; i++)
    {
        copyname[j] = name[i];
        j++;
    }

    copyname[j] = '\0';

    printf("%s", copyname);

    return 0;
}
