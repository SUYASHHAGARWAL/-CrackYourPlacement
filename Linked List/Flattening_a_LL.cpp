/*

day17

Node* merge(Node* l1, Node* l2)
    {
        Node* d1=new Node(-1);
        Node* res=d1;
        while(l1!=NULL and l2!=NULL)
        {
            if(l1->data>l2->data)
            {
                d1->bottom=l2;
                l2=l2->bottom;
            }
            else{
                d1->bottom=l1;
                l1=l1->bottom;
            }
            d1->next=NULL;
            d1=d1->bottom;
        }
        if(l1!=NULL)
        {
            d1->bottom=l1;
        }
        if(l2!=NULL)
        {
            d1->bottom=l2;
        }
        return res->bottom;
    }
    Node* mergehead(Node* node)
    {
        if(node==NULL or node->next==NULL)
        {
            return node;
        }
        Node* h=mergehead(node->next);
        return merge(node,h);
    }
    // Function which returns the  root of the flattened linked list.
    Node *flatten(Node *root) {
        // Your code here
        return mergehead(root);
    }
    
    
    */