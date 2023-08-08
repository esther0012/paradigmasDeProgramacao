#include <stdio.h>
#include <math.h>

float calcMedia(float valores[], int n){
    float soma = 0;
    for (int i = 0; i < n ; i++){
        soma += valores [i];
    }
    return soma/n;
}

float desvio(float valores[], int n, int med){
    float soma = 0;
    for (int i = 0; i < n; i++){
        soma += pow(valores[i]-med,2);
    }
    return pow(soma,1/2);
}

int main()
{
    float valores[] = {5,7,8,9};
    float media = calcMedia(valores, 4);
    float desv = desvio(valores,4, media);
    printf("O valo da média é :%.2f", media);
    printf("O valor do desvio é: %.4f\n", desv);
    return 0;
}
