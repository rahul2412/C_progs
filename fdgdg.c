#include<stdio.h>
typedef struct
{
char title[50];
char author[50];
char subject[50];
int book_id;
}b;
main(){
b obj;
strcpy(obj.title,"c programming");
strcpy(obj.author,"yashvant kanetkar");
strcpy(obj.subject,"let us c");
obj.book_id=12345;
}
