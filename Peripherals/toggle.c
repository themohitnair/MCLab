#include<lpc214x.h>
void delay(int n) {
	int i;
	for(i = 0; i < n; i++);
}

int main() {
	IODIR0 = 0x00000001;
	while(1) {
		IOSET0 = 0x00000001;
		delay(50000);
		IOCLR0 = 0x00000001;
		delay(50000);
	}
}
