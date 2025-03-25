#include <delog.h>
#include <unistd.h>

int main() {
    int i;
    while (1)
    {
        delog(DELOG_LEVEL_INFO, "INFO message: %d\n", i++);
    }
    
    return 0;
}