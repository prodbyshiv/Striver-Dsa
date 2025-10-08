// #include <iostream>
// using namespace std;

// // int main() {
// // //     string s = "hello";

// // //     // cout <<  s.length();
// // //     // cout <<  s[0];
// // // //    cout << s.substr(1,3);
// // //    cout << s.find("llo");

// // //     // cout << s;

// //     string str = "Helloz Geeks";

// //     cout << " using index: ";
// //     for (int i = 0; i < str.size(); i++)
// //     {
// //         cout << str[i];
// //     }
// //      cout << endl;



// //      cout << "Using range-based for loop: ";
// //     for (char ch : str) {
// //         cout << ch ;
// //     }
// //     cout << endl;



// //     cout << "First character: " << str[0] << endl;
// //     cout << "Fifth character: " << str[4] << endl;

// //     // Access using at()
// //     cout << "Character at index 6: " << str.at(6) << endl;

// // }
// // C++ program to insert a character at specific
// // position using Built in functions
  
                            


                                                    
//                                     // insert a character ////



                                   

// // string insertChar(string &s, char c, int pos) {
  
// //     // Insert character at specified position
// //     s.insert(s.begin() + pos, c);
// //   	return s;
// // }

// // int main() {
// //     string s = "Geeks";
// //     cout << insertChar(s, 'A', 3);
// //     return 0;
// // }



//     //REMOVE A CHARACTER 

//     // built in function method

// // string removeCharAtPosition(string s, int pos) {
// //   if (pos < 0 || pos >= s.length())
// //   {
// //     return s;
// //   }

// //   s.erase(pos,1);
// //   return s;
  
// // }

// // int main() {
// //     string s = "abcde";
// //     int pos = 1;
// //     cout << "Output: " << removeCharAtPosition(s, pos) << endl; 
// //     return 0;
// // }


// ///.          REVISEEEEEEEE //////.  
// void customRemoveCharAtPosition(string &s, int pos) {
  
//     if (pos < 0 || pos >= s.length()) {
//         return; 
//     }

//     // Shift characters to the left from the position
//     for (int i = pos; i < s.size()-1; i++)
//     {
//         s[i] = s[i + 1];
//     }
    

//     s.resize(s.length() - 1);
// }

// int main() {
//     string s = "abcde";
//     int pos = 1;
//     customRemoveCharAtPosition(s, pos);
//     cout << s << endl; 
//     return 0;
// }


#include <iostream>
using namespace std;

class Solution {
  public:
    // Function to remove all occurrences of the character from the string
    void removeCharacter(string &s, char c) {
        int j = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i]!=c){
                s[j++] = s[i]; 
            }
        }
        s.resize(j);
    }
};

int main() {
    Solution sol;           // Create object of Solution class
    string s = "geeksforgeeks";
    char c = 'g';
    
    cout << "Original string: " << s << endl;

    sol.removeCharacter(s, c);   // Call the function

    cout << "String after removing '" << c << "': " << s << endl;

    return 0;
}
