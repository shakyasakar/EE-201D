// This exercise is the "Hello World" equivalent for Arduino
// The program makes the arduino's inbuilt LED blink 
void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT); //setting pin 13 as the output
  Serial.begin(9600); //rate at which info is transferred
}
void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13, HIGH); //when led value is HIGH
  delay(1000);
  digitalWrite(13, LOW); //when led value is LOW
  delay(1000);
  Serial.println(digitalRead(13));
}
