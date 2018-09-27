//This code should output distance to the serial port.

/*
* Ultrasonic Sensor HC-SR04 and Arduino Tutorial
*
* by Dejan Nedelkovski,
* www.HowToMechatronics.com
*
*/

// defines pins numbers
const int trigPin = 2;
const int echoPin = 3; 

const int ledPin1 = 8;
const int ledPin2 = 9;
const int ledPin3 = 10;
const int ledPin4 = 11;
const int ledPin5 = 12;
const int ledPin6 = 13;

// defines variables
long duration;
int distance;

void setup() {
pinMode(ledPin1, OUTPUT);
pinMode(ledPin2, OUTPUT);
pinMode(ledPin3, OUTPUT);
pinMode(ledPin4, OUTPUT);
pinMode(ledPin5, OUTPUT);
pinMode(ledPin6, OUTPUT);
pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
pinMode(echoPin, INPUT); // Sets the echoPin as an Input
Serial.begin(9600); // Starts the serial communication
}

void loop() {
 // int distance = analogRead(0);
  distance = map(distance, 0, 100, 7, 13);
  //analogWrite(9, distance);

// Clears the trigPin
digitalWrite(trigPin, LOW);
delayMicroseconds(2);

// Sets the trigPin on HIGH state for 10 micro seconds
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
digitalWrite (distance, HIGH);

if(distance == 8){
  digitalWrite (ledPin1, HIGH);
  digitalWrite (ledPin2, LOW);
  digitalWrite (ledPin3, LOW);
  digitalWrite (ledPin4, LOW);
  digitalWrite (ledPin5, LOW);
  digitalWrite (ledPin6, LOW);
}

if(distance == 9){
  digitalWrite (ledPin1, LOW);
  digitalWrite (ledPin2, HIGH);
  digitalWrite (ledPin3, LOW);
  digitalWrite (ledPin4, LOW);
  digitalWrite (ledPin5, LOW);
  digitalWrite (ledPin6, LOW);
}

if(distance == 10){
  digitalWrite (ledPin1, LOW);
  digitalWrite (ledPin2, LOW);
  digitalWrite (ledPin3, HIGH);
  digitalWrite (ledPin4, LOW);
  digitalWrite (ledPin5, LOW);
  digitalWrite (ledPin6, LOW);
}

if(distance == 11){
  digitalWrite (ledPin1, LOW);
  digitalWrite (ledPin2, LOW);
  digitalWrite (ledPin3, LOW);
  digitalWrite (ledPin4, HIGH);
  digitalWrite (ledPin5, LOW);
  digitalWrite (ledPin6, LOW);
}

if(distance == 12){
  digitalWrite (ledPin1, LOW);
  digitalWrite (ledPin2, LOW);
  digitalWrite (ledPin3, LOW);
  digitalWrite (ledPin4, LOW);
  digitalWrite (ledPin5, HIGH);
  digitalWrite (ledPin6, LOW);
}

if(distance == 13){
  digitalWrite (ledPin1, LOW);
  digitalWrite (ledPin2, LOW);
  digitalWrite (ledPin3, LOW);
  digitalWrite (ledPin4, LOW);
  digitalWrite (ledPin5, LOW);
  digitalWrite (ledPin6, HIGH);
}
// Reads the echoPin, returns the sound wave travel time in microseconds
duration = pulseIn(echoPin, HIGH);

// Calculating the distance
distance= duration*0.034/2;

// Prints the distance on the Serial Monitor
Serial.print("Distance: ");
Serial.println(distance);
}
