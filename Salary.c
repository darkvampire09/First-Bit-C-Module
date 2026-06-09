#include<stdio.h>
int main() { int ta,
da,
hra,
bs = 4000,
total;
if(bs <= 5000) { da = bs * 0.10;
ta = bs * 0.20;
hra = bs * 0.25;
total = bs + ta + da + hra;
printf("the Total salary of a person is %d", total);
}
else { da = bs * 0.15;
ta = bs * 0.25;
hra = bs * 0.30;
total = bs + ta + da + hra;
printf("the Total salary of a person is %d", total);
} return 0;
}