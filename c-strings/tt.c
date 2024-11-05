//write your own version of strlen function from string.h

#include<stdio.h>
void my_strlen(char* st, int* totalLength, int* nonSpaceLength) {
   
    int length = 0;
    int nslength = 0;
    char* ptr = st; 

    while (*ptr != '\0') { 
        length++; 
        if (*ptr != ' ') { 
            nslength++; 
        }
        ptr++;
    }

   
    *totalLength = length;
    *nonSpaceLength = nslength;
}

int main() {
    char st[] = "days gone by"; 
    int totalLength = 0; 
    int nonSpaceLength = 0; 

    
    my_strlen(st, &totalLength, &nonSpaceLength);

   
    printf("Total length of the string (including spaces): %d\n", totalLength);
    printf("Length of the string (excluding spaces): %d\n", nonSpaceLength); 
}