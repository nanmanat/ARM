/*NOTE: Four Servos of the Robotic Arm are connected to 4 PWM Pins of Arduino 
and these 4 servos are named a, b, c and d. 
If you want to control servo a, then type "90a/", 
where "90" is the PWM value (range is 0 - 255), 
"a" means servo a and "/" is string parse delimiter. 
Some other examples: 100a/ or 120b/ or 40c/ or 25d/
*/

String readString;
int x=90, y=90, z=90, p=90; 
#include <Servo.h> 
Servo myservoa, myservob, myservoc, myservod;

int command = 1;

void setup() 
{
  Serial.begin(9600);


  myservoa.attach(3); 
  myservob.attach(5); 
  myservoc.attach(6);
  myservod.attach(9); 
  myservoa.write(x);
  myservob.write(y);
  myservoc.write(z);
  myservod.write(p);
}

void loop() 
{
 if (command == 1){
   first_row();
 } 
}

void first_row(){
  if (180 > x)
  {
    for (int i = x; i < 180; i++)
      {
        myservoa.write(i);
        delay(10);
      }
    x = 180;
  }
  else if (180 < x)
  {
    for (int i = x; i < 180; i--)
      {
        myservoa.write(i);
        delay(10);
      }
    x = 180;
  }
  
  if (180 > y)
  {
    for (int i = y; i < 180; i++)
      {
        myservoa.write(i);
        delay(10);
      }
    y = 180;
  }
  else if (180 < y)
  {
    for (int i = y; i < 180; i--)
      {
        myservoa.write(i);
        delay(10);
      }
    y = 180;
  }

  if (180 > z)
  {
    for (int i = z; i < 180; i++)
      {
        myservoa.write(i);
        delay(10);
      }
    z = 180;
  }
  else if (180 < z)
  {
    for (int i = z; i < 180; i--)
      {
        myservoa.write(i);
        delay(10);
      }
    z = 180;
  }

  if (180 > p)
  {
    for (int i = p; i < 180; i++)
      {
        myservoa.write(i);
        delay(10);
      }
    p = 180;
  }
  else if (180 < p)
  {
    for (int i = p; i < 180; i--)
      {
        myservoa.write(i);
        delay(10);
      }
    p = 180;
  }
}