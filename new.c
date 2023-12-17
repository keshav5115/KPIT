#include<stdio.h>
int aa =10;
int bb =20;
void fun(int *a,int *b){
    printf("%d %d",a,b);
}

void main(){
    fun(&aa,&bb);

}