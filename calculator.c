#include<stdio.h>
#include<cs50.h>
int main(void){

    while (true) {

    float num1=get_int("enter the first number : ");
    float num2 =get_int("enter the second number : ");
    char method=get_char("choose the method(A,S,M,D and Q to quit )  : ");


if(method=='A'||method=='a'){
        printf("%.2f\n" , num1+num2);
    }
    else if(method=='S'||method=='s'){
        printf("%.2f\n" , num1-num2);
    }
    else if(method=='M'||method=='m'){
        printf("%.2f\n" , num1*num2);
    }
    else if(method=='D'||method=='d'){
        printf(" %.2f\n" ,num1/num2);
    }
    else{
printf("you are existing the calculator\n  ");
continue;
    }
break;
    }
return 0;
    }


