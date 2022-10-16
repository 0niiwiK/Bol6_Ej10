#include <stdio.h>

int main() {
    int limite,numero,acumulado=0;
    printf("Introduce el limite: ");
    scanf("%d",&limite);

    do {
        printf("Introduce un numero: ");
        scanf("%d",&numero);
        fflush(stdin);
        acumulado+=numero;
    } while (acumulado<=limite);
    printf("Se ha superado el limite, acumulado: %d",acumulado);
    return 0;
}
