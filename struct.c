#include <stdio.h>

struct Book {
    int id;
    char *title;              
    char *author;
    char *subject;
    float price;
};

// note use of pointers above 
// alternatively can say char title; and then use strcpy() later; 
// this would require and extra include string.h above

int main(void) {
    
    struct Book abook;
    
    abook.id = 1;
    abook.title   = "Programming Is Fun";  
    abook.author  = "J J Smith";
    abook.subject = "IT";
    abook.price = 25.99;
    
    // if we were not using pointers, we would use strcpy()
    // e.g. strcpy( abook.title, "Programming Is Fun" );
    
    printf("Book Id: %d\n", abook.id);
    printf("Title: %s\n", abook.title);
    printf("Author: %s\n", abook.author);
    printf("Subject: %s\n", abook.subject);
    printf("Price: %.2f\n", abook.price);
    
    return 0;
}
