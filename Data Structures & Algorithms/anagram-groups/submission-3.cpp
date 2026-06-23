class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> hashMap;

        for (const string str : strs) {
            string hashedString = hashFunction(str);
            if(hashMap.find(hashedString) == hashMap.end()){//not found 
             vector<string>newList;
             newList.push_back(str);
              hashMap[hashedString]=newList;
            }else{
               hashMap[hashedString].push_back(str); 
            }
        }
        vector<vector<string>> result;
        for( const auto pair:hashMap){
            result.push_back(pair.second);
        }
        return result;
    }
    string hashFunction(string str) {
        if (str.length() == 0) return "_";
        string hashedString = "";
        for (int i = (int)'a'; i <= (int)'z'; i++) {
            int counter = 0;
            for (const char c : str) {
                if (((char)i) == c) {
                    counter++;
                }
            }
            if (counter == 0) continue;
            hashedString += (char)i + to_string(counter);
        }
        // cout<<str <<" : "<<hashedString<<"\n";
        return hashedString;
    }
};
