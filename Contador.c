#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i;
    do
    {
        printf("\n Digite o nomero do sabor : \n");
        printf("\t 1 - Flocos \n");
        printf("\t 2 - Morango \n");
        printf("\t 3 - Chocolate \n");
        scanf("%d", &i);
    } while ((i<1) || (i>3));
    switch (i)
    {
    case 1:
        printf("\t\t Voce escolheu flocos !");
        break;
    case 2:    
        printf("\t\t Voce escolheu morango !");
        break;
    case 3:
        printf("\t\t Voce escolheu chocolate !");
        break;    
    }
    
    return 0;
}
