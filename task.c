#include<stdio.h>
#include<cs50.h>
void draw(int n);
void draw2(int n);

int main(void){
int n =get_int("hieght :  ");
draw(n);
draw2(n);
}

void draw(int n){

for(int i=0 ; i<n;i++){
    for(int j=i;j<n;j++){
        printf(" ");
    }
    for(int j =0 ; j<i;j++){
        printf("##");
    }
    printf("\n");
}
}
void draw2(int n){
for(int i=0; i<n ; i++){
    for(int j=0;j<i ;j++){
    printf(" ");
}
for(int j=i ; j<n ;j++){
    printf("##");
}
printf("\n");
}
}
