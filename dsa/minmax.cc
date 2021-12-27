/**
* Given five positive integers, find the minimum and maximum values that can be calculated by summing exactly four of the five integers. Then print the respective * * minimum and maximum values as a single line of two space-separated long integers.
**/

void miniMaxSum(vector<int> arr) {
    sort(arr.begin(), arr.end());
    long long int mini =0, maxi = 0;
    for (int i = 0; i < (arr.size() - 1); i++) {
        mini += arr[i];
    }
    
    for (int i = 1; i < arr.size(); i++) {
        maxi += arr[i];
    }
    
    cout << mini << " " << maxi;
}
