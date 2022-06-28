#include <stdio.h>

// Function to find the waiting time for all processes
int waitingTime(int processIDs[], int n,
                int burstTimes[], int waitingTimes[])
{
  // waiting time for first process is 0
  waitingTimes[0] = 0;
  // calculating waiting time
  for (int i = 1; i < n; i++)
    waitingTimes[i] = burstTimes[i - 1] + waitingTimes[i - 1];
  return 0;
}

// Function to calculate turn around time
int turnAroundTime(int processIDs[], int n,
                   int burstTimes[], int waitingTimes[], int tat[])
{
  // calculating turnaround time by adding
  // burstTimes[i] + waitingTimes[i]
  int i;
  for (i = 0; i < n; i++)
    tat[i] = burstTimes[i] + waitingTimes[i];
  return 0;
}

// Function to calculate average time
int averageWaitingTime(int processIDs[], int n, int burstTimes[], char *order)
{

  // print order
  printf("- Order is %s\n\n", order);

  // declaring an array to store waiting time for all processes, and initializing all elements to 0
  int waitingTimes[n], tat[n], totalWaitingTime = 0, totalTurnAroundTime = 0;
  int i;
  // Function to find waiting time of all processes
  waitingTime(processIDs, n, burstTimes, waitingTimes);
  // Function to find turn around time for all processes
  turnAroundTime(processIDs, n, burstTimes, waitingTimes, tat);
  // Display processes along with all details
  printf("Processes    Burst    Waiting Time   Turn around Time \n");
  // Calculate total waiting time and total turn
  // around time
  for (i = 0; i < n; i++)
  {
    totalWaitingTime = totalWaitingTime + waitingTimes[i];
    totalTurnAroundTime = totalTurnAroundTime + tat[i];
    printf(" %d\t       %d\t %d \t\t  %d\n", i + 1, burstTimes[i], waitingTimes[i], tat[i]);
  }
  // Calculate average waiting time and average turn
  printf("\n");
  printf("- Average Waiting Time = %f\n", (float)totalWaitingTime / (float)n);
  printf("- Average Turn Around Time = %f\n", (float)totalTurnAroundTime / (float)n);

  // print some lines to make the output look better
  printf("\n----------------------------------------------------------------- \n\n");

  return 0;
}

// main function
int main()
{

  // print FCFS scheduling
  printf("\n---------- FCFS Scheduling --------\n\n");

  // process id's
  int processIDs[] = {1, 2, 3};
  int n = sizeof processIDs / sizeof processIDs[0];

  // Burst time of all processes in the first order of P1, P2, P3
  int burstTimes_1[] = {24, 3, 3};

  // Burst time of all processes in the second order of  P2, P3, P1
  int burstTimes_2[] = {3, 3, 24};

  // Calculating average time for all processes in the first order of P1, P2, P3
  averageWaitingTime(processIDs, n, burstTimes_1, "P1, P2, P3");

  // Calculating average time for all processes in the second order of  P2, P3, P1
  averageWaitingTime(processIDs, n, burstTimes_2, "P2, P3, P1");
  return 0;
}

// Qn. Write a program in C for FCFS scheduling using the two examples we had in class. That is the one with the order as P1, P2 and P3 and then P2, P3 and P1. What are your observations?

// 1. The code for the program is as above.

// 2. These are the observations after running the program with the two orders as (P1, P2 and P3) and then (P2, P3 and P1).
//  - The average waiting time for the first order (P1, P2 and P3) is greater than the average waiting time for the second order(P2, P3 and P1).
//  - The average turn around time for the first order (P1, P2 and P3) is greater than the average turn around time for the second order(P2, P3 and P1).
//  - This indicates that the first order takes more time to complete the processes than the second order.
//  - In conclusion, this indicates that in FCFS scheduling, if a process having a longer burst time is given a higher priority than a process having a shorter burst time, then the shorter process will have to wait for a long time to be executed, and this inturn results into a longer average waiting and turn around time.