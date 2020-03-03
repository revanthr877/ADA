#include<stdio.h>
#include<stdlib.h>



void meeting(int S[],int F[],int m[],int n){
    for(int i=1;i<n;i++){
        int key1=S[i];
        int key2=F[i];
        int key3=m[i];
        int j=i-1;
        while(j>=0 && S[j]>key1){
            S[j+1]=S[j];
            F[j+1]=F[j];
            m[j+1]=m[j];
            j--;
        }
        S[j+1]=key1;
        F[j+1]=key2;
        m[j+1]=key3;
    }
    printf("meetings:\n");
    printf("%d from %d to %d\n",m[0],S[0],F[0]);
    int i=0;
    while(i+1<n){
        int j=i+1;
        while(j<n){
            if(F[i]<=S[j]){
                printf("%d from %d to %d\n",m[j],S[j],F[j]);
                                i=j;
            }  
            j++;  
        } 
    }
}

int main()
{
    int n;
    printf("Enter total number of meetings: \n");
    scanf("%d",&n);
    int S[n],F[n],m[n];
    for(int i=0;i<n;i++){
        m[i]=i+1;
      printf("start time of meeting %d",i+1);
        scanf("%d",&S[i]);
        printf("finish time of meeting %d",i+1);
       scanf("%d",&F[i]);
        printf("\n");
    }
    meeting(S,F,m,n);
    return 0;
}
