//https://practice.geeksforgeeks.org/problems/count-the-triplets4615/1

class Solution{
public:	
	
	int countTriplet(int arr[], int n)
	{
       
    int i,j,k,count =0;
      sort(arr,arr+n);
      for(k=n-1;k>=0;k--){
          i=0,j=k-1;
          while(i<j){
              if((arr[i]+arr[j])==arr[k]){ count++;i++;j--;}
               else if ((arr[i]+arr[j])<arr[k]) i++;
              else j--;
              
          }
      }
      return count;
          
       
	}
};
