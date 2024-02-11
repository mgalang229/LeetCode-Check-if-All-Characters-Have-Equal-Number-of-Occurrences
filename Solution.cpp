class Solution {
public:
    bool areOccurrencesEqual(string s) {
        int n = s.size();
        int freq[26];
        memset(freq, 0, sizeof(freq));
        int occurrences = 0;
        for (char& c : s) {
            freq[c-'a']++;
            occurrences = freq[c-'a'];
        }
        bool ok = true;
        for (int i = 0; i < 26; i++)
            if (freq[i] > 0)
                ok &= (freq[i] == occurrences);
        return ok;
    }
};
