#include <stdio.h>

struct Book      // alternatively can use typedef struct { ...members...} Book;
{
    // member variables of the structure
    int id;       
    char *title;              
    char *author;
    char *subject;
    float price;
    
};

// note use of pointers above 
// alternatively can say char title, and then use strcpy() later 
// this would require an extra include directive: #include <string.h>

int main(void) 
{
    
    struct Book abook;   // if we use typedef, then: Book abook;
    
    abook.id = 1;
    abook.title   = "Programming Is Fun";  
    abook.author  = "J J Smith";
    abook.subject = "IT";
    abook.price = 22.99;
    
    // if we were not using pointers, we would use strcpy()
    // e.g. strcpy( abook.title, "Programming Is Fun" );
    
    printf("Book Id: %d\n", abook.id);
    printf("Title: %s\n", abook.title);
    printf("Author: %s\n", abook.author);
    printf("Subject: %s\n", abook.subject);
    printf("Price: %.2f\n", abook.price);
    
    return 0;
}

// ref:
// http://www.learn-c.org/en/Structures
