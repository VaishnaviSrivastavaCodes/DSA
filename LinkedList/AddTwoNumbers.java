//https://leetcode.com/problems/add-two-numbers/submissions/

class Solution {
    
   
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        
    ListNode temp = new ListNode();
    ListNode head = temp;
    int carry = 0;
    int sum ;
        
      while(l1!=null || l2!=null || carry ==1){
          sum = 0;
          if(l1!=null){
              sum += l1.val;
              l1= l1.next;
          }
          
          if(l2!=null){
              sum += l2.val;
              l2 = l2.next;
          }
          
          sum += carry;
          
          ListNode newNode = new ListNode(sum%10);
          carry = sum/10;
          temp.next = newNode;
          temp = temp.next;
          
      }
        
        
      return head.next;   
        
    }
}
