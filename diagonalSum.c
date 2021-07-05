#include <stdio.h>

int main(){
    int n;
    printf("Enter N\n");
    scanf("%d",&n);
    int arr[n][n];
    int p=0,s=0;
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            int temp;
            scanf("%d",&temp);
            arr[i][j] = temp;
        }
    }
    /* p = arr[0][0]+arr[1][1]+arr[2][2];
    s = arr[0][2]+arr[1][1]+arr[2][0]; */
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                p+=arr[i][j];
            }
            if((i+j)==(n-1)){
                s+=arr[i][j];
            }
        }
    }
    printf("The primary diagonal is: %d\n",p);
    printf("The secondary diagonal is: %d\n",s);
    return 0;
}