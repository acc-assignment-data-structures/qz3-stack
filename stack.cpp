/*
Stack:
Question: Implement a stack using a vector and perform push and pop operations.
requirement: 
  + Use a vector from std C++, appending elements for push and popping the last element for pop operations.
  + Write a driver to test with the input: push (34,56,56,78,88,12,56,67,89,90,21,565,)
*/


#include <iostream>
#include <vector>

class Stack {
private:
    std::vector<int> elements;

public:
    void push(int value) {
      // Add code here
    }

    void pop() {
        if (!elements.empty()) {
          // Add code here
        }
    }
};
