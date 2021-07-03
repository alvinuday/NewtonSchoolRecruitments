#include <stdio.h>

void even(int x) {
    if(x<0){
        return;
    }
    x%2==0?even(x-2):even(x-1);
    if(x%2==0){
        printf(" %d ",x);
    }
}
int main(){
    int x;
    printf("Enter a number X \n");
    scanf("%d",&x);
    printf("The even Numbers are: \n");
    even(x);
    return 0;
}
