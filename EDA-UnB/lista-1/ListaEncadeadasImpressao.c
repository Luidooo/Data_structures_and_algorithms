#include <stdlib.h>

typedef struct celula{
  int dado;
  struct celula *prox;
}celula;

void imprime (celula *le) {
   celula *p;
   if(le->prox == NULL) printf("NULL");
   for (p = le; p != NULL; p = p->prox){
      printf ("%d -> ", p->dado);
    p = p->prox;}
}

void imprime_rec (celula *le) {
   if(le->prox == NULL) printf("NULL");
   if (le->prox != NULL) {
      printf ("%d -> ", le->dado);
      imprime_rec(le->prox);
   }
}
  

void imprime (celula *le);
void imprime_rec (celula *le);
