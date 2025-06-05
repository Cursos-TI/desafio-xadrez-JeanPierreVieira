#include <stdio.h>


void moverTorreRecursivo(int casas_restantes) {
    
    if (casas_restantes <= 0) {
        return; 
    }
    
    printf("Direita\n");
    
    moverTorreRecursivo(casas_restantes - 1);
}


void moverBispoRecursivo(int casas_restantes) {
    
    if (casas_restantes <= 0) {
        return;
    }
    
    printf("Cima, Direita\n");
    
    moverBispoRecursivo(casas_restantes - 1);
}


void moverRainhaRecursivo(int casas_restantes) {
    
    if (casas_restantes <= 0) {
        return;
    }
   
    printf("Esquerda\n");
   
    moverRainhaRecursivo(casas_restantes - 1);
}

// --- Função Principal ---

int main() {
    
    int casas_torre = 5;
    int casas_bispo = 5;
    int casas_rainha = 8;
    
    int passos_verticais_cavalo = 2;
    int passos_horizontais_cavalo = 1;

    
    int i, j;

    
    printf("--- Movimento da Torre (%d casas para Direita - Recursivo) ---\n", casas_torre);
    moverTorreRecursivo(casas_torre);
    printf("\n"); 

   
    printf("--- Movimento do Bispo (%d casas para Cima, Direita - Recursivo) ---\n", casas_bispo);
    moverBispoRecursivo(casas_bispo);
    printf("\n");

    
    printf("--- Movimento da Rainha (%d casas para Esquerda - Recursivo) ---\n", casas_rainha);
    moverRainhaRecursivo(casas_rainha);
    printf("\n");

  
    printf("--- Movimento do Cavalo (Em L: %d Cima, %d Direita - Loops Aninhados) ---\n", passos_verticais_cavalo, passos_horizontais_cavalo);
    
    for (i = 0; i < passos_verticais_cavalo; i++) {
        
        if (i >= 0) { 
             printf("Cima\n");
        }
       
        
        if (i == passos_verticais_cavalo - 1) { 
             for (j = 0; j < passos_horizontais_cavalo; j++) {
                 printf("Direita\n");
             }
        }
    }
    printf("\n");

    
    printf("--- Movimento do Bispo (%d casas para Cima, Direita - Loops Aninhados) ---\n", casas_bispo);
    
    for (i = 0; i < casas_bispo; i++) {
        
        for (j = 0; j < 1; j++) { 
             printf("Cima, Direita\n");
        }
        
    }
    printf("\n");

    printf("Simulação de movimentos avançada concluída.\n");

    return 0; 
}
