/*
 * Complete the 'findMedian' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

std::vector<int> bubbleSort(std::vector<int> arr)
{
    // std::cout << arr[5] << std::endl;
    int tmp = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr.size(); j++)
        {
            if (arr[j] > arr[j + 1])
            {
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
    return arr;
}

int findMedian(std::vector<int> arr)
{
    std::vector<int> sortedArr = bubbleSort(arr);
    /*
    for(int i=0; i<sortedArr.size() ; i++){
    std::cout << sortedArr[i] << std::endl;
    }
    */
    int idx = sortedArr.size() / 2 + 1;
    // std::cout << sortedArr[idx] << std::endl;
    return sortedArr[idx];
}
