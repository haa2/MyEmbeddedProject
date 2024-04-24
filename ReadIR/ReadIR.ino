
#include <IRremote.h>

#define IR_RECEIVE_PIN 12
int IncomingByteIR; 
void setup() {
  Serial.begin(9600);
  IrReceiver.begin(IR_RECEIVE_PIN);
}

void loop() {

  if (IrReceiver.decode())
  {
    IrReceiver.resume();
    Serial.println(IrReceiver.decodedIRData.command);

  }
}
