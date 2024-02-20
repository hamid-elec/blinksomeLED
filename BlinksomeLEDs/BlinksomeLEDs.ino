// this code is an example to work with git hub abd git on the computer 

#define RedLED 6 
#define BlueLED 8

void setup() {
  
  pinMode(RedLED, OUTPUT);
  pinMode(8, OUTPUT);
}


void loop() {
  digitalWrite(RedLED, 1);  
  digitalWrite(BlueLED, 0);  
  delay(250);                      
  digitalWrite(RedLED, 0); 
  digitalWrite(BlueLED, 1);    
  delay(500);                     
}
