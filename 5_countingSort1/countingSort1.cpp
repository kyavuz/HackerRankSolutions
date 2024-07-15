/*
 * Complete the 'countingSort' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

vector<int> countingSort(vector<int> arr) {
    
    vector<int> freqArr(100);
    
    for (int i=0; i<arr.size(); i++){
        freqArr[arr[i]] = freqArr[arr[i]] + 1;
    }
    
    return freqArr;
}
