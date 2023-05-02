//Exercício 3

#include <stdio.h>

int main(){
  int qt, qj, idade, somaidade = 0, nmenores =0, somajogadores = 0, npesados =0, mediaidade, qjp = 0;
  float peso, somapeso = 0, mediapeso;

  printf("\nQuantos times vão participar do campeonato (3 a 9)?");
  scanf("%d", &qt);  
  while(qt<3 || qt >9){
    printf("\nO mínimo de times na competição é 3, o máximo é 9. Digite um valor válido:\t");
    scanf("%d", &qt);
  }

  for (int i = 0; i < qt; i++){
    printf("\n");
    printf("\nTime %d\n", i+1);
    printf("\nDigite o número de jogadores no time (6 a 11):\t");
    scanf("%d", &qj);
    while (qj<6 || qj > 11){
      printf("\nO mínimo de jogadores no time é 6, o máximo é 11. Digite um valor válido:\t");
      scanf("%d", &qj);
    }
    somajogadores = somajogadores + qj;
    for ( int j = 0; j < qj ; j++){
      printf("\n Digite a idade do %d° jogador:\t", j+1);
      scanf("%d", &idade);
      somaidade = somaidade + idade;
      printf("\nDigite o peso do %d° jogador:\t", j+1);
      scanf("%f", &peso);
      if (idade < 18){
        nmenores += 1;
      }
      else if (idade > 25){
        somapeso = somapeso + peso;
        qjp += 1;
      }
      if (peso > 80){
        npesados += 1;
      }
    }
    mediaidade = somaidade/qj;
    mediapeso = somapeso/qjp;
    printf("\n A média de idade do time %d é: %d", i+1,mediaidade);
    printf("\n A média de peso dos jogadores acima de 25 anos do time %d é: %.2f\n", i+1, mediapeso);
  }
  float porcentagem = (npesados/somajogadores)*100;
  printf("\nNo campeonato estão inscritos %d jogadores com menos de 18 anos e %d jogadores com mais de 80 kg (%.2f porcento do total de jogadores)", nmenores,npesados,porcentagem);
  

  
  return 0;
}