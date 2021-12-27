// Given a square matrix, calculate the absolute difference between the sums of its diagonals. 

int diagonalDifference(vector<vector<int>> arr) {
    int ld{0}, rd{0}, r = arr.size() - 1;
    for(int i = 0; i < arr.size(); i++) {
       ld += arr[i][i];
       rd += arr[i][r--];
    }
    return abs(ld - rd);
}
