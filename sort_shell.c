void shell_sort(int vec[], int vec_length){
    int group = 1;

    while(group < vec_length){
        group = (3 * group) + 1;
    }

    while(group > 1){
        group /= 3;
        for(int i = 0; i < vec_length; i++){
            int troca = vec[i];
            int j = i-group;
            while(j >= 0 && troca < vec[j]){
                vec[j + group] = vec[j];
                j -= group;
            }
            vec[j+group] = troca;
        }
    }
}