//mvt memory management
#include<stdio.h>
int main(){
    int ms;
    printf("Enter the memory size : ");
    scanf("%d", &ms);

    int i=1;

    while(1){
        printf("Enter the required memory for process %d : ", i);
        int p;
        scanf("%d", &p);
        printf("Do you want to continue(y/n): ");
        char c;
        scanf(" %c", &c);
        if(c=='y'){
            if(p<=ms){
                printf("Memory is allocated for process %d\n", i);
                ms -= p;
                i++;
            }else{
                printf("Memory is full. Remaining processes can't be accomodated.\n");
                break;
            }
        }
    }
}