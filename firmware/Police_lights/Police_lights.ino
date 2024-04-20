byte LED; 
byte counter = 0; 
int value = LOW; 
long previousMillis = 0; 
long interval = 60; 

void setup() { 
  pinMode(4, OUTPUT); 
  pinMode(7, OUTPUT); 
} 

void loop() { 
  if (counter < 6) 
    LED = 4; 
  else 
    LED = 7; 
  if (millis() - previousMillis > interval) { 
    previousMillis = millis(); 
    if (value == LOW) 
      value = HIGH; 
    else 
      value = LOW; 
    digitalWrite(LED, value); 
    counter ++; 
    if (counter == 12) 
      counter = 0; 
  } 
} 
