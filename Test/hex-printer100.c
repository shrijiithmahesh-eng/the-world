include <stdio.h>
#include <string.h>

int main(void) {
    const char *text = "test";  // The string to convert
    size_t len = strlen(text);

    printf("Text: %s\n", text);
    printf("Hex : ");

    for (size_t i = 0; i < len; i++) {
        // Print each character as a two-digit uppercase hex value
        printf("%02X ", (unsigned char)text[i]);
    }

    printf("\n");
    return 0;
}
