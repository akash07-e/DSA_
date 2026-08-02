class Solution {
public:
    int smallestEvenMultiple(int a) {
      int b=2;
      int lcm=((a/gcd(a,b))*b);  
      return lcm;
    }
};