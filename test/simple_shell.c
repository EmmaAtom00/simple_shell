#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>

#define MAX_INPUT_LENGTH 256

int main() {
    char input[MAX_INPUT_LENGTH];

    while (1) {
        printf("#cisfun$ ");  // Display the prompt

        if (fgets(input, sizeof(input), stdin) == NULL) {
            // Handle "end of file" condition (Ctrl+D)
            printf("\nExiting shell.\n");
            break;
        }

        // Remove the newline character from the input
        size_t input_len = strlen(input);
        if (input_len > 0 && input[input_len - 1] == '\n') {
            input[input_len - 1] = '\0';
        }

        // Fork a child process
        pid_t pid = fork();

        if (pid == -1) {
            perror("fork");
            exit(EXIT_FAILURE);
        } else if (pid == 0) {  // Child process
            // Execute the command
            execlp(input, input, (char *)NULL);

            // If exec fails, print an error message
            perror(input);
            exit(EXIT_FAILURE);
        } else {  // Parent process
            int status;
            waitpid(pid, &status, 0);

            if (WIFEXITED(status)) {
                // Child process exited normally
                int exit_status = WEXITSTATUS(status);
                printf("Exit status: %d\n", exit_status);
            } else if (WIFSIGNALED(status)) {
                // Child process terminated by a signal
                int signal_num = WTERMSIG(status);
                printf("Terminated by signal: %d\n", signal_num);
            }
        }
    }

    return 0;
}

