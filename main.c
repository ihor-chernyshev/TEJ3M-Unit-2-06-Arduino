// Created by Ihor Chernyshev
// Created on March 2025
// This program controls a distance sensor

const int TRIG_PIN = 9;
const int ECHO_PIN = 10;
float duration;
float distance;

void setup() {  
    pinMode(TRIG_PIN, OUTPUT);
    pinMode(ECHO_PIN, INPUT);
    Serial.begin(9600); 
}

void loop() {  
    digitalWrite(TRIG_PIN, LOW);
    delayMicroseconds(2);
    digitalWrite(TRIG_PIN, HIGH);
    delayMicroseconds(10);
    digitalWrite(TRIG_PIN, LOW);
    duration = pulseIn(ECHO_PIN, HIGH); 
    distance = (duration*.0343)/2;
    Serial.print("Distance: ");  
    Serial.println(distance);  
    delay(100);  
}
