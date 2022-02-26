/** A left rotation operation on an array of size n shifts each of the array's elements unit 1 to the left. Given an integer, d, rotate the array that many steps left and return the result. **/

vector<int> rotateLeft(int d, vector<int> arr) {
    for(int i = 0; i < d; i++){
        arr.push_back(arr[0]);
        arr.erase(arr.begin());
    }
    return arr;
}
