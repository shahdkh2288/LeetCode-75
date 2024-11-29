class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> v;
        if(!candies.empty()){
            auto max_it = std::max_element(candies.begin(), candies.end());
            int num = *max_it;
            for(auto &i :candies){
            if(i+extraCandies >= num){
                v.push_back(true);
            }else{
                v.push_back(false);
            }
        }
        }

       
        
        return v;
    }
};