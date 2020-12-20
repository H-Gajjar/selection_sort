#include <iostream>
#include <vector>
#include <string>

using namespace std;

int selection_sort(vector<int> &arr, int start, int end ) {
    
    if (start >= end) return 0;
    
    int smallest = arr[start];
    int index = 0;
    for (int i = start; i < end; ++i) {
        if (arr[i] <=  smallest) {
            smallest = arr[i];
            index = i;
        }
    }
    
    int tmp = arr[start];
    arr[start] = arr[index];
    arr[index] = tmp;

    selection_sort(arr, ++start, end );
    
    return 0;
}

int main(void){
    string input;
    vector<int> arr;
    
    while (cin >> input) {
      if (input == "#") break;
        arr.push_back(std::stoi(input));
    }
    std::cout << "Input:" << std::endl;    
    for (int i = 0; i < arr.size(); ++i) std::cout << arr[i] << " "; 
    
    std::cout << std::endl;
    auto ret = selection_sort(arr,  0, arr.size());

    std::cout << "Output:" << std::endl;
    for (int i = 0; i < arr.size(); ++i) std::cout << arr[i] << " "; 
    std::cout << std::endl;
    
    return 0;
}