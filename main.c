#include <stdio.h>

typedef struct key_value_pair
{
    char key[255];
    void *value;
    int type;
} KeyValuePair;

int main()
{
    puts("Hello World!");
    return 0;
}