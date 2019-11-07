#include <stdio.h>

void quick_sort(int vec[], int vec_length){
    int left, right, pivot, aux;

    if(vec_length < 2){
        return;
    }
    
    pivot = vec[vec_length/2];
    

    for(left = 0, right = vec_length - 1;; left++, right--){
        printf("\n");
        //finding left
        while(vec[left] < pivot){
            left++;
        }
        //finding right
        while (pivot < vec[right]){
            right--;
        }
        //The vector is already ordered
        if(left >= right){
            break;
        }else{ // Trade positions
            aux = vec[left];
            vec[left] = vec[right];
            vec[right] = aux;
        }        
    }
    //Recursive leftside
    quick_sort(vec, left);
    //recursive rightside
    quick_sort(vec + left, vec_length-left);
}