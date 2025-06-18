#include <stdio.h>
#include <stdlib.h>

int main() {
    int *array;
    int num_elementos = 5;

    array = (int *) calloc(num_elementos, sizeof(int));

    if (array == NULL) {
        printf("Erro ao alocar memória!\n");
        return 1; 
    }

    printf("Memória alocada com calloc. Conteúdo inicial (zeros):\n");
    for (int i = 0; i < num_elementos; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    for (int i = 0; i < num_elementos; i++) {
        array[i] = i + 1;
    }

    printf("Array preenchido:\n");
    for (int i = 0; i < num_elementos; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    free(array);
    array = NULL;

    return 0;
}
