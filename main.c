#include <stdio.h>
int main() {
  int escolha_computador, escolha_jogador;
  do {
    do {
      printf("\n\nEscolha: 1 Pedra, 2 Papel, 3 Tesoura, 4 Lagarto, 5 Spock--| "
             "ou 0 para encerrar\n\n");
      printf("escolha uma opçao:\n");
      scanf("%d", &escolha_jogador);
      if (escolha_jogador == 0) {
        printf("Final do jogo");
        break;
      } else if (escolha_jogador < 1 || escolha_jogador > 5)
        printf("você digitou uma opção inválida :\n\n");
    } while (escolha_jogador < 1 || escolha_jogador > 5);
    if (escolha_jogador == 0) {
      break;
    }
    if (escolha_jogador == 1)
      printf("vc escolheu Pedra:\n");
    if (escolha_jogador == 2)
      printf("vc escolheu Papel:\n");
    if (escolha_jogador == 3)
      printf("vc escolheu Tesoura\n");
    if (escolha_jogador == 4)
      printf("vc escolheu Lagarto:\n");
    if (escolha_jogador == 5)
      printf("vc escolheu Spock\n");
    srand(time(NULL));
    escolha_computador = ("%d", rand() % 3 + 1);
    if (escolha_computador == 1) {
      printf("O computador escolheu Pedra:\n\n");
    }
    if (escolha_computador == 2) {
      printf("O computador escolheu Papel:\n\n");
    }
    #include <stdio.h>
#include <stdlib.h>
#include <time.h>
int pontos_jogador=0, pontos_cpu=0;
main()
{
    jogar();
}
int jogar()
{
    int jogador, cpu;
    printf ("\n-jogar-\n\n");
    printf ("%d Jogador X CPU %d\n", pontos_jogador, pontos_cpu);
    printf ("-------------\n");
    printf ("0. Pedra\n");
    printf ("1. Papel\n");
    printf ("2. Tesoura\n");
    printf ("3. Sair\n\nSua escolha:");
    scanf ("%d", &jogador);
    if (jogador < 0 || jogador >=3)
    {
        exit(0);
    }
    srand(time(NULL));
    cpu = rand() % 3; //gera um numero aleatorio
    switch(cpu)
    {
        case 0: printf ("CPU -> Pedra\n"); break;
        case 1: printf ("CPU -> Papel\n"); break;
        case 2: printf ("CPU -> Tesoura\n"); break;
    }
    if ((jogador == 0 && cpu==2) || (jogador == 1 && cpu == 0) || (jogador == 2 && cpu == 1)) //verifica se o jogador venceu
        {
            printf("Voce venceu!\n");
            pontos_jogador++;
            jogar();
        }
    if (jogador == cpu) //verifica se houve empate
        {
            printf ("Empate!\n");
            jogar();
        }
    else
        {
            printf ("CPU venceu!\n");
            pontos_cpu++;
            jogar();

        }
        return 0;
}