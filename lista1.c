//Exercício 1
#include <stdio.h>

int main(){

int n, nm;
float soma = 0, media;

printf("\nQual o número de voltas que o piloto percorreu?\t");
scanf("%d", &n);

float vet[n];

printf("\nDigite o tempo em segundos de cada volta:");
for (int i=0; i<n; i++){
  printf("\n %d -> ", i+1);
  scanf("%f", &vet[i]);
  soma = vet[i] + soma;
}

float menor = vet[0];
  
printf("\nResultado Final:\n");
  for(int j = 0; j<n; j++){
    printf("\nVolta %d - %.2f s", j+1,vet[j]);
    if (vet[j]<menor){
      menor = vet[j];
      nm = j+1;
    }else if(vet[j] == menor){
      nm=1;
    }
  }
  printf("\nO melhor tempo foi: Volta %d - %.2f s\n", nm, menor);
  media = soma/n;
  printf("\nO tempo médio por volta é: %.2f s\n", media);
   

  return 0;
}