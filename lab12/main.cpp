#include <algorithm>
#include <iostream>
#include <iterator>
#include <limits>
#include <queue>
#include <string>
#include <utility>
#include <vector>
#include <sstream>

std::queue<int> execute(std::vector<std::string>& program) {
    std::queue<int> q;
    
    for (const std::string& command_line : program) {
        if (command_line.empty()) continue;
        
        std::stringstream ss(command_line);
        std::string cmd;
        ss >> cmd;
        
        if (cmd == "push") {
            int val;
            ss >> val;
            q.push(val);
        } 
        else if (cmd == "pop") {
            if (q.empty()) {
                std::cout << "Queue is empty!\n";
            } else {
                q.pop();
            }
        } 
        else if (cmd == "peek") {
            if (q.empty()) {
                std::cout << "Queue is empty!\n";
            } else {
                std::cout << q.front() << "\n";
            }
        }
    }
    
    return q;
}
