#include <Servo.h>

Servo servo01;
Servo servo02;
Servo servo03;
Servo servo04;
Servo servo05;
Servo servo06;
   

int IN1 = 2;
int IN2 = 3;
int IN3 = 4;
int IN4 = 5;
int IN5 = 6;
int IN6 = 7;





int servo1Pos, servo2Pos, servo3Pos, servo4Pos, servo5Pos, servo6Pos; // current position
int servo1PPos, servo2PPos, servo3PPos, servo4PPos, servo5PPos, servo6PPos; // previous position
int servo01SP[50], servo02SP[50], servo03SP[50], servo04SP[50], servo05SP[50], servo06SP[50]; // for storing positions/steps
int speedDelay = 20;
int index = 0;
int dataIn;
int m = 0;

void setup() {
  // Set initial seed values for the steppers
  pinMode(IN1,OUTPUT);
  pinMode(IN2,OUTPUT);
  pinMode(IN3,OUTPUT);
  pinMode(IN4,OUTPUT);
  pinMode(IN5,OUTPUT);
  pinMode(IN6,OUTPUT);
  //pinMode(IN7,OUTPUT);
  //pinMode(IN8,OUTPUT);
  servo01.attach(8);
  servo02.attach(9);
  servo03.attach(10);
  servo04.attach(11);
  servo05.attach(12);
  servo06.attach(13);
  Serial.begin(9600); // Default baud rate of the Bluetooth module
  

  // Move robot arm to initial position
  servo1PPos = 90;
  servo01.write(servo1PPos);
  servo2PPos = 100;
  servo02.write(servo2PPos);
  servo3PPos = 120;
  servo03.write(servo3PPos);
  servo4PPos = 95;
  servo04.write(servo4PPos);
  servo5PPos = 60;
  servo05.write(servo5PPos);
  servo6PPos = 110;
  servo06.write(servo6PPos);
}

