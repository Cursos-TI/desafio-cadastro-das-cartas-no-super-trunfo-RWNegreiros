#include <stdio.h>
int main () {
    // simulando movimento da torre: 5 casas para a direita com for
    printf ("Movimento da Torre:\n");
    for (int i = 1; i <= 5; i++) {
        printf ("Torre moveu para a casa %d\n", i);
    }
    printf ("\n");

    // simulando movimento do Bispo: 5 casas na diagonal para cima e a direita com while
printf("movimento do Bispo:\n");
    int j = 1;
    while (j <= 5) {
        printf("Bispo moveu para a casa %d\n", j);
        j++;
    }
    printf("\n");

    // simulando movimento do Cavalo: 5 casas em L com do-while
    printf("Movimento do Cavalo:\n");
    int k = 1;
    do {
        printf("Cavalo moveu para a casa %d\n", k);
        k++;
    } while (k <= 5);
    
    return 0;


}

