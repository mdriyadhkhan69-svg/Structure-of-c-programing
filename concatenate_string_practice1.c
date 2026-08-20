#include <stdio.h>

int main()
{
    char hello[100];
    char world[100];

    printf("Enter name: ");
    scanf("%s %s", hello, world);

    int i = 0;

    while(hello[i] != '\0')
    {
        i++;
    }

    for(int j = 0; world[j] != '\0'; j++)
    {
        hello[i] = world[j];
        i++;
    }

    hello[i] = '\0';

    printf("Hello: %s", hello);

    return 0;
}
