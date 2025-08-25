#include <stdio.h>
#include <string.h>

int main() {
    char input[100];

    printf("Chatbot: Vanakkam! I am your little chatbot 🤖\n");
    printf("Type something (type 'bye' to exit):\n");

    while (1) {
        printf("You: ");
        fgets(input, sizeof(input), stdin);

        // remove newline from fgets
        input[strcspn(input, "\n")] = 0;

        // exit condition
        if (strcmp(input, "bye") == 0) {
            printf("Chatbot: Bye! Take care 👋\n");
            break;
        }
        else if (strcmp(input, "hi") == 0 || strcmp(input, "hello") == 0) {
            printf("Chatbot: Hello! How are you?\n");
        }
        else if (strcmp(input, " hi how are you") == 0) {
            printf("Chatbot: I'm doing great, thanks for asking!\n");
        }
        else if (strcmp(input, "what is your name") == 0) {
            printf("Chatbot: I am a simple C chatbot 🤖\n");
        }
        else {
            printf("Chatbot: Sorry, I don't understand that yet.\n");
        }
    }

    return 0;
}

