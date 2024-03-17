#include <iostream>
using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        int low = 0 ;
        int high = x ;
        while(low<=high)
        {
            long long mid = (low+high)/2;
            if(mid*mid==x) return mid;
            else if(mid*mid>x) high = mid-1;
            else  low = mid +1 ;
           
        }
        // return the lower bound of the number
        return high;
        }
};

int main()
{
    Solution s;
    int ans = s.mySqrt(2147395599);
    cout<<ans;
    return 0;
}
