/*
=====================================================================
 Project Title  : Real-Time Gas Sensing and Servo-Based Mitigation
 Institution    : Sri Venkateswara College of Engineering
 Degree         : B.E Mechanical Engineering
 Course         : ME22409 - Design Thinking

 Description:
 This system monitors LPG gas using an MQ-6 sensor. When gas is 
 detected, it activates a buzzer and closes the gas valve using 
 a servo motor. System status is displayed on a 16x2 LCD.

=====================================================================
*/

#include <Wire.h>               
#include <LiquidCrystal_I2C.h>  
#include <Servo.h>              

// Initialize components
Servo myservo;                  
LiquidCrystal_I2C lcd(0x27, 16, 2);  

// Pin definitions
const int buttonPin = A0;       
const int ledPin = 2;           
const int buzzer = 13;          

// Global variable
int buttonState = 0;            

// ================= SETUP =================
void setup() {

  myservo.attach(9);            

  pinMode(ledPin, OUTPUT); 
  pinMode(buttonPin, INPUT); 
  pinMode(buzzer, OUTPUT); 

  // Initial state
  myservo.write(75);            
  delay(15);                    
  digitalWrite(buzzer, LOW);    
  digitalWrite(ledPin, HIGH);   

  // LCD initialization
  lcd.init(); 
  lcd.backlight();              
  lcd.clear(); 

  lcd.setCursor(0, 0); 
  lcd.print("Kitchen Safety");  

  lcd.setCursor(0, 1); 
  lcd.print("  Monitoring  "); 

  delay(2000);                  
}

// ================= LOOP =================
void loop() {

  // Read gas sensor
  buttonState = digitalRead(buttonPin); 

  // GAS DETECTED
  if (buttonState == LOW) {

    lcd.clear(); 
    lcd.setCursor(0, 0); 
    lcd.print("Gas detected");    

    delay(500);                   

    digitalWrite(ledPin, LOW);    
    digitalWrite(buzzer, HIGH);   

    myservo.write(0);             
    delay(15);                    
  }  

  // NORMAL CONDITION
  else {

    lcd.clear(); 
    lcd.setCursor(0, 0); 
    lcd.print("Normal");          

    delay(500);                   

    digitalWrite(ledPin, HIGH);   
    digitalWrite(buzzer, LOW);    

    myservo.write(75);            
    delay(15);                    
  } 
}
