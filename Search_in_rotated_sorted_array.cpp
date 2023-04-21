#include<iostream>
#include<vector>

using namespace std;

int searchInRotated (vector<int> &nums, int target){
    int start = 0;
    int end = nums.size()-1;

    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (nums[mid] == target){
            return mid;
        }
        // if (nums[start] == nums[mid] && nums[end] == nums[mid]){
        //     start++;
        //     end--;
        // }
        if (nums[start] <= nums[mid]){
            if (target <= nums[mid] && target >= nums[start]){
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }

        }
        else{
            if (target >= nums[mid] && target <= nums[end]){
                start = mid + 1;
            }
            else{
                end = mid -1;
            }
        }
    }
    return 0;
    
}

int main(){
    vector<int> nums {4,5,6,7,0,1,2};
    int target;
    cout << "Enter the target : " << " " ;
    cin >> target;

    int ans = searchInRotated (nums, target);
    cout << "The position of target in rotated sorted array is : " << ans << endl;
    return 0;

}