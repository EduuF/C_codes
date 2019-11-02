void bubble_sort(int vec[], int vec_length){
    int aux;
    //external for
    for(int i = 0; i< vec_length; i++){
        //internal for
        for(int j = 0; j < (vec_length - i); j++){ //It's not necessary to go untill the end of vector, the last ones is already ordered
            //trade positions
            if(vec[j] > vec[(j + 1)]){
                aux = vec[j];
                vec[j] = vec[(j + 1)];
                vec[(j + 1)] = aux;
            }
        }
    }
}