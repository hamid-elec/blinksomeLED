// this code is an example to work with git hub abd git on the computer 

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
