const int trigger=7; 
const int echo =6;
long duration; // membuat variabel durasi dan jarak
int distanceCM; 

void setup() {  
pinMode(trigger, OUTPUT); // set pin trig menjadi OUTPUT
pinMode(echo, INPUT); // set pin echo menjadi INPUT
Serial.begin(9600); // digunakan untuk komunikasi Serial dengan komputer
} 

void loop() { 
 // program dibawah ini agar trigger memancarakan suara ultrasonic
digitalWrite(trigger, LOW); 
delayMicroseconds(2); 
digitalWrite(trigger, HIGH); 
delayMicroseconds (5); 

duration=pulseIn(echo, HIGH); // menerima suara ultrasonic
distanceCM=duration*0.0342/2; // mengubah durasi menjadi jarak (cm)
 
Serial.print(distanceCM); // menampilkan jarak pada Serial Monitor
Serial.print("cm"); 
Serial.println(); 

delay(100); 
} 
