#include <SoftwareSerial.h>

SoftwareSerial mySerial(2, 3);

int gasValue = A0; // Smoke/gas sensor connected to analog pin A0
int data = 0;
int Red = 6; // Red LED for alarm
int Green = 7; // Green LED for normal state

void setup() {
  randomSeed(analogRead(0));
  mySerial.begin(9600); // Setting the baud rate for GSM Module
  Serial.begin(9600); // Setting the baud rate for Serial Monitor
  pinMode(gasValue, INPUT);
  pinMode(Red, OUTPUT);
  pinMode(Green, OUTPUT);
  
  Serial.println("Gas Leakage Detector Initialized");
  delay(1000);
}

void loop() {
  data = analogRead(gasValue);

  Serial.print("Gas Level: ");
  Serial.println(data);
  
  delay(1000); // Read gas level every second

  if (data > 130) { // Threshold for gas detection
    SendMessage();
    Serial.println("Gas detected! Sending SMS...");
    
    digitalWrite(Red, HIGH); // Turn on Red LED
    digitalWrite(Green, LOW); // Turn off Green LED
    delay(1000); // Keep the alarm on for a second
  } else {
    Serial.println("Gas Level Normal");
    
    digitalWrite(Red, LOW); // Turn off Red LED
    digitalWrite(Green, HIGH); // Turn on Green LED
    delay(1000);
  }
}

void SendMessage() {
  Serial.println("Sending SMS...");
  
  mySerial.println("AT+CMGF=1"); // Sets the GSM Module to Text Mode
  delay(1000);
  
  mySerial.println("AT+CMGS=\"+919585863235xx\"\r"); // Replace with your mobile number
  delay(1000);
  
  mySerial.println("Gas detected! Please open windows and check your gas cylinder."); // SMS text
  delay(100);
  
  mySerial.println((char)26); // ASCII code of CTRL+Z
  delay(1000);
}
