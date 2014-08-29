#include <stdio.h>

int main(void) {
    
    FILE *fp;
    char line[255];  // set this to (arbitrary) maximum line length  
    
    fp = fopen("myfile.txt","r");
    
    fgets(line,sizeof(line),fp);
    
    printf("%s",line);
    
    fclose(fp);
    
    return 0;
}