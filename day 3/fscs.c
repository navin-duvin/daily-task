/*
Enter the number of process:3
Enter the arrival_time and burst_time of process[0]:0 10
Enter the arrival_time and burst_time of process[1]:1 5
Enter the arrival_time and burst_time of process[2]:2 8
Process Arrival_time    Burst_time      Waiting_time    TurnA_time
P[0]            0       10              0               10
P[1]            1       5               10              15
P[2]            2       8               15              23
*/

#include <stdio.h>

struct process{
    int arrival_time;
    int waiting_time;  
    int burst_time;
    int turnaround_time;  
};

struct process proc[10];
int p;

void turnaround(int p){
	int i;
    for(i=0;i<p;i++){
        proc[i].turnaround_time=proc[i].waiting_time+proc[i].burst_time;
    }
}

int main(){
    int i;
    printf("Enter the number of process:");
    scanf("%d",&p);
    for(i=0;i<p;i++){
        printf("Enter the arrival_time and burst_time of process[%d]:",i); 
        scanf("%d %d",&proc[i].arrival_time,&proc[i].burst_time);
    }
    proc[0].waiting_time=0; 
    for (i = 1; i < p ; i++ ){
		proc[i].waiting_time = proc[i-1].burst_time + proc[i-1].waiting_time ; 
    }

    turnaround(p);
    printf("Process\tArrival_time\tBurst_time\tWaiting_time\tTurnA_time\n");
    for(i=0;i<p;i++){
        printf("P[%d]\t\t%d\t%d\t\t%d\t\t%d\n",i,proc[i].arrival_time,proc[i].burst_time,proc[i].waiting_time,proc[i].turnaround_time);
    }
    
    return 0;
}
