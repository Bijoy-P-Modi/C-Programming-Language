#include<stdio.h>
#include<string.h>
typedef struct employee {
    int code ;
    float salary ;
    char name [10];
}emp;

void show (struct employee emp1){
    printf("The code of employee is : %d\n",emp1.code);
    printf("The salary of employee is : %f\n",emp1.salary);
    printf("The name of employee is : %s\n",emp1.name);
}

int main(){
    //declaring e1 and ptr
    emp e1 ;
    emp *ptr;
   
   //pointing ptr to e1
    ptr = & e1;


    //see the number value for e1
    ptr->code = 101 ;
    ptr->salary = 11.01 ;
    strcpy(ptr->name,"Bijoy");
    show(e1);
   
    return 0;
}