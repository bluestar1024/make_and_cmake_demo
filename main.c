#include <stdio.h>
#include "main.h"
#include "inc/fplus.h"
#include "inc/fsub.h"
#include "inc/fmul.h"
#include "inc/fdivi.h"
#include "inc/fsqu.h"
#include "inc/fcb.h"
int main(void)
{
    printf("hello world!\n");
    printf("%d + %d = %d\n",x.a,x.b,plus(x.a,x.b));
    printf("%d - %d = %d\n",x.a,x.b,sub(x.a,x.b));
    printf("%d * %d = %d\n",x.a,x.b,mul(x.a,x.b));
    printf("%d / %d = %d\n",x.a,x.b,divi(x.a,x.b));
    printf("%d square = %d\n",x.a,square(x.a));
    printf("%d cube = %d\n",x.a,cube(x.a));
    return 0;
}