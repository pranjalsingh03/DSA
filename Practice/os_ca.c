#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure to store process information
struct Process {
    char name[50];
    int arrival_time;
    int execution_time;
    int priority;
};

int main() {
    char filename[100];
    int time_slice;
    
    printf("Enter the filename: ");
    scanf("%s", filename);

    printf("Enter the time slice: ");
    scanf("%d", &time_slice);

    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    int num_processes = 0;
    while (!feof(file)) {
        num_processes++;
    }
    rewind(file);

    struct Process processes[num_processes];
    for (int i = 0; i < num_processes; i++) {
        fscanf(file, "%s %d %d %d", processes[i].name, &processes[i].arrival_time, &processes[i].execution_time, &processes[i].priority);
    }

    fclose(file);

    int current_time = 0;
    int completed = 0;
    int wait_time = 0;
    int turnaround_time = 0;

    while (completed < num_processes) {
        int shortest_job = -1;
        int shortest_time = 99999;

        for (int i = 0; i < num_processes; i++) {
            if (processes[i].arrival_time <= current_time && processes[i].execution_time > 0) {
                if (processes[i].execution_time < shortest_time) {
                    shortest_job = i;
                    shortest_time = processes[i].execution_time;
                }
            }
        }

        if (shortest_job == -1) {
            current_time++;
        } else {
            printf("Executing process: %s\n", processes[shortest_job].name);
            processes[shortest_job].execution_time--;
            current_time++;

            if (processes[shortest_job].execution_time == 0) {
                completed++;
                int completion_time = current_time;
                int turnaround = completion_time - processes[shortest_job].arrival_time;
                int wait = turnaround - processes[shortest_job].execution_time;
                wait_time += wait;
                turnaround_time += turnaround;
                printf("Process %s completed in %d units of time.\n", processes[shortest_job].name, turnaround);
            }
        }
    }

    float avg_turnaround = (float)turnaround_time / num_processes;
    printf("Average Turnaround Time: %.2f\n", avg_turnaround);

    return 0;
}
