#include <Servo.h>

int enA = 11;
int in1 = 12;
int in2 = 13;

int enB = 8;
int in3 = 10;
int in4 = 9;

Servo pootis;
int pos = 0;

char c;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(enA, OUTPUT);
	pinMode(enB, OUTPUT);

	pinMode(in1, OUTPUT);
	pinMode(in2, OUTPUT);

	pinMode(in3, OUTPUT);
	pinMode(in4, OUTPUT);

  digitalWrite(in1, LOW);
	digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
	digitalWrite(in4, LOW);

  pootis.attach(7);
}

void loop() {
  analogWrite(enA, 255); //enables motors
  analogWrite(enB, 225);
  
  if(Serial.available()) //hc05 commands
  {
    c = Serial.read();
  }
  if (c == '1') //motor forward
  {
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);
  }
  else if(c == '2') //motor backward
  {
    digitalWrite(in1, LOW);
    digitalWrite(in2, HIGH);
    digitalWrite(in3, LOW);
    digitalWrite(in4, HIGH);
  }
  else if(c == '0') //motor off
  {
    digitalWrite(in1, LOW);
    digitalWrite(in2, LOW);
    digitalWrite(in3, LOW);
    digitalWrite(in4, LOW);
  }
  else if(c == '3') //servo turn right
  {
    pootis.write(180);
  }
  else if(c == '4') //servo turn left
  {
    pootis.write(0);
  }
  else if(c == '5') //servo turn back to neutral
  {
    pootis.write(90);
  }

    // Testing servo:
//   for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
//     // in steps of 1 degree
//     pootis.write(pos);              // tell servo to go to position in variable 'pos'
//     delay(15);                       // waits 15ms for the servo to reach the position
//   }
//   for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
//     pootis.write(pos);              // tell servo to go to position in variable 'pos'
//     delay(15);                       // waits 15ms for the servo to reach the position
//   }

//  // Testing motors:
//  // Set motors to maximum speed
// 	// For PWM maximum possible values are 0 to 255
// 	analogWrite(enA, 255);
// 	//analogWrite(enB, 255);

// 	// Turn on motor A & B
// 	digitalWrite(in1, HIGH);
// 	digitalWrite(in2, LOW);
// 	// digitalWrite(in3, HIGH);
// 	// digitalWrite(in4, LOW);
// 	delay(2000);
	
// 	//Change motor directions
// 	digitalWrite(in1, LOW);
// 	digitalWrite(in2, HIGH);
// 	// digitalWrite(in3, LOW);
// 	// digitalWrite(in4, HIGH);
// 	delay(2000);
	
// 	// Turn off motors
// 	digitalWrite(in1, LOW);
// 	digitalWrite(in2, LOW);
// 	//digitalWrite(in3, LOW);
// 	// digitalWrite(in4, LOW);
}
