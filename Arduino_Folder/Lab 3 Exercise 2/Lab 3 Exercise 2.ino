// This program blinks 2 LEDS alternatively
void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT); // setting pin 13 as the output
  pinMode(12, OUTPUT); // setting pin 12 as the output
  Serial.begin(9600); // rate at which info is transferred
}
void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13, HIGH); // setting the red led as high
  digitalWrite(12, LOW); // setting the blue led as low
  delay(500); // delay for 0.5 seconds
  digitalWrite(12, HIGH); // setting the blue led as high
  digitalWrite(13, LOW); // setting the red led as low
  delay(500); // delay for 0.5 seconds 
}

