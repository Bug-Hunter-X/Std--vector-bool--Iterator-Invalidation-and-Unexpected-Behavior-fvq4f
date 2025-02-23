# std::vector<bool> Iterator Invalidation and Unexpected Behavior
This repository demonstrates a common, yet often overlooked, issue with `std::vector<bool>` in C++.  Due to its optimized memory layout (bit packing), iterators and pointers to elements of `std::vector<bool>` may become invalidated after certain operations. This can lead to unpredictable behavior, including crashes.

The example code (`bug.cpp`) shows how seemingly simple modifications can cause this invalidation, leading to incorrect or undefined behavior.

The solution (`bugSolution.cpp`) presents alternative approaches that avoid this problem, such as using `std::vector<char>` instead for situations where space optimization isn't crucial, and demonstrating safe ways to use and manage iterators.

This is a valuable example for understanding the intricacies of `std::vector<bool>` and improving your C++ programming practices.