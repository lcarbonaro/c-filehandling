#include <stdio.h>

struct Student 
{
    char name[50];              
    int  score;
};

int main(void) 
{
    struct Student s;
    
    int i;  // a counter

    FILE *fp;  
    fp = fopen("datafile.csv","w");
    
    for ( i = 1; i <= 5; i++ )   // input 5 records
    {
        // input student name
        printf("Name: ");
        scanf("%s", s.name);    // fgets() better to use but scanf() simpler; see ref.
        
        // input score
        printf("Score: ");    
        scanf("%d", &s.score);  // note the ampersand with scanf() in case of non-string data
        
        // save record to file
        fprintf(fp,"%s,%d\n",s.name,s.score);  
        printf("Record: %s,%d saved \n", s.name, s.score);
    }    
    
    fclose(fp);
    
    printf("%d record(s) saved\n",i-1);
     
    return 0;
}

// ref:
// http://www.cprogramming.com/tutorial/c/lesson3.html
// http://faq.cprogramming.com/cgi-bin/smartfaq.cgi?answer=1044652485&id=1043284385