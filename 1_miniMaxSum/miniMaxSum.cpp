
/*
 * Complete the 'miniMaxSum' function below.
 *
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

vector<int> bubleSort(vector<int> arr) {
    for (int i = 0; i < arr.size() - 1; i++) 
        for (int j = 0; j < arr.size() - i - 1; j++) 
            if (arr[j] > arr[j + 1]) 
                swap(arr[j], arr[j + 1]); 

    /*for (int i=0; i<arr.size(); i++) {
        printf("%d ", arr[i]);
    }*/
    return arr;
}

void miniMaxSum(vector<int> arr) {
    
    /*vector<int> arr3;
    arr3.push_back(256741038);
    arr3.push_back(623958417);
    arr3.push_back(467905213);
    arr3.push_back(714532089);
    arr3.push_back(938071625);
    */
    
    vector<int> arr2 = bubleSort(arr);
    
    // sum the first 4 elements
    long long minSum = 0;
    for (int i=0; i<4; i++) {
        minSum = minSum + (long long)arr2[i];
    }
    
    // sum the last 4 elements
    long long maxSum = 0;
    for (int i=4; i>0; i--) {
        maxSum = maxSum + (long long)arr2[i];
    }
    
    std::cout << minSum << " " << maxSum << std::endl;
}
