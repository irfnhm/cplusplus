/**
* Given an array of integers, calculate the ratios of its elements that are positive, negative, and zero. Print the decimal value of each fraction on a new line 
* with places after the decimal.
**/

void plusMinus(vector<int> arr) {
    double zeroes = 0, pos = 0, neg = 0;
    double arr_size = arr.size();
    for (int i = 0; i < arr_size; i++) {
        if (arr[i] > 0) pos++;
        else if (arr[i] < 0) neg++;
        else zeroes++;
    }
    cout << fixed << setprecision(6) << pos/arr_size << endl << neg/arr_size << endl << zeroes/arr_size << endl;
}
