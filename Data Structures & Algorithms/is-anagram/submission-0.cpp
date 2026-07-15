#define RANGE 26
class Solution {
public:
    void countSort(string &str) {
    int n = str.length();
    
    // Output array to store sorted string
    char out[n + 1];
    
    // Count array to store frequency
    int count[RANGE] = {0};

    // Store the count of each character
    for (int i = 0; i < n; i++) {
        count[str[i] - 'a']++;
    }

    // Modify count array to store cumulative
  	// position of characters
    for (int i = 1; i < RANGE; i++) {
        count[i] += count[i - 1];
    }

    // Building output array based on the 
  	// cumulative positions
    for (int i = n - 1; i >= 0; i--) {
        out[count[str[i] - 'a'] - 1] = str[i];
        count[str[i] - 'a']--;
    }
    out[n] = '\0';

    // Copy the sorted characters back to the original string
    for (int i = 0; i < n; i++) {
        str[i] = out[i];
    }
    }
    bool isAnagram(string s, string t) {
        countSort(s);
        countSort(t);
        if (s == t)
            return true;
        return false;
    }
};
