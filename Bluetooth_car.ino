#include <SoftwareSerial.h>

SoftwareSerial BTserial(0, 1); // RX | TX

#define IN1_PIN 2
#define IN2_PIN 3
#define IN3_PIN 4
#define IN4_PIN 5
#define ENA_PIN 11
#define ENB_PIN 10

#define CAR_SPEED 150

void setup() {
  // Initialize serial communication with Bluetooth module
  BTserial.begin(9600);
  Serial.begin(9600);

  // Configure motor pins as outputs
  pinMode(IN1_PIN, OUTPUT);
  pinMode(IN2_PIN, OUTPUT);
  pinMode(IN3_PIN, OUTPUT);
  pinMode(IN4_PIN, OUTPUT);
  pinMode(ENA_PIN, OUTPUT);
  pinMode(ENB_PIN, OUTPUT);

  // Set initial motor speeds to zero
  analogWrite(ENA_PIN, 0);
  analogWrite(ENB_PIN, 0);
}

void loop() {
  // Check if there is data available from the Bluetooth module
  if (BTserial.available()) {
    char cmd = BTserial.read();

    // Check which command was received and take appropriate action
    switch (cmd) {
      case 'F': // Move forward
        Serial.println("Moving Forward");
        digitalWrite(IN1_PIN, HIGH);
        digitalWrite(IN2_PIN, LOW);
        digitalWrite(IN3_PIN, HIGH);
        digitalWrite(IN4_PIN, LOW);
        analogWrite(ENA_PIN, CAR_SPEED);
        analogWrite(ENB_PIN, CAR_SPEED);
        break;
      case 'G': // Move backward
        Serial.println("Moving Backward");
        digitalWrite(IN1_PIN, LOW);
        digitalWrite(IN2_PIN, HIGH);
        digitalWrite(IN3_PIN, LOW);
        digitalWrite(IN4_PIN, HIGH);
        analogWrite(ENA_PIN, CAR_SPEED);
        analogWrite(ENB_PIN, CAR_SPEED);
        break;
      case 'L': // Turn left
        Serial.println("Turning Left");
        digitalWrite(IN1_PIN, LOW);
        digitalWrite(IN2_PIN, HIGH);
        digitalWrite(IN3_PIN, HIGH);
        digitalWrite(IN4_PIN, LOW);
        analogWrite(ENA_PIN, CAR_SPEED);
        analogWrite(ENB_PIN, CAR_SPEED);
        break;
      case 'R': // Turn right
        Serial.println("Turning Right");
        digitalWrite(IN1_PIN, HIGH);
        digitalWrite(IN2_PIN, LOW);
        digitalWrite(IN3_PIN, LOW);
        digitalWrite(IN4_PIN, HIGH);
        analogWrite(ENA_PIN, CAR_SPEED);
        analogWrite(ENB_PIN, CAR_SPEED);
        break;
      case 'S': // Stop
        Serial.println("Stopping");
        digitalWrite(IN1_PIN, LOW);
        digitalWrite(IN2_PIN, LOW);
        digitalWrite(IN3_PIN, LOW);
        digitalWrite(IN4_PIN, LOW);
        analogWrite(ENA_PIN, 0);
        analogWrite(ENB_PIN, 0);
        break;
      default:
        break;
    }
  }
}
