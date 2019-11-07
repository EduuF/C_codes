#include <stdio.h>
#include <stdlib.h>

void merge(int vec[], int first_vec_init, int second_vec_init, int first_vec_end, int second_vec_end){
    //Dynamic allocation of a aux vec
    int* temporary_vec = malloc((second_vec_end-first_vec_init+1) * sizeof(int));

    //Some aux variables
    int left_counter, right_counter, counter;
    left_counter = first_vec_init;
    right_counter = second_vec_init;
    counter = 0;

    //Putting it on the ax=ux vec ordering them 'till one side is empty
    while(left_counter <= first_vec_end && right_counter <= second_vec_end){
        if(vec[left_counter] < vec[right_counter]){
            *(temporary_vec+counter) = vec[left_counter];
            counter++;
            left_counter++;
        }else{
            *(temporary_vec+counter) = vec[right_counter];
            counter++;
            right_counter++;
        }
    }

    //Whether the seocnd side is empty first
    while(left_counter <= first_vec_end){
        *(temporary_vec+counter) = vec[left_counter];  
        counter++;
        left_counter++;
    }

    //Whether the first side is empty first
    while(right_counter <= second_vec_end){
        *(temporary_vec+counter) = vec[right_counter];
        counter++;
        right_counter++;
    }

    //merge it to the real vec
    for(int i = first_vec_init, j = 0; i <= second_vec_end; i++, j++){
        vec[i] = *(temporary_vec+j);
    }

    free(temporary_vec);
}

void merge_sort(int vec[], int init_position, int vec_lenght){
    if(init_position < vec_lenght){
        int pivot = (vec_lenght + init_position)/2;
        merge_sort(vec, init_position, pivot);
        merge_sort(vec, pivot+1, vec_lenght);

        merge(vec, init_position, pivot+1, pivot, vec_lenght);
    }
}