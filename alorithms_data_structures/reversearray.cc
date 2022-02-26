// Reverse array elements


// using o(n) space
vector<int> reverseArray(vector<int> a) {
    vector<int> data;
    for(int i = a.size() -1; i >= 0; i--) {
        data.push_back(a.at(i));
    }
    return data;
}

// C++ stl hacks
// Solution 1
vector<int> reverseArray(vector<int> a) {
    return { a.rbegin(), a.rend() };
}

// Solution 2
vector<int> reverseArray(vector<int> a) {
    reverse(a.begin(), a.end());
    return a;
}

