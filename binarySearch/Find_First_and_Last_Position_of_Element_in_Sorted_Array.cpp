//https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/submissions/

class Solution {
    public:
    int FirstOccurrence(vector<int> arr,int k){
    int s=0;
    int e=arr.size()-1;
    int ans=-1;
    int mid;
    while(s<=e){
        mid=s+ (e-s)/2;
        if(arr[mid]==k){
            ans=mid;
            e=mid-1;
        }
        else if(arr[mid]<k){
            s=mid+1;
        }
        else e=mid-1;
    }
    return ans;
}
int LastOccurrence(vector<int> arr,int k){
    int s=0;
    int e=arr.size()-1;
    int ans=-1;
    int mid;
    while(s<=e){
        mid=s+ (e-s)/2;
        if(arr[mid]==k){
            ans=mid;
            s=mid+1;
        }
        else if(arr[mid]<k){
            s=mid+1;
        }
        else e=mid-1;
    }
    return ans;
}
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> v;
        v.push_back(FirstOccurrence(nums,target));
        v.push_back(LastOccurrence(nums,target));
        return v;
    }
};