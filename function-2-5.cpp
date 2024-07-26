bool is_descending(int array[], int n) {
    bool is_descending = true; 
    for (int i = 1; i < n; i++) { 
        if (array[i]>array[i-1]) {
            is_descending = false;
        }
    }
    return is_descending; 
}