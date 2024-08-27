/*

day34

class Solution {
public:
    string reorganizeString(string s) {
        vector<pair<char, int>> mpp(26, {0, 0}); 
        
        // Count frequency of each character
        for (char ch : s) {
            mpp[ch - 'a'].first = ch; 
            mpp[ch - 'a'].second++;    
        }
        
        // use custom comparator to sort the vector
        sort(mpp.begin(), mpp.end(), [&](const pair<char, int>& a, const pair<char, int>& b) {
            return a.second > b.second;
        });

        // Priority queue to arrange characters based on their frequency
        priority_queue<pair<int, char>> pq;
        for (auto it : mpp) {
            if (it.second > 0) { 
                pq.push({it.second, it.first}); 
            }
        }

        //need to initialise this 
        string ans(s.size(), ' ');
        int idx = 0;

        // Arrange characters in the result string
        while (!pq.empty()) {
            auto [freq, ch] = pq.top(); // Get the character with the highest frequency
            pq.pop();
            
            for (int i = 0; i < freq; ++i) {
                if (idx >= s.size()) { // If idx goes out of bounds, wrap to odd indices
                    idx = 1;
                }
                ans[idx] = ch; 
                idx += 2; // Move to the next even position
            }
        }

        if (ans.size() > 1 && ans[0] == ans[1]) {
            return ""; // If the first two characters are the same, return empty
        }

        return ans;
    }
};


*/