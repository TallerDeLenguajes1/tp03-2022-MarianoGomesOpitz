#include <stdio.h>
#include <time.h>
#include <stdlib.h>

char *TiposProductos[] = {"Galletas", "Snack", "Cigarrillos", "Caramelos", "Bebidas"};
struct Producto
{
    int ProductoID;       // Numerado en ciclo iterativo
    int Cantidad;         // entre 1 y 10
    char *TipoProducto;   // Algún valor del arregloTiposProductos
    float PrecioUnitario; // entre 10 - 100
} typedef Producto;

struct Cliente
{
    int ClienteID;               // Numerado en el ciclo iterativo
    char *NombreCliente;         // Ingresado por usuario
    int CantidadProductosAPedir; // (aleatorio entre 1 y 5)
    Producto *Productos          // El tamaño de este arreglodepende de la variable “CantidadProductosAPedir”
} typedef Cliente;
/*
float precioProducto(Producto produ);

void mostrar(Cliente coso);*/

int main()
{
    srand(time(NULL));

    printf("Ingresar la cantidad de clientes: ");
    int cantClient;
    scanf("%d", &cantClient);
    fflush(stdin);
    Cliente *costumer;
    costumer = (Cliente *)malloc(sizeof(Cliente) * cantClient);
    for (int i = 0; i < cantClient; i++)
    {
        (costumer + i)->ClienteID = i + 1;
        printf("Ingresar nombre del cliente %d: ", i);
        gets((costumer + i)->NombreCliente);
        fflush(stdin);
        (costumer + i)->CantidadProductosAPedir = (rand() % 5) + 1;/*
        (costumer + i)->Productos = (Producto *)malloc(sizeof(Producto) * (costumer + i)->CantidadProductosAPedir);
        for (int j = 0; j < (costumer + i)->CantidadProductosAPedir; j++)
        {
            (costumer + i)->Productos->ProductoID = j + 1;
            (costumer + i)->Productos->Cantidad = (rand() % 10) + 1;
            int aux = rand() % 4;
            (costumer + i)->Productos->TipoProducto = TiposProductos[aux];
            (costumer + i)->Productos->PrecioUnitario = (rand() % 100 - 9) + 1;

            ((costumer + i)->Productos)++;
        }*/
    }
/*
    for (int i = 0; i < cantClient; i++)
    {
        printf("Datos del cliente %d:\n", i);
        mostrar(*(costumer + i));
    }*/

    free(costumer);/*
    free(costumer->Productos);*/
    return 0;
}
/*
void mostrar(Cliente coso)
{
    printf("ID de cliente: %d\n", coso.ClienteID);
    printf("Nombre del cliente: %s\n", coso.NombreCliente);
    printf("Cantidad de productos que pidio: %d\n", coso.CantidadProductosAPedir);
    puts("\nProductos solicitados:\n");
    for (int j = 0; j < coso.CantidadProductosAPedir; j++)
    {
        printf("Producto %d:\n", j);
        printf("ID de producto: %d\n", coso.Productos->ProductoID);
        printf("Tipo de producto: %s\n", coso.Productos->TipoProducto);
        printf("Cantidad de unidades del producto: %d\n", coso.Productos->Cantidad);
        printf("Precio unitario del producto: %d\n\n", coso.Productos->PrecioUnitario);
    }
    puts("\n\n");
}*/