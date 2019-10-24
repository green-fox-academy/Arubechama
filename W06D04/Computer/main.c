#include <stdio.h>
#include <stdint.h>

struct Computer {
    float cpu_speed_GHz;
    int ram_size_GB;
    int bits;
};

typedef struct {
    float cpu_speed_GHz;
    int ram_size_GB;
    int bits;
} Notebook;

int main()
{
    struct Computer PC;
    PC.cpu_speed_GHz = 69;
    PC.ram_size_GB = 420;
    PC.bits = 4242564;

    printf("CPU SPEED: %.2f\n", PC.cpu_speed_GHz);
    printf("RAM SIZE: %d\n", PC.ram_size_GB);
    printf("BITS: %d\n", PC.bits);

    Notebook notes;
    notes.cpu_speed_GHz = 69;
    notes.ram_size_GB = 420;
    notes.bits = 4242564;

    printf("CPU SPEED: %.2f\n", notes.cpu_speed_GHz);
    printf("RAM SIZE: %d\n", notes.ram_size_GB);
    printf("BITS: %d\n", notes.bits);

    return 0;
}