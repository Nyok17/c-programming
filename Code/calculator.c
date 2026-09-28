#include <stdio.h>

int calc(){
int a;
scanf("a:%d", &a);
int b;
scanf("b:%d", &b);

int sum = a + b;
printf("%d\n", sum);

return 0;
}

int main(){
calc();
return 0;
}
