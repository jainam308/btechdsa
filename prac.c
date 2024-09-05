
#include<stdio.h>
void callbyvalue(int a){
    a++;

}
void callbyrefrence(int *a){
    (*a)++;
}
int main(){
    int a=10;
    int *ptr=&a;
    printf("the inital value of a= %d",a);
   callbyvalue(a);
   printf("After call by value of a= %d",a);
   callbyrefrence(ptr);
   printf("After   call by refrence  value of a = %d",a);
   return 0;

}