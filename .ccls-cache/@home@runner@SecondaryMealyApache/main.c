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
    if (escolha_computador == 3) {
      printf("O computador escolheu Tesoura:\n\n");
    }
    if (escolha_computador == 4) {
      printf("O computador escolheu Lagarto:\n\n");
    }
    if (escolha_computador == 5) {
      printf("O computador escolheu Spock:\n\n");
    }
    if (escolha_jogador == escolha_computador) {
      printf("Empate:\n");
    }
    if (escolha_jogador == 1 && escolha_computador == 3)
      printf("você ganhou;\n");
    if (escolha_jogador == 2 && escolha_computador == 1)
      printf("você ganhou:\n");
    if (escolha_jogador == 3 && escolha_computador == 2)
      printf("você ganhou:\n");
    if (escolha_jogador == 1 && escolha_computador == 4)
      printf("você ganhou;\n");
    if (escolha_jogador == 2 && escolha_computador == 5)
      printf("você ganhou:\n");
    if (escolha_jogador == 3 && escolha_computador == 4)
      printf("você ganhou:\n");
    if (escolha_jogador == 5 && escolha_computador == 3)
      printf("você ganhou;\n");
    if (escolha_jogador == 5 && escolha_computador == 1)
      printf("você ganhou:\n");
    if (escolha_jogador == 4 && escolha_computador == 2)
      printf("você ganhou:\n");
    if (escolha_jogador == 4 && escolha_computador == 5)
      printf("você ganhou:\n");
    else {
      if (escolha_jogador == 3 && escolha_computador == 1)
        printf("voçê perdeu:\n");
      if (escolha_jogador == 1 && escolha_computador == 2)
        printf("voçê perdeu:\n");
      if (escolha_jogador == 2 && escolha_computador == 3)
        printf("voçê perdeu:\n");
      if (escolha_jogador == 3 && escolha_computador == 5)
        printf("voçê perdeu:\n");
      if (escolha_jogador == 1 && escolha_computador == 5)
        printf("voçê perdeu:\n");
      if (escolha_jogador == 5 && escolha_computador == 4)
        printf("voçê perdeu:\n");
      if (escolha_jogador == 4 && escolha_computador == 1)
        printf("voçê perdeu:\n");
      if (escolha_jogador == 5 && escolha_computador == 2)
        printf("voçê perdeu:\n");
      if (escolha_jogador == 4 && escolha_computador == 3)
        printf("voçê perdeu:\n");
      if (escolha_jogador == 2 && escolha_computador == 4)
        printf("voçê perdeu:\n");
    }
  } while (escolha_jogador != 0);
}