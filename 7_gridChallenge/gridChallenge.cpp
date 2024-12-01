#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'gridChallenge' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING_ARRAY grid as parameter.
 */

string gridChallenge(vector<string> grid) {
    int grid_col_size;
    int grid_row_size = grid.size();
    char temp;
    bool isOrdered = 0;
    string ret_val = "YES";
    
    // compare each col in that row 
    // and change the order if necessary
    for (int i = 0; i<grid_row_size; i++){
        grid_col_size = grid[i].size();
        for (int j = 0; j<grid_col_size-1; j++){
            isOrdered = grid[i][j]<grid[i][j+1];
            if (isOrdered==0){
                temp=grid[i][j];
                grid[i][j]=grid[i][j+1];
                grid[i][j+1]=temp;
            }
        }
    }
    
    // compare each row in that col
    for (int i = 0; i<grid_row_size-1; i++){
        for (int j = 0; j<grid_col_size; j++){
            isOrdered = grid[i][j]<grid[i+1][j];
            if (isOrdered==0){
                ret_val = "NO";
            }
        }
    }
    
    return ret_val;
    //return "hey";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string t_temp;
    getline(cin, t_temp);

    int t = stoi(ltrim(rtrim(t_temp)));

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string n_temp;
        getline(cin, n_temp);

        int n = stoi(ltrim(rtrim(n_temp)));

        vector<string> grid(n);

        for (int i = 0; i < n; i++) {
            string grid_item;
            getline(cin, grid_item);

            grid[i] = grid_item;
        }

        string result = gridChallenge(grid);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
