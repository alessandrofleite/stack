#define N 20 /* n�mero m�ximo de elementos*/
#include <stdio.h>
#include "pilha.h"

struct pilha{
  int topo; /* indica o topo da pilha */
  int elementos[N]; /* elementos da pilha*/
};

Pilha* create(void){
  Pilha* p = (Pilha*) malloc(sizeof(Pilha));
  p->topo = -1; /* inicializa a pilha como vazia (0 elementos) */
  return p;
}

void push(Pilha *p, int e){
     if (p->topo == N - 1){ /* capacidade esgotada */
        printf("A pilha est� cheia");
        return;
     }
     /* insere o elemento na pr�xima posi��o livre */
     p->elementos[++p->topo] = e;
}

int pop(Pilha *p)
{
     int e;
     if (empty(p)){
        printf("Pilha vazia.\n");
        return;             
     } 
     
     /* retira o elemento do topo */
     e = p->elementos[p->topo--];
     return e;
}
       
int empty(Pilha *p)
{
    return (p->topo == -1);
}

void free_(Pilha *p)
{
  free(p);
}