/* Sweep
 by BARRAGAN <http://barraganstudio.com>
 This example code is in the public domain.

 modified 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Sweepu
*/

#include <Servo.h>

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position
int max = 180;
int max_delay = 0;

void setup() {
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
}

// void loop (){
//   myservo.write(pos);
// }

void loop() {
  for (pos = 0; pos <= max; pos += 6) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    pos == 180 ? delay(0):delay(1000);                       // waits 15ms for the servo to reach the position
  }
  delay(max_delay);
  for (pos = max; pos >= 0; pos -= 6) { // goes from 180 degrees to 0 degrees
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    pos == 0 ? delay(0):delay(1000);                       // waits 15ms for the servo to reach the position
  }
  delay(max_delay);
}

