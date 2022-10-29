class Solution {
public:
    bool checkIfPangram(string sentence) {
        set<char> x(sentence.begin(),sentence.end());
        return x.size()==26;
    }
};