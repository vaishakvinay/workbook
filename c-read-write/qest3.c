//write a program to read a text file character by character and write its content twice in seperate file.

#include<stdio.h>


int main()
{
    FILE *input_ptr, *output_ptr;
    input_ptr = fopen("test.txt", "r");
    output_ptr = fopen("test2.txt", "w"); 
    
    char ch;
    // Read characters from input file and write to output file twice
    while ((ch = fgetc(input_ptr)) != EOF) {
        fprintf(output_ptr, "%c", ch); // Write character to output file
    }
    rewind(input_ptr); // Move the file pointer back to the beginning of the input file
    while ((ch = fgetc(input_ptr)) != EOF) {
        fprintf(output_ptr, "%c", ch); // Write character to output file again
    }

    // Close the files
    fclose(input_ptr);
    fclose(output_ptr);
    
}