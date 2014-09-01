#include <stdio.h>

int main(void) 
{
    
    FILE *fp;  // declare a file pointer
    
    fp = fopen("myfile.txt","w");  // open file for writing - see ref for other modes
    
    fputs("this is a line in my file\n",fp);  // write a line to the file; 
    
    fprintf(fp,"this line says: %s\n","I AM LINE TWO");   // can also use fprintf() to write
    
    fclose(fp);  // close the file
    
    return 0;
}

// ref: 
// http://www.cprogramming.com/tutorial/cfileio.html
// http://www.mathworks.com/help/matlab/low-level-file-i-o.html

