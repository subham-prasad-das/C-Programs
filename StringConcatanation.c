/*
#include<stdio.h>
#include<string.h>

int main(){

    char str1[7] = "Subham";
    char str2[4] = "Das";
    strcat(str1, str2);
    printf("%s", str1);
    return 0;

}
*/

/*
#include<stdio.h>
#include<string.h>

void concatanate(char* s1, char* s2){
    int i = 0;
    while(s1[i] != '\0') i++;

    int j = 0;
    while(s2[j] != '\0'){
        s1[i] = s2[j];
        j++;
        i++;
    }

    s1[i] = '\0';
}

int main(){

    char str1[11] = "Subham";
    char str2[4] = "Das";
    concatanate(str1, str2);
    printf("%s", str1);
    return 0;
}   
*/