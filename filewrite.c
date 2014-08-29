#include <stdio.h>

int main(void) {
    
    FILE *fp;
    
    fp = fopen("myfile.txt","w");
    
    fputs("this is a line in my file\n",fp);
    
    fclose(fp);
    
    return 0;
}