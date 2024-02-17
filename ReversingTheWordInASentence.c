// for ex - "my name is subham prasad das" will be converted into "das prasad subham is name my"

/*

#include<stdio.h>
#include<string.h>

int main(){

    char str[21]; 
    fgets(str, 21, stdin);
    str[strcspn(str, "\n")] = '\0';

    int s = 0, e = strlen(str) - 2;
    while(s < e){
        char temp = str[s];
        str[s] = str[e];
        str[e] = temp;
        s++; e--;
    }

    int i = 0;
    while(str[i] != '\0'){

        int j = i;
        while(str[j] != ' ' && str[j] != '\0'){
            j++;
        }

        int start = i, end = j-1;
        while(start < end){
            char temp = str[start];
            str[start] = str[end];
            str[end] = temp;
            start++; end--;
        }
        i = j + 1;
    }
    printf("%s", str);

    return 0;

}
*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[21];

    // Get input string with proper null terminator
    fgets(str, 21, stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove trailing newline (if present)

    // Reverse the entire string (optional, for handling punctuation correctly)
    int s = 0, e = strlen(str) - 2;
    while (s < e) {
        char temp = str[s];
        str[s] = str[e];
        str[e] = temp;
        s++;
        e--;
    }

    // Reverse individual words in-place
    int i = 0;
    while (str[i] != '\0') {
        // Find word start and end
        int word_start = i;
        while (str[i] != ' ' && str[i] != '\0') {
            i++;
        }
        int word_end = i - 1;

        // Skip leading spaces between words
        while (str[word_start] == ' ') {
            word_start++;
        }

        // Handle empty words (leading/trailing spaces or consecutive spaces)
        if (word_start > word_end) {
            i++;
            continue;
        }

        // Reverse the word
        s = word_start;
        e = word_end;
        while (s < e) {
            char temp = str[s];
            str[s] = str[e];
            str[e] = temp;
            s++;
            e--;
        }

        i++; // Move to the next word (including space, if any)
    }

    printf("%s\n", str);

    return 0;
}


// Still required some changes