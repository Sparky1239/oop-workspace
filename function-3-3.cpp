double weighted_average(int array[], int n) {
    double weighted_average = 0;
    if (n<=1){
        return 0;
    }
    for (int i = 0; i < n; i++) { 
        weighted_average = weighted_average + array[i];
    }
    weighted_average = weighted_average / n;
    return weighted_average; 
}