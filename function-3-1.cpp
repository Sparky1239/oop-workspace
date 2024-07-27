bool is_fanarray(int array[], int n) {
    bool is_fanarray = true; 
    int half_n = 0;
    if (n % 2 == 0){
        half_n = n/2;
    }
    else{
        half_n = (n-1)/2;
    }
    for (int i = 0; i < half_n; i++) { 
        if (array[i]!=array[n-1-i]) {
            is_fanarray = false;
        }
    }
    return is_fanarray; 
}