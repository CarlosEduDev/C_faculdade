#include <stdio.h>
#include <stdlib.h>

#define CODIGO_SECRETO 12345  // Código secreto para finalizar a votação

void calcular_e_exibir_resultados(int voto_fulano, int voto_cicrano, int voto_beltrano, int voto_nulo, int voto_total);
void ordenar_e_exibir_resultados(int voto_fulano, int voto_cicrano, int voto_beltrano, int voto_nulo);

int main() {
    int voto;
    int voto_fulano = 0, voto_cicrano = 0, voto_beltrano = 0, voto_nulo = 0;
    int voto_total = 0;
    
    while (1) {
        printf("Digite o codigo do candidato (1: Fulano, 2: Cicrano, 3: Beltrano) ou o codigo secreto para finalizar: ");
        scanf("%d", &voto);
        
        if (voto == CODIGO_SECRETO) {
            break;
        }
        
        switch (voto) {
            case 1:
                printf("Voce votou em Fulano. Confirma? (1 para sim, 0 para nao): ");
                scanf("%d", &voto);
                if (voto == 1) {
                    voto_fulano++;
                    voto_total++;
                    printf("Voto confirmado!\n");
                } else {
                    printf("Voto nao confirmado. Tente novamente.\n");
                }
                break;
            case 2:
                printf("Voce votou em Cicrano. Confirma? (1 para sim, 0 para nao): ");
                scanf("%d", &voto);
                if (voto == 1) {
                    voto_cicrano++;
                    voto_total++;
                    printf("Voto confirmado!\n");
                } else {
                    printf("Voto nao confirmado. Tente novamente.\n");
                }
                break;
            case 3:
                printf("Voce votou em Beltrano. Confirma? (1 para sim, 0 para nao): ");
                scanf("%d", &voto);
                if (voto == 1) {
                    voto_beltrano++;
                    voto_total++;
                    printf("Voto confirmado!\n");
                } else {
                    printf("Voto nao confirmado. Tente novamente.\n");
                }
                break;
            default:
                printf("Voto nulo!\n");
                voto_nulo++;
                voto_total++;
                break;
        }
    }

    calcular_e_exibir_resultados(voto_fulano, voto_cicrano, voto_beltrano, voto_nulo, voto_total);
    ordenar_e_exibir_resultados(voto_fulano, voto_cicrano, voto_beltrano, voto_nulo);

    return 0;
}

void calcular_e_exibir_resultados(int voto_fulano, int voto_cicrano, int voto_beltrano, int voto_nulo, int voto_total) {
    printf("Votacao encerrada!\n");

    // Calcular porcentagens
    float fulano_porcentagem = (voto_fulano / (float)voto_total) * 100;
    float cicrano_porcentagem = (voto_cicrano / (float)voto_total) * 100;
    float beltrano_porcentagem = (voto_beltrano / (float)voto_total) * 100;
    float nulo_porcentagem = (voto_nulo / (float)voto_total) * 100;

    // Exibir resultados
    printf("\nResultado da votacao:\n");
    printf("Fulano: %d votos (%.2f%%)\n", voto_fulano, fulano_porcentagem);
    printf("Cicrano: %d votos (%.2f%%)\n", voto_cicrano, cicrano_porcentagem);
    printf("Beltrano: %d votos (%.2f%%)\n", voto_beltrano, beltrano_porcentagem);
    printf("Nulos: %d votos (%.2f%%)\n", voto_nulo, nulo_porcentagem);
}

void ordenar_e_exibir_resultados(int voto_fulano, int voto_cicrano, int voto_beltrano, int voto_nulo) {
    // Armazenar votos e nomes
    int resultados[4] = {voto_fulano, voto_cicrano, voto_beltrano, voto_nulo};
    char* nomes[4] = {"Fulano", "Cicrano", "Beltrano", "Nulos"};

    int i, j;  // Declarar as variáveis fora do loop

    // Ordenar em ordem crescente de votos
    for(i = 0; i < 4; i++) {
        for(j = i + 1; j < 4; j++) {
            if(resultados[i] > resultados[j]) {
                int temp_votos = resultados[i];
                resultados[i] = resultados[j];
                resultados[j] = temp_votos;

                char* temp_nome = nomes[i];
                nomes[i] = nomes[j];
                nomes[j] = temp_nome;
            }
        }
    }
    
    // Mostrar resultado
    printf("\nResultado em ordem de votacao: \n");
    for(i = 0; i < 4; i++) {
        printf("%s: %d votos\n", nomes[i], resultados[i]);
    }
}

