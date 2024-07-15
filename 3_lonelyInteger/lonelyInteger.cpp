/*
 * Complete the 'lonelyinteger' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY a as parameter.
 */

// 1 1 2 3 3
// 0 0 1 2 1

int lonelyinteger(vector<int> a) {
    int counter = 0, lonelyIntIdx = 0;
    for(int i=0; i<a.size(); i++){
        counter = 0;
        for (int j=0; j<a.size(); j++){
            if(a[i]!=a[j]){
                counter++;
                if(counter==a.size()-1){
                    lonelyIntIdx = i;
                }   
            }
        }
    }

    return a[lonelyIntIdx];
}
