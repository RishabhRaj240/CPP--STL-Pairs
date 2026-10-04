C++ Pairs – STL Basics
A beginner-friendly C++ program that demonstrates the use of the pair container from the C++ Standard Template Library (STL). The program covers basic pairs, nested pairs, and arrays of pairs.
📌 Overview
The pair container is useful for storing two related values together. Each pair contains two members:
- first — stores the first value.
- second — stores the second value.
This program demonstrates how to create, access, and work with pairs in different structures.
✨ Features
- Creates and accesses a basic pair.
- Demonstrates nested pairs.
- Demonstrates an array of pairs.
- Uses .first and .second to access pair elements.
- Introduces commonly used C++ STL headers.
🛠️ Technologies Used
Technology	Purpose
C++	Programming language
STL	Standard Template Library
pair	Stores two related values
iostream	Console input/output


📝 Concepts Covered
1. Basic Pair
A pair can store two values:
pair<int, int> p = {1, 3};

Values can be accessed using:
p.first
p.second

Output:
1 3

2. Nested Pair
A pair can contain another pair:
pair<int, pair<int, int>> p2 = {1, {3, 4}};

The values can be accessed as:
p2.first
p2.second.first
p2.second.second

Output:
1 4 3

3. Array of Pairs
Multiple pairs can be stored in an array:
pair<int, int> arr[] = {
    {1, 2},
    {2, 5},
    {5, 1}
};

An individual pair can be accessed using its index:
arr[1].second

Output:
5

💻 Source Code
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <cmath>

using namespace std;

void explainPair() {

    // Basic Pair
    pair<int, int> p = {1, 3};

    cout << p.first << " " << p.second << endl;

    // Nested Pair
    pair<int, pair<int, int>> p2 = {1, {3, 4}};

    cout << p2.first << " "
         << p2.second.second << " "
         << p2.second.first << endl;

    // Array of Pairs
    pair<int, int> arr[] = {
        {1, 2},
        {2, 5},
        {5, 1}
    };

    cout << arr[1].second << endl;
}

int main() {
    explainPair();

    return 0;
}

📥 Example Input
This program does not require user input.
No input required

📤 Example Output
1 3
1 4 3
5

▶️ How to Run
1. Compile the program
g++ main.cpp -o main

2. Run the executable
./main

Windows: Run main.exe instead.

📚 Learning Outcomes
After completing this program, you should understand:
- What a pair is in C++.
- How to initialize a pair.
- How to access .first and .second.
- How to work with nested pairs.
- How to create an array of pairs.
- How pairs are commonly used in competitive programming and DSA.
⏱️ Complexity Analysis
The program performs a constant number of operations.
- Time Complexity: O(1)
- Auxiliary Space: O(1)
📸 Screenshot
Add your program output screenshot to:
screenshots/output.png

Then include it in the README:
![Program Output](screenshots/output.png)

Recommended project structure:
C++-Pairs/
│
├── main.cpp
├── README.md
└── screenshots/
    └── output.png

👤 Author
Rishab Raj Chourasia
C++ | Data Structures & Algorithms | Problem Solving
