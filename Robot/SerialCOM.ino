
#include <IRremote.h>

#define IR_RECEIVE_PIN 12
int IncomingByte ; 
void IRsetup() {
  Serial.begin(9600);
  IrReceiver.begin(IR_RECEIVE_PIN);
}

void IRloop() {
  if (IrReceiver.decode()) {
    IrReceiver.resume();
    IncomingByte = (IrReceiver.decodedIRData.command);

  }
}