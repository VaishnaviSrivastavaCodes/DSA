//             https://leetcode.com/problems/majority-element-ii/

class Solution {
public:
    vector<int> majorityElement(vector<int>& num) {
         int n= num.size();int i; vector<int> v;
        int a=-1,b=-1,c1=0,c2=0;
        for(int i=0;i<n;i++){    //
            if(num[i]==a)
                c1++;
            else if(num[i]==b)
                c2++;
            else if(c1==0)
            {
                a=num[i];
                c1++;
            }
            else if(c2==0)
            {
                b=num[i];
                c2++;
            }
            else{
                c1--;
                c2--;
            }
        }
        c1=0;c2=0;
        for(int i=0;i<n;i++){
            if(num[i]==a)c1++;
            if(num[i]==b)c2++;
        }
       if(c1>n/3)  v.push_back(a);
        if(c2>n/3 && a!=b) v.push_back(b);
        
    return v;
        
    }
};
