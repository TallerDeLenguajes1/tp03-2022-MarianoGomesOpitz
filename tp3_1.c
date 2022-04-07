#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char **V, *Buff;
    int cantNombres;
    printf("Ingrese la cantidad de nombres: ");
    scanf("%d", &cantNombres);
    fflush(stdin);
    V = (char**)malloc(sizeof(char*) * cantNombres);

    for (int i = 0; i < cantNombres; i++)
    {
        printf("Ingrese el nombre %d: ", i);
        Buff = (char *)malloc(sizeof(char) * 20);
        gets(Buff);
        V[i] = (char *)malloc(sizeof(char ) * (strlen(Buff) + 1));
        strcpy(V[i], Buff);
    }

    puts("\n");

    for (int j = 0; j < cantNombres; j++)
    {
        printf("Nombre %d: %s\n", j, V[j]);
        
    }
    for (int j = 0; j < cantNombres; j++)
    {
        free(V[j]);
    }
    free(Buff);
    free(V);
    return 0;
}