//   https://leetcode.com/problems/median-of-two-sorted-arrays/
class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
        int m= nums1.length; int n= nums2.length;
        int arr[] = new int[m+n];
        int i=0;int j=0;int index=0;
        while(i<m && j<n ){
            if(nums1[i]<=nums2[j]  )
            {arr[index++]= nums1[i++];}
            else
            {arr[index++]= nums2[j];j++;}
            
                
        }
        if(i==m && j!=n){
            while(j<n)
            arr[index++]=nums2[j++];
             }
        if(j==n && i!=m ){
            while(i<m)
            arr[index++]= nums1[i++];
        }
       // double res;
        if((m+n)%2==0)
        return (double)(arr[(m+n)/2]+arr[(m+n)/2 -1] )/2;
        else 
            return (double)(arr[(m+n)/2]);
       /* if((m+n)%2 == 1){
            return (double) arr[(m+n)/2];
        }else{
            return (double) (arr[(m+n)/2 - 1] + arr[(m+n)/2])/2;
        }*/
        
    }
}
