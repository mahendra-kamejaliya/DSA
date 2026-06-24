class Solution {
public:
    int findPeakElement(vector<int>& arr) {
  int st = 0, end = arr.size() - 1;
    while (st < end)
    {
        int mid = st + (end - st) / 2;

        if (arr[mid] < arr[mid + 1])
        {
            st = mid + 1;  // Peak is on the right
        }
        else
        {
            end = mid;     // Peak is at mid or on the left
        }
    }
    return st;
    }
};