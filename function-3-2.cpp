int median_array(int array[], int n){
    if (n < 1)&& n%2 ==0
    {
        return 0;
    }
    for (int i = 0; i<n ; i++){
        if (array[i]>array[i+1]){
            int num = array[i];
            array[i]=array[i+1];
            array[i+1]=num;           
         }
    }
    return array[n/2];
}