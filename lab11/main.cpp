int search_linked_list(Node<int>* head, int target) {
    Node<int>* current = head;
    
    while (current != nullptr) {
        if (current->val == target) {
            return 1; 
        }
        current = current->next;
    }
    
    return 0; 
}
