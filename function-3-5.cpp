double even_total(int array[], int n) {
    double even_total = 0;
    if (n<=1){
        return 0;
    }
    for (int i = 0; i < n; i= i+2) { 
        even_total = even_total + array[i];
    }
    return even_total; 
}