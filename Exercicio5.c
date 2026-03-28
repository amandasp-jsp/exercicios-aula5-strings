#include <stdio.h>

int main() {
    // 1. Vetor ao contrário
    int v1[] = {1,2,3,4,5};
    for(int i = 4; i >= 0; i--) {
        printf("%d ", v1[i]);
    }
    printf("\n");

    // 2. Números acima de 5
    int v2[] = {2,6,8,3,10,1};
    for(int i = 0; i < 6; i++) {
        if(v2[i] > 5) printf("%d ", v2[i]);
    }
    printf("\n");

    // Sobrenome alternado
    char nome[] = "caparroz";
    for(int i = 0; nome[i] != '\0'; i+=2) {
        printf("%c", nome[i]);
    }
    printf("\n");

    // 3. Idades ímpares
    int idades[] = {18,21,30,25,40};
    for(int i = 0; i < 5; i++) {
        if(idades[i] % 2 != 0)
            printf("%d ", idades[i]);
    }

    return 0;
}
