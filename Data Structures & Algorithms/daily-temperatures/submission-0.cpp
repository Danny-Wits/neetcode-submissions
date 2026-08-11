class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector <int> temp;
        vector<int> result(temperatures.size(),0);

        for(int i = 0 ; i<temperatures.size();i++){
            int element = temperatures[i];
            while(!temp.empty()){
                if(temperatures[temp.back()]<element){
                    result[temp.back()]=i-temp.back();
                    temp.pop_back();
                }else{
                    break;
                }
            }temp.push_back(i);
        }
        return result;
    }
};
