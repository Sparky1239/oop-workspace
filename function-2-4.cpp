bool is_ascending(int array[], int n) {
    bool is_ascending = true; 
    for (int i = 1; i < n; i++) { 
        if (array[i]<array[i-1]) {
            is_ascending = false;
        }
    }
    return is_ascending; 
}