int count_nodes(Node<int>* head) {
    int count = 0;
    Node<int>* current = head;

    while (current != nullptr) {
        count++;
        current = current->next; 
    }

    return count;
}
