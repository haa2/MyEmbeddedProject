#include <SoftwareSerial.h>


SoftwareSerial mySerial(10, 11);

char incomingByte;
 

void setupBT()
{
  Serial.begin(9600); // opens serial port, sets data rate to 9600 bps
}
void loopBT()
{
    // send data only when you receive data:
  if (Serial.available() > 0) {
    // read the incoming byte:
    incomingByte = Serial.read();

    // say what you got:
    Serial.print("I received: ");
    Serial.println(incomingByte);
  }
}