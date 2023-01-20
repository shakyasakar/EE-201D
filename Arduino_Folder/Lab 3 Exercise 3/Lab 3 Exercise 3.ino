// This program prints Hello World when pin 13 is connected to 5V 
// and Its 2023 when pin 13 is connected to GND
void setup() {
  // put your setup code here, to run once:
  pinMode(13, INPUT); // setting the input as pin 13
  Serial.begin(9600); // rate at which info is transferred
}

void loop(){
// when pin 13 is connected to 5V, output is "Hello World"
if(digitalRead(13) == HIGH){ 
  Serial.println("Hello World");
} 
// when pin 13 is connected to GND, output is "Its 2023"
else{
  Serial.println("Its 2023");
} 
}


