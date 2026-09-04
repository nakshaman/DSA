int lengthOfLongestSubstring(vector<char>& s) {
    unordered_map<char, int> lastSeen;
    int left = 0;
    int maxLength = 0;

    for (int right = 0; right < s.size(); right++) {
        char currentChar = s[right];

        // If character was seen before AND it's inside the current window
        if (lastSeen.find(currentChar) != lastSeen.end() && lastSeen[currentChar] >= left) {
            left = lastSeen[currentChar] + 1;
        }

        lastSeen[currentChar] = right;
        maxLength = max(maxLength, right - left + 1);
    }

    return maxLength;
}

int main() {
    vector<string> tests = {"abcabcbb", "bbbbb", "pwwkew", "", " ", "au"};
    for (auto& t : tests) {
        vector<char> s(t.begin(), t.end());
        cout << t << " -> " << lengthOfLongestSubstring(s) << endl;
    }
    return 0;
}