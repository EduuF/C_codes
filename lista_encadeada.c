#include <stdio.h>
#include <stdlib.h>

struct st_no{
    int valor;
    struct st_no* prox;
};

typedef struct st_no no;

struct lista{
    no *tail;
    no *first;
};

typedef struct lista li;

void adiciona(li *lista, no *node){
    lista->tail->prox = node;
    lista->tail = node;
};

void retira_por_valor(li *lista, int val){
    no *aux = lista->first;
    if(aux->valor == val){
        lista->first = lista->first->prox;
        free(aux);
    } else if(lista->tail->valor == val){
        no *aux2 = lista->tail;
        while(aux->prox != lista->tail){
            aux = aux->prox;
        }
        lista->tail = aux;
        free(aux2);
    } else {
        while(aux->prox->valor != val && aux->prox != NULL){
            if(aux->prox == NULL){
                break;
            }
            aux = aux->prox;
        }
        no *aux2 = aux->prox;
        aux->prox = aux->prox->prox;
        free(aux2);
    }
};

void pop(li *lista){
    if(lista->first->prox == NULL){
        no *aux = lista->first;
        lista->first = NULL;
        free(aux);
    }
    no *aux = lista->first;
    no *aux2 = lista->tail;
        while(aux->prox != lista->tail){
            aux = aux->prox;
        }
        lista->tail = aux;
        free(aux2);
}

void print_lista(li *lista){
    no *aux = lista->first;
    while(aux->prox != NULL){
        printf("-|%d", aux->valor);
    }
}


int main(){

    

    return 0;
}
