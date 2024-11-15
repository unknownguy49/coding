#include<stdio.h>
int add(char[] , char[]);
int main(){
char n[]="sudheer";
char s[]="Hello";
printf("%d\n",sizeof n);
add(n,s);
//add(n,s);
printf("%s\n",n);
printf("%d\n",sizeof n);
}
int add(char *a,char *b){
char *ptr=a;
while(*ptr!='\0') {
ptr++;
printf("%s\n",ptr);
}
while(*b != '\0'){
*ptr=*b;
ptr++;
b++;
}
*ptr='\0';
return 0;
}