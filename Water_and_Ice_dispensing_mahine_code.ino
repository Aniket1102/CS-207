//using servo library
#include<Servo.h>

// servo variable
Servo myServo;

#define trigger 8
#define echo 4
#define Relay 7
#define servoPin 2 

float time=0;
float distance=0;
int flag =0;
 
void setup()
{
 Serial.begin(9600);

 pinMode(trigger,OUTPUT);
 pinMode(echo,INPUT);
 pinMode(Relay,OUTPUT);
 
 myServo.attach(servoPin);

}
 
void loop()
{
// function used to find distance between glass and machine
measureDistance();

Serial.println(distance);
delay(300);

if(distance<7)
 {
  digitalWrite(Relay,LOW);
  
  int reading;
  float volts;
  
  reading = analogRead(A1);
  volts = AnalogToVolts(reading);
  float celsius= volts*100-50;
  Serial.println(celsius);
  delay(100);

if (flag==0)
{
   if ((celsius>26))
   {
     myServo.write(0);
     delay(250);
     myServo.write(180); 
     delay(250); 
     myServo.write(0);
     delay(2000);

     flag=1;
   }
} 
            
 }
 else
 {
   digitalWrite(Relay,HIGH);
 }

 delay(500);
}

float  AnalogToVolts(int reading)
{
  float volts;
  volts = (reading/(1023.0 * 5.0));  //Perform conversion
  return volts;
}
void measureDistance()
{
 digitalWrite(trigger,LOW);
 delayMicroseconds(2);
 digitalWrite(trigger,HIGH);
 delayMicroseconds(10);
 digitalWrite(trigger,LOW);
 delayMicroseconds(2);
 time=pulseIn(echo,HIGH);
 
 distance=(time/2)* 0.0343;
}
