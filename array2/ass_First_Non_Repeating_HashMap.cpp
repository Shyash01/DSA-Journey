#include <iostream>
#include <vector>
#include <unordered_map>

int firstNonRepeating(const std::vector<int>& arr) {
    std::unordered_map<int, int> frequencyMap;
    
    // Pass 1: Store frequencies of elements
    for (int num : arr) {
        frequencyMap[num]++;
    }
    
    // Pass 2: Find the first element with a frequency of 1
    for (int num : arr) {
        if (frequencyMap[num] == 1) {
            return num;
        }
    }
    
    // Return -1 (or any sentinel value) if no unique element exists
    return -1; 
}

int main() {
    std::vector<int> arr = {9, 4, 9, 6, 7, 4};
    int result = firstNonRepeating(arr);
    
    if (result != -1) {
        std::cout << "First non-repeating element is: " << result << std::endl;
    } else {
        std::cout << "No non-repeating element found." << std::endl;
    }
    return 0;
}
