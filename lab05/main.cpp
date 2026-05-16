std::string safe_modify_string(std::string& s, int index, std::string& new_char) {
  
    if (index < 0 || index >= static_cast<int>(s.length())) {
        return s; 
    }
    
    std::string modified_str = s;
  
    if (!new_char.empty()) {
        modified_str[index] = new_char[0];
    }
    
    return modified_str;
}
