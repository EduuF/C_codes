#include <stdio.h>
#include "sort_merge.c"

int main(){
    int vector[10] = {5, 7, 3, 1, 6, 8, 4 ,2, 0, 10};

    merge_sort(vector, 0, 10-1);

    for(int i=0; i<10; i++){
        printf("%d\n", vector[i]);
    }
}