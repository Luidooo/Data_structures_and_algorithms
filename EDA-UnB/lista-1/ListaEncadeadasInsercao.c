#include <stdio.h>

typedef struct celula{
  int dado;
  struct celula *prox;
}celula;

void insere_inicio(celula *le, int x){
  celula temp;
  temp->prox = x;
}


void insere_antes (int x, celula *p) {
   celula *nova;
   nova = malloc (sizeof (celula));
   nova->conteudo = x;
   nova->prox = p->prox;
   p->prox = nova;
}
