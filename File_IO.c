// file I / O 

#include<stdio.h>

int main(){

    FILE *f; // created a pointer to store the address of the required file
    int num, jNo;
    f = fopen("Subham.txt", "r"); // opened the file naming "Subham.txt".
    if(f == NULL){ // If there is no file exist naming "Subham.txt", "r" -> reading mode of file opening will return "NULL"
        f = fopen("Subham.txt", "w"); // if there is no file exist, "w" -> writing mode auto generates the file with corresponding name.
        fprintf(f, "%d is the jersey number of Hitman Rohit Sharma", jNo); // added this sentence into the file
        fscanf(f, "%d", &num); // took out the 1st integer i.e. 45 and put it into "num".
        printf("File opening was successful. We were also able to read and write in the file."); // the success message
        fclose(f); // closed the file and freed the RAM
    }
    else{
        printf("The file exists"); // if file already exist s, "else" will be executed..
    }

    return 0;
}