#include <stdio.h>

int main(){
    int arr[3][3];
    int p;
    int s;
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            int temp;
            scanf("%d",&temp);
            arr[i][j] = temp;
        }
    }
    p = arr[0][0]+arr[1][1]+arr[2][2];
    s = arr[0][2]+arr[1][1]+arr[2][0];
    printf("The primary diagonal is %d:\n",p);
    printf("The secondary diagonal is %d:\n",s);
    return 0;
}