//Exercício 4

#include <stdio.h>

void classificasalario(float s){
  if (s<1400){
    printf("\nTrabalhador abaixo da média salarial");
  }
  else if( s == 1400){
    printf("\nTrabalhador na média salarial");
  }
  else{
    printf("\nTrabalhador acima da média salarial");
  } 
}

void mostraclassifica(float salario, char sexo){  
  printf("\nO salario do trabalhador é %.2f", salario);
  classificasalario(salario);
  if (sexo == 'M'||sexo == 'm'){
    printf("\nGênero masculino");
  }else if (sexo == 'F'|| sexo == 'f'){
    printf ("\nSexo feminino");
  }
}


int main(){
  float sal;
  char genero;
  int nabaixo = 0, nacima = 0, ncadastros;

  printf("\nQuantos assalariados serão cadastrados?");
  scanf("%d", &ncadastros);
  printf("\nDigite as informações de cada pessoa:\n");
  for(int i = 0; i < ncadastros; i++){
    printf("\n");
    printf("\nPessoa %d", i+1);
    printf("\nQual o gênero? (M - Masculino / F - Feminino)\t");
    scanf(" %c", &genero);
    printf("\nDigite o salário do trabalhador:\t");
    scanf("%f", &sal);
    while (sal <1){
      printf("\nO salário deve ser maior do que 1.00R$\t");
      scanf("%f", &sal);
    }
    if (sal < 1400){
      nabaixo += 1;
    }
    if (sal > 1400){
      nacima += 1;
    }
    mostraclassifica(sal, genero);
    
  }
  printf("\n");
  printf("\nAssalariados abaixo da média : %d", nabaixo);
  printf("\nAssalariados acima da média : %d", nacima);

  
  return 0;
}