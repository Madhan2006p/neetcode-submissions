class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int,int>> stack;

        vector<int> days(temperatures.size() , 0);

        for(int i = 0 ; i < temperatures.size() ; i += 1) {
            int t = temperatures[i];

            while (!stack.empty() && t > stack.top().first) {
                auto pair = stack.top();
                stack.pop(); 
                days[pair.second] = i - pair.second ;
            }
            stack.push({t , i});
        }
        return days;
    }
};
