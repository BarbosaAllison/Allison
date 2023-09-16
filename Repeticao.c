#include <stdio.h>
int main()
{
    int contador,contador2;
    printf("\n Digite seu numero da sorte : ");
    scanf("%d", &contador);
  for (contador; contador >= 1; contador--)
    {
        printf("%d ", contador);
    }
    printf("\n Contagem regressiva !\n");

     printf("\n Digite seu numero da sorte : ");
     scanf("%d", &contador2);
    for (contador2; contador2 <= 20; contador2++)
    {
        printf("%d ", contador2);
    }
    printf("\n Contagem progressiva !");
    return 0;
}
 