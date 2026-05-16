std::unordered_map<std::string, int> count_characters(std::string& s) {
    std::unordered_map<std::string, int> freq_map;
    
    for (char c : s) {
        std::string char_str(1, c);
        freq_map[char_str]++;
    }
    
    return freq_map;
}
