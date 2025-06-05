#include <stdio.h>

int main() {
    
    int casas_torre = 5;
    int casas_bispo = 5;
    int casas_rainha = 8;

        int i;

    
    printf("--- Movimento da Torre (%d casas para Direita) ---\n", casas_torre);
    
    for (i = 0; i < casas_torre; i++) {
        printf("Direita\n"); 
    }
    printf("\n"); 

    
    printf("--- Movimento do Bispo (%d casas para Cima, Direita) ---\n", casas_bispo);
    
    i = 0;
    while (i < casas_bispo) {

        printf("Cima, Direita\n"); 
        i++; 
    }
    printf("\n"); 

    
    printf("--- Movimento da Rainha (%d casas para Esquerda) ---\n", casas_rainha);
    
    i = 0;
    
    if (casas_rainha > 0) { 
        do {
            printf("Esquerda\n"); 
            i++; 
        } while (i < casas_rainha); 
    }
    printf("\n"); 

    printf("Simulação de movimentos concluída.\n");

    return 0; 
}

