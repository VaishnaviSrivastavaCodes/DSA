
//https://leetcode.com/problems/happy-number/
class Solution {
    public boolean isHappy(int n) {
        Set <Integer> st = new HashSet<>();
      while(n!= 1){
          if(st.contains(n))
              return false;
          st.add(n);
          n = findRes(n);
      } 
        return true;
    }
    
    int findRes(int n){
        int res = 0;
        while(n!=0){
            res += (n%10)*(n%10);
            n/=10;
        }
        return res;   
    }
}
