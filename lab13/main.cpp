#include <iostream>
#include <limits>
#include <string>
#include <utility>
#include <vector>
#include <queue>

std::vector<std::string> process_tasks_fifo(std::vector<std::string>& tasks) {
    std::queue<std::string> task_queue;
    std::vector<std::string> completed_tasks;
   
    for (const std::string& task : tasks) {
        task_queue.push(task);
    }
    
    while (!task_queue.empty()) {
        completed_tasks.push_back(task_queue.front());
        task_queue.pop();
    }
    
    return completed_tasks;
}
