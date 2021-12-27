// Hackerrank counting sort problem

vector<int> countingSort(vector<int> arr) {
    vector<int> result(100);
    for(auto i:arr) result[i]++;
    return result; 
}
