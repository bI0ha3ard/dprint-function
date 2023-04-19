#include <stdarg.h>
#include <stdio.h>

void dprint(char* format, ...) {
    va_list args;
    va_start(args, format);
    vprintf(format, args);
    va_end(args);
}

int main(int argc, char** argv) {
    if (argc > 1) {
        dprint(argv[1]);
    } else {
        dprint("Error\n");
    }
    return 0;
}