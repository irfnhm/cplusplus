/** Reverse the rows and columns of a matrix in the best possible way so that the sum of the elements in the matrix's upper-left quadrant is maximal. **/

int flippingMatrix(vector<vector<int>> matrix) {
    int size = matrix[0].size(), sum{0};
    for(int i = 0;i < size/2; i++){
        for(int j = 0; j < size/2; j++){
            sum += max(max(matrix[i][j], matrix[i][size-1-j]),
            max(matrix[size-1-i][j], matrix[size-1-i][size-1-j]));
        }
    }
    return sum;
}
