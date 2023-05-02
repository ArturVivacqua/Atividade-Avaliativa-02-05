//Exercício 2
#include <stdio.h>

float calculasalario(int n){
  float s;
  if (n>80){
    s = 600 + ((n-80)*0.75) + (30*0.5);
  }else if(n>50 && n<80){
    s = 600 + ((n-50)*0.5);
  }else{
    s = 600;
  }
return s;
}

int main(){
  int np, f;
  float salario;
  printf("\nQuantos funcionários serão cadastrados?\t");
  scanf("%d", &f);

  float vet[f];

  for (int i = 0; i<f; i++){
    printf("\n%d -> Quantas peças foram produzidas pelo funcionário?\t", i+1);
    scanf("%d", &np);
    salario = calculasalario(np);
    vet[i] = salario;
  }

  printf("\nMostra Final:\n");
  for (int j = 0; j<f; j++){
    printf("\nFuncionário %d -- %.2fR$", j+1, vet[j]);
  }
  

  

  return 0;
}