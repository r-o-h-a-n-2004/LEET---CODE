class Solution {
public:
    void quicksort(vector<int>& a, int low, int high) {
        if (low < high) {
            int pivot = a[low];
            int i = low;
            int j = high;

            while (i < j) {
                while (i <= high-1 && a[i] <= pivot) {i++;}
                while (j >= low+1 && a[j] > pivot){ j--;}
                if (i < j) {
                    swap(a[i], a[j]);
                }
            }

            swap(a[low], a[j]);
            int p = j;

            quicksort(a, low, p - 1);
            quicksort(a, p + 1, high);
        }
    }

    vector<int> sortArray(vector<int>& nums) {
        quicksort(nums, 0, nums.size() - 1);
        return nums;
    }
};
