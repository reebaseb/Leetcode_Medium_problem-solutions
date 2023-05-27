// C++

class Solution {
    private:
    void permute(vector<int> str, int l, int h,vector<vector<int>>& ans)
   {

    if (l == h)
    {
        ans.push_back(str);
        return;
    }
    for (int i = l; i < h + 1; i++) 
    {
        swap(str[l], str[i]);  
        permute(str, l + 1, h,ans);
        swap(str[l], str[i]);  
    }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        permute(nums,0,nums.size()-1,ans);
        return ans;

    }
};
