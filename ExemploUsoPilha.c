#define TAMANHO_PILHA 20
#include <stdio.h>
#include "pilha.h"


/*
 * Preenche a pilha p com os dados informados pelo usuário.
 */
void preenchePilha(Pilha* p)
{
  int i;
  int e;
  for (i = 0; i < TAMANHO_PILHA; i++)
  {
    printf("Informe o %d valor para colocar na pilha ",i);
	scanf("%d", &e);
	/* empilha o elemento informado */
    push(p,e);
  }
}

/*
 * Apresenta na tela todos os elementos da pilha p. 
 */
void imprimir(Pilha* p)
{
  printf("Conteudo da pilha \n");
  int i;
  for (i = 0; i < TAMANHO_PILHA; i++){
     printf("%d ", pop(p));
  }
}

int main(void)
{
    Pilha* p;
       
    /* Cria a pilha */    
    p = create();
	
	preenchePilha(p);
	
	/* desempilha um elemento da pilha*/
	int e = pop(p);
    
    printf("O elemento desempilhado foi: %d\n", e);

	imprimir(p);
	
	printf("Pressione qualquer tecla para finalizar");
	system("pause");
}