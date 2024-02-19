// this code is an example to work with git hub abd git on the computer 

#define RedLED 6 

void setup() {
  
  pinMode(RedLED, OUTPUT);
  pinMode(8, OUTPUT);
}


void loop() {
  digitalWrite(RedLED, 1);  
  digitalWrite(8, 0);  
  delay(250);                      
  digitalWrite(RedLED, 0); 
  digitalWrite(8, 1);    
  delay(500);                     
}