void loop() {
  // Check for incoming data
  if (Serial.available() > 0) {
    dataIn = Serial.read();  // Read the data

    if (dataIn == 0) {
      m = 0;
    }
    if (dataIn == 1) {
      m = 1;
    }
    if (dataIn == 2) {
      m = 2;
    }
    if (dataIn == 3) {
      m = 3;
    }
    if (dataIn == 4) {
      m = 4;
    }
    if (dataIn == 5) {
      m = 5;
    }
    if (dataIn == 6) {
      m = 6;
    }
    if (dataIn == 7) {
      m = 7;
    }
    if (dataIn == 8) {
      m = 8;
    }
    if (dataIn == 9) {
      m = 9;
    }
    if (dataIn == 10) {
      m = 10;
    }
    if (dataIn == 11) {
      m = 11;
    }
    if (dataIn == 12) {
      m = 12;
    }
    if (dataIn == 14) {
      m = 14;
    }
    if (dataIn == 16) {
      m = 16;
    }
    if (dataIn == 17) {
      m = 17;
    }
    if (dataIn == 18) {
      m = 18;
    }
    if (dataIn == 19) {
      m = 19;
    }
    if (dataIn == 20) {
      m = 20;
    }
    if (dataIn == 21) {
      m = 21;
    }
    if (dataIn == 22) {
      m = 22;
    }
    if (dataIn == 23) {
      m = 23;
    }
    if (dataIn == 24) {
      m = 24;
    }
    if (dataIn == 25) {
      m = 25;
    }
    if (dataIn == 26) {
      m = 26;
    }
    if (dataIn == 27) {
      m = 27;
    }

    // Move the Mecanum wheels platform
    if (m == 7) {
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,HIGH);
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,HIGH);
  digitalWrite(IN5,LOW);
  digitalWrite(IN6,HIGH);
  //digitalWrite(IN7,LOW);
  //digitalWrite(IN8,HIGH);//moveSidewaysLeft();
    }
    if (m == 2) {
  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,HIGH);
  digitalWrite(IN4,LOW);
  digitalWrite(IN5,HIGH);
  digitalWrite(IN6,LOW);
  //digitalWrite(IN7,HIGH);
  //digitalWrite(IN8,LOW);//moveSidewaysRight();
    }
    if (m == 4) {
  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,HIGH);
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,LOW);
  digitalWrite(IN5,HIGH);
  digitalWrite(IN6,HIGH);
  //digitalWrite(IN7,HIGH);
  //digitalWrite(IN8,LOW);
    }
    if (m == 5) {
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,HIGH);
  digitalWrite(IN4,HIGH);
  digitalWrite(IN5,LOW);
  digitalWrite(IN6,HIGH);
  //digitalWrite(IN7,LOW);
  //digitalWrite(IN8,HIGH);
    }
    if (m == 3) {
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,HIGH);
  digitalWrite(IN4,LOW);
  digitalWrite(IN5,HIGH);
  digitalWrite(IN6,LOW);
  //digitalWrite(IN7,LOW);
  //digitalWrite(IN8,LOW);//moveRightForward();
    }
    if (m == 1) {
  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,LOW);
  digitalWrite(IN5,LOW);
  digitalWrite(IN6,LOW);
  //digitalWrite(IN7,HIGH);
  //digitalWrite(IN8,LOW);//moveLeftForward();
    }
    if (m == 8) {
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,HIGH);
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,LOW);
  digitalWrite(IN5,LOW);
  digitalWrite(IN6,LOW);
  //digitalWrite(IN7,LOW);
  //digitalWrite(IN8,HIGH);//moveRightBackward();
    }
    if (m == 6) {
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,HIGH);
  digitalWrite(IN5,LOW);
  digitalWrite(IN6,HIGH);
  //digitalWrite(IN7,LOW);
  //digitalWrite(IN8,LOW);//moveLeftBackward();
    }
    if (m == 9) {
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,HIGH);
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,HIGH);
  digitalWrite(IN5,HIGH);
  digitalWrite(IN6,LOW);
  //digitalWrite(IN7,HIGH);
  //digitalWrite(IN8,LOW);//rotateLeft();
    }
    if (m == 10) {
  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,HIGH);
  digitalWrite(IN4,LOW);
  digitalWrite(IN5,LOW);
  digitalWrite(IN6,HIGH);
  //digitalWrite(IN7,LOW);
  //digitalWrite(IN8,HIGH);//rotateRight();
    }

    if (m == 0) {
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,LOW);
  digitalWrite(IN5,LOW);
  digitalWrite(IN6,LOW);
  //digitalWrite(IN7,LOW);
  //digitalWrite(IN8,LOW);
    }

    // Mecanum wheels speed
    

    // Move robot arm
    // Move servo 1 in positive direction
    while (m == 16) {
      if (Serial.available() > 0) {
        m = Serial.read();
      }
      servo01.write(servo1PPos);
      servo1PPos++;
      delay(speedDelay);
    }
    // Move servo 1 in negative direction
    while (m == 17) {
      if (Serial.available() > 0) {
        m = Serial.read();
      }
      servo01.write(servo1PPos);
      servo1PPos--;
      delay(speedDelay);
    }
    // Move servo 2
    while (m == 19) {
      if (Serial.available() > 0) {
        m = Serial.read();
      }
      servo02.write(servo2PPos);
      servo2PPos++;
      delay(speedDelay);
    }
    while (m == 18) {
      if (Serial.available() > 0) {
        m = Serial.read();
      }
      servo02.write(servo2PPos);
      servo2PPos--;
      delay(speedDelay);
    }
    // Move servo 3
    while (m == 20) {
      if (Serial.available() > 0) {
        m = Serial.read();
      }
      servo03.write(servo3PPos);
      servo3PPos++;
      delay(speedDelay);
    }
    while (m == 21) {
      if (Serial.available() > 0) {
        m = Serial.read();
      }
      servo03.write(servo3PPos);
      servo3PPos--;
      delay(speedDelay);
    }
    // Move servo 4
    while (m == 23) {
      if (Serial.available() > 0) {
        m = Serial.read();
      }
      servo04.write(servo4PPos);
      servo4PPos++;
      delay(speedDelay);
    }
    while (m == 22) {
      if (Serial.available() > 0) {
        m = Serial.read();
      }
      servo04.write(servo4PPos);
      servo4PPos--;
      delay(speedDelay);
    }
    // Move servo 5
    while (m == 25) {
      if (Serial.available() > 0) {
        m = Serial.read();
      }
      servo05.write(servo5PPos);
      servo5PPos++;
      delay(speedDelay);
    }
    while (m == 24) {
      if (Serial.available() > 0) {
        m = Serial.read();
      }
      servo05.write(servo5PPos);
      servo5PPos--;
      delay(speedDelay);
    }
    // Move servo 6
    while (m == 26) {
      if (Serial.available() > 0) {
        m = Serial.read();
      }
      servo06.write(servo6PPos);
      servo6PPos++;
      delay(speedDelay);
    }
    while (m == 27) {
      if (Serial.available() > 0) {
        m = Serial.read();
      }
      servo06.write(servo6PPos);
      servo6PPos--;
      delay(speedDelay);
    }

    

    // If button "SAVE" is pressed
   
      
                     // Increase the array index
      m = 0;
    }

    // If button "RUN" is pressed
    
  }
  

  // Monitor the battery voltage
  
  

