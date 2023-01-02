#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[]) {

 // Check for valid arguments
 if (argc != 2) { 
  cerr << "Error: Please provide a single string argument." << endl; 
  return 1; 
 }

    // Store the input string in a variable. 
    string input = argv[1];

    // Initialize variables to store the maximum number of unequal consecutive characters and the current count. 
    int maxCount = 0, currCount = 0;

    // Iterate through each character in the input string. 
    for (int i = 0; i < input.length(); i++) {

        // If current character is different than previous one, increment the count.  Otherwise reset it back to 1.  
        if (input[i] != input[i-1]) { currCount++; } else { currCount = 1; }

        // Update max count if needed.  
        if (currCount > maxCount) { maxCount = currCount; }        

    }    

    cout << "Maximum number of unequal consecutive characters: " << maxCount << endl;    

    return 0;    
}