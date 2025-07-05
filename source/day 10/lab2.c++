class Solution{
public:
    vector<int> find(vector<int>& arr, int x) {
        int n = arr.size();
        int firs =-1, last=-1;

        // Find first occurrence
        
        
        int low=0, high=n-1;
        while (low<=high){
            int mid=low+(high-low)/2;
            if (arr[mid]==x){
                first = mid;
                high = mid - 1;
            } else if (arr[mid] < x) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        
        //for last occourance
        
        low = 0, high = n - 1;
        while (low <= high) {
            int mid = low+(high-low)/2;
            if (arr[mid] == x) {
                last = mid;
                low = mid + 1;
            } else if(arr[mid] < x) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        return {first, last};
    }
};

        

        
  