void moveForward() {
 
}
void moveBackward() {
  
}
void moveSidewaysRight() {
  
}
void moveSidewaysLeft() {
 
}
void rotateLeft() {
  
}
void rotateRight() {
  
}
void moveRightForward() {
  
}
void moveRightBackward() {
 
}
void moveLeftForward() {
  
}
void moveLeftBackward() {
  
}
void stopMoving() {
  
}

// Automatic mode custom function - run the saved steps
void runSteps() {
  while (dataIn != 13) {   // Run the steps over and over again until "RESET" button is pressed
    for (int i = 0; i <= index - 2; i++) {  // Run through all steps(index)
      if (Serial.available() > 0) {      // Check for incomding data
        dataIn = Serial.read();
        if ( dataIn == 15) {           // If button "PAUSE" is pressed
          while (dataIn != 14) {         // Wait until "RUN" is pressed again
            if (Serial.available() > 0) {
              dataIn = Serial.read();
              if ( dataIn == 13) {
                break;
              }
            }
          }
        }
        // If speed slider is changed
        if (dataIn > 100 & dataIn < 150) {
          speedDelay = dataIn / 10; // Change servo speed (delay time)
        }
        // Mecanum wheels speed
        if (dataIn > 30 & dataIn < 100) {
          //wheelSpeed = dataIn * 10;
          dataIn = 14;
        }
      }
      

      
      // Servo 1
      if (servo01SP[i] == servo01SP[i + 1]) {
      }
      if (servo01SP[i] > servo01SP[i + 1]) {
        for ( int j = servo01SP[i]; j >= servo01SP[i + 1]; j--) {
          servo01.write(j);
          delay(speedDelay);
        }
      }
      if (servo01SP[i] < servo01SP[i + 1]) {
        for ( int j = servo01SP[i]; j <= servo01SP[i + 1]; j++) {
          servo01.write(j);
          delay(speedDelay);
        }
      }

      // Servo 2
      if (servo02SP[i] == servo02SP[i + 1]) {
      }
      if (servo02SP[i] > servo02SP[i + 1]) {
        for ( int j = servo02SP[i]; j >= servo02SP[i + 1]; j--) {
          servo02.write(j);
          delay(speedDelay);
        }
      }
      if (servo02SP[i] < servo02SP[i + 1]) {
        for ( int j = servo02SP[i]; j <= servo02SP[i + 1]; j++) {
          servo02.write(j);
          delay(speedDelay);
        }
      }

      // Servo 3
      if (servo03SP[i] == servo03SP[i + 1]) {
      }
      if (servo03SP[i] > servo03SP[i + 1]) {
        for ( int j = servo03SP[i]; j >= servo03SP[i + 1]; j--) {
          servo03.write(j);
          delay(speedDelay);
        }
      }
      if (servo03SP[i] < servo03SP[i + 1]) {
        for ( int j = servo03SP[i]; j <= servo03SP[i + 1]; j++) {
          servo03.write(j);
          delay(speedDelay);
        }
      }

      // Servo 4
      if (servo04SP[i] == servo04SP[i + 1]) {
      }
      if (servo04SP[i] > servo04SP[i + 1]) {
        for ( int j = servo04SP[i]; j >= servo04SP[i + 1]; j--) {
          servo04.write(j);
          delay(speedDelay);
        }
      }
      if (servo04SP[i] < servo04SP[i + 1]) {
        for ( int j = servo04SP[i]; j <= servo04SP[i + 1]; j++) {
          servo04.write(j);
          delay(speedDelay);
        }
      }

      // Servo 5
      if (servo05SP[i] == servo05SP[i + 1]) {
      }
      if (servo05SP[i] > servo05SP[i + 1]) {
        for ( int j = servo05SP[i]; j >= servo05SP[i + 1]; j--) {
          servo05.write(j);
          delay(speedDelay);
        }
      }
      if (servo05SP[i] < servo05SP[i + 1]) {
        for ( int j = servo05SP[i]; j <= servo05SP[i + 1]; j++) {
          servo05.write(j);
          delay(speedDelay);
        }
      }

      // Servo 6
      if (servo06SP[i] == servo06SP[i + 1]) {
      }
      if (servo06SP[i] > servo06SP[i + 1]) {
        for ( int j = servo06SP[i]; j >= servo06SP[i + 1]; j--) {
          servo06.write(j);
          delay(speedDelay);
        }
      }
      if (servo06SP[i] < servo06SP[i + 1]) {
        for ( int j = servo06SP[i]; j <= servo06SP[i + 1]; j++) {
          servo06.write(j);
          delay(speedDelay);
        }
      }
    }
  }
}
