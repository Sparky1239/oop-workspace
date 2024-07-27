int two_array_sum(int array_1[],int array_2[], int n) {
    int total = 0; 
    if (n<1){
        return 0;
    }
    for (int i = 0; i < n; i++) { 
        total += array_1[i]; 
    }
    for (int i = 0; i < n; i++) { 
        total += array_2[i]; 
    }
    return total; 
}