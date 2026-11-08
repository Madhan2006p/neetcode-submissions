class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map < string , int > counts;

        istringstream stream(s1+" "+s2);

        string word;

        while(stream>>word) 
            counts[word]++;

        vector<string> result;

        for(const auto& [w,count]:counts)
            if(count==1)result.push_back(w);
            
        return result;

        
    }
};
