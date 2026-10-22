#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint32_t value = 1337;
	unsigned int *ptr = &value;
    unsigned char *p = (unsigned char *)ptr;

    printf("&value = %p\n", (void *)ptr);

    for (size_t i = 0; i < sizeof(value); i++) {
        printf("p[%zu] : address = %p, value = 0x%02x\n",
               i,
               (void *)&p[i],
               (unsigned int)p[i]);
    }

    return 0;
}
