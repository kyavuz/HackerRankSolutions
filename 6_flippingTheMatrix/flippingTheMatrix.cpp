/*
 * Complete the 'flippingMatrix' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts 2D_INTEGER_ARRAY matrix as parameter.
 */

int flippingMatrix(vector<vector<int>> matrix) {
    int n = matrix.size() / 2;
    int sum = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            int maxElement = max({
                matrix[i][j], 
                matrix[i][2 * n - j - 1], 
                matrix[2 * n - i - 1][j], 
                matrix[2 * n - i - 1][2 * n - j - 1]
            });
            sum += maxElement;
        }
    }

    return sum;
}
