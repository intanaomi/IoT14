const int trigger=7; 
const int echo =6;
long duration;
int distanceCM; 

void setup() { 
 // put your setup code here, to run once: 
pinMode(trigger, OUTPUT); 
pinMode(echo, INPUT); 
Serial.begin(9600);
} 

void loop() { 
 // put your main code here, to run repeatedly: 
digitalWrite(trigger, LOW); 
delayMicroseconds(2); 
digitalWrite(trigger, HIGH); 
delayMicroseconds (5); 

duration=pulseIn(echo, HIGH); 
distanceCM=duration*0.0342/2;
 
Serial.print(distanceCM); 
Serial.print("cm"); 
Serial.println(); 

delay(100); 
} 
