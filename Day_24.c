Node * removeDuplicates(Node * head) {

  if (head) {

    Node * last = head;

    for (Node * temp = head - > next; temp != NULL; temp = temp - > next) {

      if (last - > data == temp - > data) {

        last - > next = temp - > next;
        free(temp);

      } else {

        last = temp;
      }

    }
    
  }

  return head;
  
}
