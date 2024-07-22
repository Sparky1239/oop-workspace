double array_mean(int array[], int n){
   double total = 0;
   double average = 1;
    if (n<1){
        return 1.1;
    }
    else {
        for (int i = 0; i < n; i++){
            total += array[i];
        }
        average = total / n;
    }
    return average;
}
