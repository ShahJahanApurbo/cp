// Enter number of frames: 3
// Enter number of pages: 20
// Enter reference string: 7 0 1 2 0 3 0 4 2 3 0 3 2 1 2 0 1 7 0 1

#include<stdio.h>
int main(){
    int nf;
    printf("Enter number of frames: ");
    scanf("%d", &nf);
    int np;
    printf("Enter number of pages: ");
    scanf("%d", &np);

    int pages[np];
    printf("Enter reference string: ");
    for(int i=0; i<np; i++){
        scanf("%d", &pages[i]);
    }
    int frames[nf];
    for(int i=0; i<nf; i++){
        frames[i]=-1;
    }
    int fault=0,mindex=0;

    for(int i=0; i<np; i++){
        int flag=0;
        for(int j=0; j<nf; j++){
            if(frames[j]==pages[i]){
                flag=1;
                break;
            }
        }
        if(flag==0){
            fault++;
            frames[mindex]=pages[i];
            mindex=(mindex+1)%nf;
        }
        for(int j=0; j<nf; j++){
            printf("%d\t", frames[j]);
        }
        if(flag==0){
            printf("Fault\n");
        }
        else{
            printf("Hit\n");
        }
    }
    printf("Number of page faults: %d\n", fault);    

}