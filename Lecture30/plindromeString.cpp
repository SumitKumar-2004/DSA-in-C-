#include <iostream>
#include <string>
#include <cctype> // for tolower
using namespace std;

class Solution {
public:
    bool isAlphaNumeric(char ch) {
        if ((ch >= '0' && ch <= '9') ||
            (tolower(ch) >= 'a' && tolower(ch) <= 'z')) {
            return true;
        }
        return false;
    }

    bool isPalindrome(string s) {
        int st = 0, end = s.length() - 1;

        while (st < end) {
            if (!isAlphaNumeric(s[st])) {   // ✅ FIXED
                st++;
                continue;
            }
            if (!isAlphaNumeric(s[end])) {  // ✅ FIXED
                end--;
                continue;
            }
            if (tolower(s[st]) != tolower(s[end])) {
                return false;
            }
            st++;
            end--;
        }
        return true;
    }
};

// Driver code (for testing locally)
int main() {
    Solution sol;
    cout << boolalpha;
    cout << sol.isPalindrome("A man, a plan, a canal: Panama") << endl; // true
    cout << sol.isPalindrome("race a car") << endl;                      // false
    cout << sol.isPalindrome(" ") << endl;                               // true
    return 0;
}
