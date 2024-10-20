// Enter the number of blocks: 4
// Enter the number of files: 3
// Enter the size of the blocks:-
// Block 1: 5
// Block 2: 8
// Block 3: 4
// Block 4: 10
// Enter the size of the files:-
// File 1: 1
// File 2: 4
// File 3: 7

#include<stdio.h>
int main(){
    int nob;
    printf("Enter the number of blocks: ");
    scanf("%d", &nob);
    int nof;
    printf("Enter the number of files: ");
    scanf("%d", &nof);
    int block[nob+1], file[nof+1], flag[nob+1], bn[nof+1],frag[nof+1];
    for(int i=0; i<=nob; i++){
        flag[i]=0;
        block[i]=0;
    }
    for(int i=0; i<=nof; i++){
        bn[i]=0;
        frag[i]=0;
    }
    printf("Enter the size of the blocks:-\n");
    for(int i=1; i<=nob; i++){
        printf("Block %d: ", i);
        scanf("%d", &block[i]);
    }
    printf("Enter the size of the files:-\n");
    for(int i=1; i<=nof; i++){
        printf("File %d: ", i);
        scanf("%d", &file[i]);
    }
    for(int i=1; i<=nof; i++){
        for(int j=1; j<=nob; j++){
            if(flag[j]==0 && block[j]>=file[i]){
                bn[i]=j;
                frag[i]=block[j]-file[i];
                flag[bn[i]]=1;
                break;
            }
        }
        
    }

    printf("File No.\tFile Size\tBlock No.\tBlock Size\tFragment\n");
    for(int i=1; i<=nof; i++){
        printf("%d\t\t%d\t\t%d\t\t%d\t\t%d\n", i, file[i], bn[i], block[bn[i]], frag[i]);
    }

}