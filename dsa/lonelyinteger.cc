// Given an array of integers, where all elements but one occur twice, find the unique element. 

int lonelyinteger(vector<int> a) {
    sort(a.begin(), a.end());
    int num;
    for(int i = 0; i < a.size(); i++){
        if(a[i] != a[i + 1]) {
            num = a[i];
            break;
        }
        else {
            i++;
        }
    }
    return num;
}
