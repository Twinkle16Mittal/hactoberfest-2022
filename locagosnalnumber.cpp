// C++ program for the above approach 
#include <bits/stdc++.h> 
using namespace std; 
  
// Function to check if the number 
// N is a icosagonal number 
bool iicosagonal(int N) 
{ 
    float n 
        = (16 + sqrt(144 * N + 256)) 
          / 36; 
  
    // Condition to check if the 
    // N is a icosagonal number 
    return (n - (int)n) == 0; 
} 
  
// Driver Code 
int main() 
{ 
    // Given Number 
    int N = 20; 
  
    // Function call 
    if (iicosagonal(N)) { 
        cout << "Yes"; 
    } 
    else { 
        cout << "No"; 
    } 
    return 0; 
} 
