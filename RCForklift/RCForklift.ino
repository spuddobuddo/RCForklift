#include <Servo.h>

int enA = 11;
int in1 = 12;
int in2 = 13;

Servo pootis;
int pos = 0;

char c;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(enA, OUTPUT);
	//pinMode(enB, OUTPUT);
	pinMode(in1, OUTPUT);
	pinMode(in2, OUTPUT);
	//pinMode(in3, OUTPUT);
	//pinMode(in4, OUTPUT);

  digitalWrite(in1, LOW);
	digitalWrite(in2, LOW);
	//digitalWrite(in3, LOW);
	//digitalWrite(in4, LOW);

  //pootis.attach(10);
}

void loop() {
  analogWrite(enA, 255);
  // digitalWrite(in1, HIGH);
  // digitalWrite(in2, LOW);
  
  if(Serial.available())
  {
    c = Serial.read();
  }
  if (c == '1')
  {
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
  }
  else if(c == '2')
  {
    digitalWrite(in1, LOW);
    digitalWrite(in2, HIGH);
  }
  else if(c == '0')
  {
    digitalWrite(in1, LOW);
    digitalWrite(in2, LOW);
  }

  // int buttonState = digitalRead(in1);
  // Serial.println();
  // delay(500);
  
//   for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
//     // in steps of 1 degree
//     pootis.write(pos);              // tell servo to go to position in variable 'pos'
//     delay(15);                       // waits 15ms for the servo to reach the position
//   }
//   for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
//     pootis.write(pos);              // tell servo to go to position in variable 'pos'
//     delay(15);                       // waits 15ms for the servo to reach the position
//   }

//   // put your main code here, to run repeatedly:
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
	
// 	// Now change motor directions
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
