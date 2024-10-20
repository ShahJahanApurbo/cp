// FCFS scheduling algorithm
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of process : ");
    scanf("%d", &n);
    int bt[n],wt[n],tt[n];
    int avwt=0,avtt=0;

    for(int i=0;i<n;i++){
        printf("Enter the burst time of process %d : ", i+1);
        scanf("%d", &bt[i]);
    }

    wt[0]=avwt=0;
    tt[0]=avtt=bt[0];

    for(int i=1;i<n;i++){
        wt[i]=wt[i-1]+bt[i-1];
        tt[i]=tt[i-1]+bt[i];
        avwt+=wt[i];
        avtt+=tt[i];
    }

    printf("\nProcess\tBurst Time\tWaiting Time\tTurnaround Time\n");
    for(int i=0;i<n;i++){
        printf("P%d\t%d\t\t%d\t\t%d\n", i+1, bt[i], wt[i], tt[i]);
    }

    printf("\nAverage Waiting Time : %f", (float)avwt/n);
    printf("\nAverage Turnaround Time : %f", (float)avtt/n);
}