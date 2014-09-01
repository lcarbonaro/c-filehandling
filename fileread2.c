#include <stdio.h>

int main(void) 
{
    FILE *fp;  // declare a file pointer
    
    char line[255];  // set this to (arbitrary) maximum line length  
    
    fp = fopen("myfile.txt","r");   // open file for reading
    
    fgets(line,sizeof(line),fp);  // read in first line of text from file
    
    while ( !feof(fp) )  // while not EOF, i.e. as long as we have not reached end of file
    {
        printf("%s",line);  // output the line we just read in
        fgets(line,sizeof(line),fp);  // read in the next line
    }
    
    fclose(fp);  // close the file
    
    return 0;
}

// ref: 
// http://www.cprogramming.com/tutorial/cfileio.html
// http://www.mathworks.com/help/matlab/low-level-file-i-o.html
