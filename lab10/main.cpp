Node<int>* delete_node(Node<int>* head, int value) {
    if (head == nullptr) return nullptr;

    if (head->val == value) {
        Node<int>* new_head = head->next;
        
        head->next = nullptr; 
        delete head;
        
        return new_head;
    }

    Node<int>* current = head;
    while (current->next != nullptr) {
        if (current->next->val == value) {
            Node<int>* to_delete = current->next;
            
            current->next = current->next->next;
            
            to_delete->next = nullptr;
            delete to_delete;
            
            return head; 
        }
        current = current->next;
    }

    return head; 
}
