#include <bits/stdc++.h>
using namespace std;

int binSearch(int *arr, int length, int target)
{
    int start = 0;
    int end = length - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == target)
            return mid;

        if (arr[mid] < target)
            start = mid + 1;

        else
            end = mid - 1;
    }
    return -1;
}

int main()
{
    int arr[] = {2, 4, 5, 8, 9, 11, 14, 19, 22, 25};
    int size = sizeof(arr) / sizeof(arr[0]);
    int check = binSearch(arr, size, 14);
    cout << check;
    return 0;
}
class Solution {
public:
    bool check(vector<int>&arr, int length, int target)
{
    int start = 0;
    int end = length - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == target)
            return true;

        if (arr[mid] < target)
            start = mid + 1;

        else
            end = mid - 1;
    }
    return false;
}
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count =-1;
        
    
            for(int j=nums.size()-1;j>=0;j--)
            {
                int max = nums[j];
                int c = check(nums,nums.size(),-(nums[j]));
                if(c = 1)
                {
                    count = nums[j];
                }
                    
               
            }
        return count;
        
        
        
    }
};