int compare_strings(std::string& s1, std::string& s2) {
    size_t min_len = std::min(s1.length(), s2.length());
    for (size_t i = 0; i < min_len; ++i) {
        if (s1[i] < s2[i]) return -1;
        if (s1[i] > s2[i]) return 1;
    }
    
    if (s1.length() < s2.length()) return -1;
    if (s1.length() > s2.length()) return 1;
    
    return 0; // Строки равны
}
