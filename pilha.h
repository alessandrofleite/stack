typedef struct pilha Pilha;

/*
 * Aloca dinamicamente a estrutura pilha, inicializando seus
 * campos e retorna seu ponteiro.
 */
Pilha* create(void);

/*
 * Insere o elemento e na pilha p, desde que,
 * a pilha não esteja cheia.
 */
void push(Pilha *p, int e);

/*
 * Retira e retorna o elemento do topo da pilha p,
 * desde que a pilha não esteja vazia.
 */
int pop(Pilha *p);

/*
 * Informa se a pilha p está ou não vazia.
 */
int empty(Pilha *p);

/*
 * Destrói a pilha, e assim libera toda a memória
 * usada pela estrutura.
 */
void free_(Pilha *p);