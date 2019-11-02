void select_sort(int vector[], int vector_length){
    //external for
    for(int i = 0; i < (vector_length-1); i++){ 
        int aux, smaller_position = i;

        //internal for
        for(int j=(i+1); j<vector_length; j++){
            if(vector[j]<vector[smaller_position]){
                smaller_position = j;
            }
        }
        //Dont do anything
        if(smaller_position == i){
            continue;
        }

        //Trade positions
        aux = vector[i];
        vector[i] = vector[smaller_position];
        vector[smaller_position] = aux;
    }

}