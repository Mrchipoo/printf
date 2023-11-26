#include "ft_printf.h"
#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
int    main(void)
{
    int count1;
    count1 = printf("im %d %c %s in %x\n",19,'a',"live",63);
    printf("printf = %d\n",count1);
    count1 = ft_printf("im %d %c %s in %x\n",19,'a',"live",63);
    printf("mine = %d\n",count1);
    return 0;
}
