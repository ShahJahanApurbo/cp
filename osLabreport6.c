// Enter the number of Blocks– 4
// Block 1 size: 280
// Block 2 size: 350
// Block 3 size: 300
// Block 4 size: 320
// Enter the number of processes – 4
// Enter memory required for process 1 – 275
// Enter memory required for process 2 – 400
// Enter memory required for process 3 – 290
// Enter memory required for process 4 – 293
#include<stdio.h>
int main(){
    int nob;
    printf("Enter the number of Blocks : ");
    scanf("%d", &nob);
    int b[nob];
    for(int i=0;i<nob;i++){
        printf("Block %d size: ", i+1);
        scanf("%d", &b[i]);
    }
    int n;
    printf("Enter the number of processes : ");
    scanf("%d", &n);
    int p[n];
    for(int i=0;i<n;i++){
        printf("Enter memory required for process %d : ", i+1);
        scanf("%d", &p[i]);
    }
    printf("Process\tMemory Required\tBlock Size\tAllocated\tInternal Fragmentation\n");
    int i,j=0;
    int tif=0;
    for(i=0;i<n && j<nob;i++){
        if(p[i] > b[j]){
            printf("%d\t%d\t\t%d\t\tNo\t\tN/A\n", i+1, p[i], b[j]);
        }else{
            printf("%d\t%d\t\t%d\t\tYes\t\t%d\n", i+1, p[i], b[j], b[j]-p[i]);
            tif += b[j]-p[i];
            j++;
        }
    }
    if(i<n){
        printf("Memory is full. Remaining processes can't be accomodated.\n");
    }
    printf("Total Internal Fragmentation : %d\n", tif);
}