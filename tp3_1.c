#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *V[5], *Buff;
    for (int i = 0; i < 5; i++)
    {

        printf("Ingrese el nombre %d: ", i);
        Buff = (char *)malloc(sizeof(char) * 20);
        gets(Buff);
        V[i] = (char *)malloc(sizeof(char) * (strlen(Buff) + 1));
        strcpy(V[i], Buff);
    }
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Nombre %d: %s\n", i, V[i]);
    }

    free(Buff);
    return 0;
}