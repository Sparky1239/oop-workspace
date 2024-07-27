int array_sum(int n) {
    int total = 0; 
    if (n<1){
        return 0;
    }
    for (int i = 1; i <= n; i++) { 
        if (i % 2 == 0){
            total++; 
        }
    }
    return total; 
}