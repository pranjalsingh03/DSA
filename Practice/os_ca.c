#include <stdio.h>
#include <stdlib.h>

typedef struct Process {
    char name[20];
    int arrival_time;
    int execution_time;
    int priority;
} Process;

void sjf_with_preemption(Process processes[], int n, int time_slice, FILE *output_file) {
    int current_time = 0;
    Process* ready_queue[n];
    int front = 0, rear = 0;
    Process* current_process = NULL;

    while (current_time >= 0) {
        for (int i = 0; i < n; i++) {
            if (processes[i].arrival_time == current_time) {
                ready_queue[rear] = &processes[i];
                rear++;
            }
        }

        int shortest_index = -1;
        for (int i = front; i < rear; i++) {
            if (current_process == NULL || ready_queue[i]->execution_time < current_process->execution_time) {
                shortest_index = i;
                current_process = ready_queue[i];
            }
        }

        if (current_process != NULL) {
            if (time_slice > 0 && current_process->execution_time > time_slice) {
                // Preempt the current process if using time slice
                fprintf(output_file, "Executing %s for time slice %d\n", current_process->name, time_slice);
                current_time += time_slice;
                current_process->execution_time -= time_slice;
            } else {
                // Process completes
                fprintf(output_file, "Executing %s for %d\n", current_process->name, current_process->execution_time);
                current_time += current_process->execution_time;
                current_process->execution_time = 0;
                current_process = NULL;
                front++;
            }
        } else {
            current_time++;
        }

        int all_terminated = 1;
        for (int i = 0; i < n; i++) {
            if (processes[i].execution_time > 0) {
                all_terminated = 0;
                break;
            }
        }

        if (all_terminated) {
            break;
        }
    }
}

float calculate_average_turnaround_time(Process processes[], int n) {
    float total_turnaround_time = 0;
    for (int i = 0; i < n; i++) {
        total_turnaround_time += processes[i].execution_time;
    }
    return total_turnaround_time / n;
}

int main() {
    int n;
    printf("Enter the number of processes: ");
    scanf("%d", &n);
    Process processes[n];

    for (int i = 0; i < n; i++) {
        printf("Enter process name, arrival time, execution time, and priority for Process %d: ", i + 1);
        scanf("%s %d %d %d", processes[i].name, &processes[i].arrival_time, &processes[i].execution_time, &processes[i].priority);
    }

    int time_slice;
    printf("Enter the time slice (quantum) or 0 for no pre-emption: ");
    scanf("%d", &time_slice);

    char output_filename[100];
    printf("Enter the output filename: ");
    scanf("%s", output_filename);

    FILE *output_file = fopen(output_filename, "w");
    if (!output_file) {
        printf("Error opening output file.\n");
        return 1;
    }

    fprintf(output_file, "Execution Log:\n");
    sjf_with_preemption(processes, n, time_slice, output_file);

    float avg_turnaround_time = calculate_average_turnaround_time(processes, n);
    fprintf(output_file, "Average Turnaround Time: %.2f\n", avg_turnaround_time);
    fclose(output_file);

    return 0;
}
