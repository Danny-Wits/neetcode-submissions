class Solution {
   public:
    const char delimiter = '_';
    string encode(vector<string>& strs) {
        string cyper;
        for (const string& str : strs) {
            string length = to_string(str.length());
            cyper += length + delimiter + str;
        }
        return cyper;
    }

    vector<string> decode(string s) {

        vector<string> strs;
        string length;
        for(int i =0 ; i<s.length();i++){
            char c = s[i];
            if(c==delimiter){
                int len = stoi(length);
                length="";
                strs.push_back(s.substr(i+1,len));
                i+=len;
            }else{
                length+=c;
            }
        }
        return strs;
    }
};
