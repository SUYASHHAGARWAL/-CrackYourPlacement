/*

day17

Node *reverse(Node *head){
        if(head == NULL || head->next == NULL){
            return head;
        }
        Node *curr = head, *prev = NULL, *fut = NULL;
        
        while(curr){
            fut = curr->next;
            curr->next = prev;
            prev = curr;
            curr = fut;
        }
        
        return prev;
    }
    Node* subLinkedList(Node* head1, Node* head2) {
        // Your implementation of subLinkedList goes here
        // Make sure to return the head of the resulting linked list
        
        Node *temp1 = head1;
        Node *temp2 = head2;
        
        while(temp1 && !(temp1->data)){
            temp1 = temp1->next;
        }
        
        while(temp2 && !(temp2->data)){
            temp2 = temp2->next;
        }
        
        if(temp2==NULL && temp1==NULL){
            return new Node(0);
        }
        
        if(!temp1) return temp2;
        if(!temp2) return temp1;
        
        head1 = temp1, head2 = temp2;
        
        int count1 = 1;
        int count2 = 1;
        while(temp1->next){
            count1++;
            temp1 = temp1->next;
        }
        
        while(temp2->next){
            count2++;
            temp2 = temp2->next;
        }
        
        Node *largest = NULL;
        
        if(count1 == count2){
            Node *node1 = head1;
            Node *node2 = head2;
            while(node1 && (node1->data == node2->data)){
                node1 = node1->next;
                node2 = node2->next;
            }
            if(!node1) return new Node(0);
            largest = node1->data > node2->data? head1 : head2;
        }
        else{
            largest = count1>count2? head1 : head2; 
        }
        
        if(largest == head2){
            swap(temp1,temp2);
        }
        
        Node *smallest = largest == head1? head2 : head1;
        
        largest = reverse(largest);
        smallest = reverse(smallest);
        
        Node *ans = new Node(0);
        Node *tail = ans;
        
        bool carry = 0;
        bool key = 0;
        
        while(temp1 && temp2){
            key = 0;
            if(temp1->data == 0 && carry){
                temp1->data = 9;
                key = 1;
            }
            else{
                temp1->data -= carry;
            }
            if(temp1->data < temp2->data){
                carry = 1;
                temp1->data += 10;
            }
            else{
                if(!key) carry = 0;
            }
            tail->next = new Node(temp1->data - temp2->data);
            tail = tail->next;
            
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        
        
        while(temp1){
            if(temp1->data == 0 && carry){
                temp1->data = 9;
                carry = 1;
            }
            else{
                temp1->data -= carry;
                carry = 0;
            }
            tail->next = new Node(temp1->data);
            tail = tail->next;
            
            temp1 = temp1->next;
        }
        
        ans = ans->next;
        ans = reverse(ans);
        
        while(!ans->data){
            ans = ans->next;
        }
        
        return ans;
    }
    
    */