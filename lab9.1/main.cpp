Node<int>* insert_at_tail(Node<int>* head, int value) {
    Node<int>* new_node = new Node<int>(value);

    if (head == nullptr) {
        return new_node;
    }

    Node<int>* current = head;
    while (current->next != nullptr) {
        current = current->next;
    }

    current->next = new_node;

    return head;
}
