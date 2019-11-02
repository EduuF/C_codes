#include <stdio.h>
#include "sort_bubble.c"

int main(){
    int vector[] = {6, 7, 1, 9, 10, 3, 4 ,5, 2, 8};

    sort_bubble(vector, 10);

    for(int i=0; i<10; i++){
        printf("%d\n", vector[i]);
    }
}