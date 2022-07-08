#include <serial_connect.hpp>
#include <unistd.h>

int main(int argc_, char *argv_[]){
	uint8_t buf1[6] = { 6, 5, 3, 231 , 0, 0 };
	uint8_t buf2[6] = { 5, 4, 3, 231 , 0, 0 };

	SerialConnect serial;

	serial.setSerial("/dev/ttyACM0", B115200);
	serial.openSerial();

	serial.writeSerial(buf1, 6);
	usleep(10000);
	serial.writeSerial(buf2, 6);

	serial.closeSerial();

	return 0;
}
