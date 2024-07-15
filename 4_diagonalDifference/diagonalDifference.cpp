/*
 * Complete the 'diagonalDifference' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts 2D_INTEGER_ARRAY arr as parameter.
 */

int diagonalDifference(vector<vector<int>> arr) {
    int leftToRightDiagonal = 0;
    int rigthToLeftDiagonal = 0;
    
    // arr[row][col]
    for (int i=0; i<arr.size(); i++){
        leftToRightDiagonal = leftToRightDiagonal + arr[0+i][0+i];
    }
    
    for (int i=0; i<arr.size(); i++){
        rigthToLeftDiagonal = rigthToLeftDiagonal + arr[arr.size()-1-i][0+i];
    }
    
    // calculate abs val
    int diff = leftToRightDiagonal - rigthToLeftDiagonal;
    if (diff>0){
        return diff;
    }else{
        return -diff;
    }
}
