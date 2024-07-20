/*

day4

/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 
class Solution {
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {

        ListNode answer = null;
        ListNode next   = null;
        int carry       = 0;

        while(l1 != null || l2 != null) {

            int i1 = l1 != null ? l1.val : 0;
            int i2 = l2 != null ? l2.val : 0;

            if(answer == null) {
                answer = new ListNode((carry + i1 + i2) % 10, next); // init
            } else {
                if(next == null) {
                    next = new ListNode((carry + i1 + i2) % 10);    
                    answer.next = next;
                } else {
                    next.next = new ListNode((carry + i1 + i2) % 10);    
                    next = next.next;
                }
            }

            if((carry + i1 + i2) > 9) {
                carry = 1;
            } else {
                carry = 0;
            }   

            l1 = l1 != null ? l1.next : null;
            l2 = l2 != null ? l2.next : null;
        }

        if (carry > 0) {
            if(next == null) {
                next = new ListNode(1);
                answer.next = next;
            } else {
                next.next = new ListNode(1);    
            }
        }

        return answer;
    }
}

*/