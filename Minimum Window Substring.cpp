Output Status:
Runtime: 4 ms, faster than 99.14% of C++ online submissions for Minimum Window Substring.
Memory Usage: 7.7 MB, less than 80.15% of C++ online submissions for Minimum Window Substring.
  
  
  class Solution {
public:
    string minWindow(string s, string t) {
        
 if (s.size() < t.size())    return "";

	string result;
	vector<int> letterCount(128, 0);
	int left = 0, count = 0;
	int min_left = -1;
	int min_len = s.size() + 1;

	for (auto ch : t)   letterCount[ch]++;

	for (int i = 0; i < s.size(); ++i){
		if (--letterCount[s[i]] >= 0)   ++count;
		while (count == t.size()){
			if (min_len > i - left + 1){
				min_len = i - left + 1;
				min_left = left;
			}
			if (++letterCount[s[left]] > 0) --count;
			++left;
		}
	}
	return min_left == -1 ? "" : s.substr(min_left, min_len);
        
    }
};








