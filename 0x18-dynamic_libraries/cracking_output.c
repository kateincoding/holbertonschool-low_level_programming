#include <unistd.h>

int puts (const char *s)
{
    write(1, "Congratulations, you win the Jackpot!\n", 38);
    return (0);
}
