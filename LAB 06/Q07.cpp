// Message Inspector
// A messaging application stores a sentence in a character array.
// Using a character pointer, count:
// • Number of uppercase letters.
// • Number of lowercase letters.
// • Number of spaces.
// Traverse the sentence until the null character ’\0’

#include<iostream>
#include<string>
using namespace std ;

int main(){
    char msg[] = "Please Give me Good Marks" ;
    char *ptr = msg ;
    int cnt_upper = 0;
    int cnt_lower = 0 ;
    int cnt_space = 0 ;
     while (*ptr != '\0') {
        if (*ptr >= 'A' && *ptr <= 'Z') {
            cnt_upper++;
        } else if (*ptr >= 'a' && *ptr <= 'z') {
            cnt_lower++;
        } else if (*ptr == ' ') {
            cnt_space++;
        }
        ptr++;
    }
    cout << "Sentence: " << msg << endl;
    cout << "Uppercase letters: " << cnt_upper << endl;
    cout << "Lowercase letters: " << cnt_lower << endl;
    cout << "Spaces: " << cnt_space << endl;
    return 0;

}
 

 