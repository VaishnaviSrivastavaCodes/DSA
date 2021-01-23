//https://leetcode.com/problems/trapping-rain-water/

class Solution {
    public int trap(int[] height) {
        
      int n = height.length;
        if(n==0) return 0;
        int lmax[] = new int[n];
        int rmax[] = new int[n];
        lmax[0] = height[0];
        rmax[n-1]= height[n-1];
        for(int i=1;i<n-1;i++){
            lmax[i]= Math.max(height[i],lmax[i-1]);
        }
        for(int i =n-2; i>=0;i--){
            rmax[i]= Math.max(height[i], rmax[i+1]);
        }
        int water = 0;
        for(int i = 1; i<n-1;i++){
        water += Math.min(lmax[i], rmax[i]) - height[i];
        }
        return water;
    }
}
