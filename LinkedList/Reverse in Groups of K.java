class Solution {
    public ListNode reverseKGroup(ListNode head, int k) {
      
        //checking size
      ListNode sizeNode = head;
        int size = 0;
        while(sizeNode!=null){
            sizeNode= sizeNode.next;
            size++;
        }
        
        if(head==null || head.next == null || size<k )
            return head;
        
        ListNode curr = head;
        ListNode prev= null;
        ListNode nextNode ;
        int count = 0;
        
        
        while(curr!=null && count < k) {
            nextNode= curr.next;
            curr.next = prev;
            prev = curr;
            curr = nextNode;
            count++;
        }
        
        ListNode temp = prev;
        while(temp.next!=null){
            temp = temp.next;
        }
            temp.next = reverseKGroup(curr,k);
        return prev;
        
    }
}
