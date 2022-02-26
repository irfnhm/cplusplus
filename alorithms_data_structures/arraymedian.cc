// find the median of the array

int findMedian(vector<int> arr) {
    sort(arr.begin(), arr.end());
    int size = arr.size();
    if (size % 2 != 0)
      return (double)arr[size/2];
   return (double)(arr[(size-1)/2] + arr[size/2])/2.0;
}
