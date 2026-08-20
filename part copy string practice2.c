#include <stdio.h>

int main()
{
    char gg[20] = "Computer";
    char cc[20];

    int j = 0;

    for(int i = 4; gg[i] != '\0'; i++)
    {
        cc[j] = gg[i];
        j++;
    }

    cc[j] = '\0';

    printf("%s", cc);

    return 0;
}
