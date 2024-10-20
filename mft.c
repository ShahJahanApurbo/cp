//multiprogramming with fixed number of tasks
#include<stdio.h>
int main(){
    int ms;
    printf("Enter the memory size : ");
    scanf("%d", &ms);

    int bs;
    printf("Enter the block size : ");
    scanf("%d", &bs);

    int nob = ms/bs;
    int ef = ms - nob*bs;

    int n;
    printf("Enter the number of process : ");
    scanf("%d", &n);

    int p[n];
    for(int i=0;i<n;i++){
        printf("Enter the memory required for process %d : ", i+1);
        scanf("%d", &p[i]);
    }
    printf("No of blocks : %d\n", nob);

    printf("Process\tMemory Required\tAllocated\tInternal Fragmentation\n");
    int i,j=0;
    int tif=0;

    for(i=0;i<n && j<nob;i++){
        if(p[i] > bs){
            printf("%d\t%d\t\tNo\t\tN/A\n", i+1, p[i]);
        }else{
            printf("%d\t%d\t\tYes\t\t%d\n", i+1, p[i], bs-p[i]);
            tif += bs-p[i];
            j++;
        }
    }
    if(i<n){
        printf("Memory is full. Remaining processes can't be accomodated.\n");
    }
    printf("External Fragmentation : %d\n", ef);
    printf("Total Internal Fragmentation : %d\n", tif);


}