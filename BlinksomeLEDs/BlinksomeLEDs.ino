#define RedLED 6 

void setup() {
  
  pinMode(RedLED, OUTPUT);
}


void loop() {
  digitalWrite(RedLED, 1);  
  delay(250);                      
  digitalWrite(RedLED, 0);   
  delay(500);                     
}
