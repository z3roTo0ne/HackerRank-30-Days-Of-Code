Node* insert(Node *head,int data) {

    Node *newItem = malloc(sizeof(Node));
    Node *tail = head;
    
    newItem->data = data;
    newItem->next = NULL;
    
    if ( !head ) { 
        return newItem; 
    }
          
    while (tail->next != NULL) {
        tail = tail->next;
    }
 
    tail->next = newItem;
          
    return head;

}
