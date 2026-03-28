#include <stdio.h>

int main() {
    int precos[] = {10, 20, 35, 50, 75};
    int alvo = 55;
    int n = 5;

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(precos[i] + precos[j] == alvo) {
                printf("Indices: [%d, %d]\n", i, j);
            }
        }
    }
    return 0;
}
