#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size() - 1;
        digits[n] = digits[n] + 1;
        for(int i = n; i > 0; i--){
            if(digits[i] == 10){
                digits[i] = 0;
                digits[i - 1] = digits[i - 1] + 1;
            }
            else {
                break;
            }
        }
        if(digits[0] == 10){
            digits[0] = 0;
            digits.insert(digits.begin(), 1);
        }
        return digits;
    }
};

int main()
{
    vector<int> digits = {9,9};
    vector<int> new_digits;
    Solution s;
    new_digits = s.plusOne(digits);
    for(int i = 0; i < new_digits.size(); i++){
        cout<<new_digits[i];
    }
    return 0;
}