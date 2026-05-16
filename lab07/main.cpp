Node<int>* create_linked_list(std::vector<int>& values) {
    if (values.empty()) return nullptr; // Если массив пуст, возвращаем nullptr

    // Создаем голову списка с первым элементом
    Node<int>* head = new Node<int>(values[0]);
    Node<int>* current = head;

    // Итерируемся по остальным элементам и связываем их
    for (size_t i = 1; i < values.size(); ++i) {
        current->next = new Node<int>(values[i]);
        current = current->next;
    }

    return head;
}
