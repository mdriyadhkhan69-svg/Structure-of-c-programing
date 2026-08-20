#include <stdio.h>

int main()
{
    char ff[100];

    printf("Enter student name & id: ");
    scanf("%s", ff);

    char name[100];
    char id[100];

    int j = 0;

    for(int i = 0; ff[i] != '-'; i++)
    {
        name[j] = ff[i];
        j++;
    }

    name[j] = '\0';

    int i = 0;

    while(ff[i] != '-')
    {
        i++;
    }

    i++;

    int p = 0;

    for(; ff[i] != '\0'; i++)
    {
        id[p] = ff[i];
        p++;
    }

    id[p] = '\0';

    printf("Student name: %s\nStudent id: %s", name, id);

    return 0;
}
