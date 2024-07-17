#include<lpc214x.h>
void wait() {
	T0TCR = 1;
	while(!(T0TC == T0MR0));
}

int main() {
	T0MR0 = 0x00000100;
	T0MCR = 0x02;
	while(1) {
		IODIR0 = 0xFFFFFFFF;
		IOPIN0 = ~IOPIN0;
		wait();
	}
}
