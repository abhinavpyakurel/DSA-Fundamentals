#include<algorithm>
#include <iostream>
#include <vector>
#include<unordered_map>
using namespace std;




vector<int> twosum(vector<int>& nums, int target){

    unordered_map<int,int> seen;

    for(int i =0; i<nums.size(); i++){
        int need = target - nums[i];
        if(seen.count(need)){
            return {i,seen[need]};
        }
        seen[nums[i]] = i;

    }
    return {};
}














//Merging two sorted arrays
vector<int> mergeSorted(vector<int>& nums1 , vector<int>& nums2){
    int p1 = 0;
    int p2 = 0;
    vector<int> result;
    int naya;
    while(p1 < nums1.size() && p2 < nums2.size())
    {
        naya = min(nums1[p1] , nums2[p2]);
        result.push_back(naya);
        if(nums1[p1] < nums2[p2]){
            p1++;
        }
        else if(nums1[p1] > nums2[p2]){
            
            p2++;
            
        }
        
    }
    
    while(p1 < nums1.size()){
        result.push_back(nums1[p1]);
        p1++;
    }
    while(p2 < nums2.size()){
        result.push_back(nums2[p2]);
        p2++;
    }
    
    return result;
}

int main() {
    
    vector<int> nums1 = {1,3,5};
    vector<int> nums2 = {2,4,6};
    
    vector<int> result = mergeSorted(nums1 , nums2);
    
    for(int num : result){
        cout << num << endl;
    }
    
    

    return 0;
}