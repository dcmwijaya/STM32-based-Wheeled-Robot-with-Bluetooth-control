#include <SoftwareSerial.h> // This library is used for serial communication
const int enable_motorA = PA1; // PA1 pin to enable motor A
const int motorA1 = PA2; // PA2 pin to rotate the right motor direction forward
const int motorA2 = PA3; // PA3 pin to rotate the right motor direction backward
const int motorB1 = PB6; // PB6 pin to rotate the left motor direction backward
const int motorB2 = PB7; // PB7 pin to rotate the left motor direction forward
const int enable_motorB = PB8; // PB8 pin to enable motor B

String cmd; // Initialize a cmd variable with string data type
SoftwareSerial SPPC(PA10, PA9); // STM32 pin initialization => RX: PA10, TX: PA9

// Methods setup
void setup(){
  Serial.begin(9600); // Initiate serial communication at baudrate 9600
  SPPC.begin(9600); // Initiate bluetooth sensor
  pinMode(enable_motorA, OUTPUT); // PA1 pin is used as an output
  pinMode(motorA1, OUTPUT); // PA2 pin is used as an output
  pinMode(motorA2, OUTPUT); // PA3 pin is used as an output
  pinMode(motorB1, OUTPUT); // PB6 pin is used as an output
  pinMode(motorB2, OUTPUT); // PB7 pin is used as an output
  pinMode(enable_motorB, OUTPUT); // PB8 pin is used as an output
}

// Methods loop
void loop(){  
  analogWrite(enable_motorA, 200); analogWrite(enable_motorB, 200); // Controlling speed (0 = off and 255 = max speed)
  while(SPPC.available()>0){ cmd = SPPC.read(); } // Bluetooth sensor readings
  if(cmd == "F"){ forward(); } // If the button whose value is "F" is pressed, the robot car will move forward
  if(cmd == "B"){ backward(); } // If the button whose value is "B" is pressed, the robot car will move backward
  if(cmd == "L"){ left(); } // If the button whose value is "L" is pressed, the robot car will turn left
  if(cmd == "R"){ right(); } // If the button whose value is "R" is pressed, the robot car will turn right
  stop(); // Normal state all motors off
}

// Methods forward
void forward(){
  digitalWrite(motorA1, HIGH); digitalWrite(motorA2, LOW); digitalWrite(motorB1, LOW); digitalWrite(motorB2, HIGH); // Command to move forward
  delay(500); // Delay time of 500 milliseconds
}

// Methods backward
void backward(){
  digitalWrite(motorA1, LOW); digitalWrite(motorA2, HIGH); digitalWrite(motorB1, HIGH); digitalWrite(motorB2, LOW); // Command to move backward
  delay(500); // Delay time of 500 milliseconds
}

// Methods left
void left(){
  digitalWrite(motorA1, HIGH); digitalWrite(motorA2, LOW); digitalWrite(motorB1, HIGH); digitalWrite(motorB2, LOW); // Command to turn left
  delay(300); // Delay time of 300 milliseconds
}

// Methods right
void right(){
  digitalWrite(motorA1, LOW); digitalWrite(motorA2, HIGH); digitalWrite(motorB1, LOW); digitalWrite(motorB2, HIGH); // Command to turn right
  delay(300); // Delay time of 300 milliseconds
}

// Methods stop
void stop(){
  digitalWrite(motorA1, LOW); digitalWrite(motorA2, LOW); digitalWrite(motorB1, LOW); digitalWrite(motorB2, LOW); // Command to stop
  cmd=""; // Command to reset
}
