#include "Robot.h"


void setup()
{
  setupDistence();
  startupMotor();
  IRsetup();

  
}
void loop()
{
  loopDistence();


  IRloop();
  if (distance >= 5)
  {
    switch(IncomingByte)
    {

      case 64:
        Forward();
        break;
      case 7:
        LeftMotor();
        break;
      case 6:
        RightMotor();
        break;
      case 65:
        backward();
        break;
      case 68:
        StopMotor();
        break;  
    }
  }
  else 
  {
    backward();
  }


  
}
