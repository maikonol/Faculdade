#include <stdio.h>

void main() {
    int dia, mes;

    printf("Informe o dia do seu nascimento: ");
    scanf("%d", &dia);

    printf("Informe o mes do seu nascimento: ");
    scanf("%d", &mes);

    if ((mes == 1 && dia >= 20) || (mes == 2 && dia <= 18)) {
        printf("Seu signo é Aquário\n");
    } else if ((mes == 2 && dia >= 19) || (mes == 3 && dia <= 20)) {
        printf("Seu signo é Peixes\n");
    } else if ((mes == 3 && dia >= 21) || (mes == 4 && dia <= 19)) {
        printf("Seu signo e Áries\n");
    } else if ((mes == 4 && dia >= 20) || (mes == 5 && dia <= 20)) {
        printf("Seu signo e Touro\n");
    } else if ((mes == 5 && dia >= 21) || (mes == 6 && dia <= 20)) {
        printf("Seu signo e Gêmeos\n");
    } else if ((mes == 6 && dia >= 21) || (mes == 7 && dia <= 22)) {
        printf("Seu signo e Câncer\n");
    } else if ((mes == 7 && dia >= 23) || (mes == 8 && dia <= 22)) {
        printf("Seu signo e Leão\n");
    } else if ((mes == 8 && dia >= 23) || (mes == 9 && dia <= 22)) {
        printf("Seu signo e Virgem\n");
    } else if ((mes == 9 && dia >= 23) || (mes == 10 && dia <= 22)) {
        printf("Seu signo e Libra\n");
    } else if ((mes == 10 && dia >= 23) || (mes == 11 && dia <= 21)) {
        printf("Seu signo e Escorpião\n");
    } else if ((mes == 11 && dia >= 22) || (mes == 12 && dia <= 21)) {
        printf("Seu signo e Sagitário\n");
    } else if ((mes == 12 && dia >= 22) || (mes == 1 && dia <= 19)) {
        printf("Seu signo e Capricórnio\n");
    } else {
        printf("Data inválida\n");
    }
}
