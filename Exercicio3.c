#include <stdio.h>

int main() {
    int A[3] = {8, 7, 9};
    int B[3] = {6, 7, 10};
    int pontosA = 0, pontosB = 0;

    for(int i = 0; i < 3; i++) {
        if(A[i] > B[i]) pontosA++;
        else if(B[i] > A[i]) pontosB++;
    }

    printf("Funcionario A: %d pontos\n", pontosA);
    printf("Funcionario B: %d pontos\n", pontosB);

    return 0;
}
