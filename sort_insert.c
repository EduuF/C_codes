void insert_sort(int vec[], int vec_length){
    int aux;

    //exernal for
    for(int i = 1; i < vec_length; i++){

        //internal for
        for(int j = 0; j < i; j++){

            //trade positions
            if(vec[i] < vec[j]){
                aux = vec[i];
                vec[i] = vec[j];
                vec[j] = aux;
            }
        }
    }
}