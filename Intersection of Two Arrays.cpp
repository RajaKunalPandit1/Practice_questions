class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector <int> res;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int i=0,j=0;
        while(i<nums1.size() && j<nums2.size()){
            if(i>0 && nums1[i] == nums1[i-1] ){
                i++;
                continue;
            }
            if(j>0 && nums2[j] == nums2[j-1] ){
                j++;
                continue;
            }
            if(nums1[i] == nums2[j]){
                res.push_back(nums1[i]);
                i++;
                j++;
            }else if(nums1[i]>nums2[j]){
                
                j++;
            }else{
                i++;
            }
            
        }
        return res;
        
    }
};

// Another Approach

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> m(nums1.begin(), nums1.end());
        vector<int> res;
        for (auto a : nums2)
            if (m.count(a)) {
                res.push_back(a);
                m.erase(a);
            }
        return res;
    }
};
