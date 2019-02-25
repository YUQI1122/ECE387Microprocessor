int LED = 4;

 void setup() {
 
  pinMode(LED,OUTPUT);
}

void loop() {
 

  for (int i=0; i <= 2; i++){
    digitalWrite(LED,HIGH);
    delay(200);
    digitalWrite(LED,LOW);
    delay(200);
  }
  delay(400);


 

  for (int i=0; i <= 2; i++){
    digitalWrite(LED,HIGH);
    delay(800);
    digitalWrite(LED,LOW);
    delay(200);
  }
  delay(400);


    for (int i=0; i <= 2; i++){
    digitalWrite(LED,HIGH);
    delay(200);
    digitalWrite(LED,LOW);
    delay(200);
  }
  delay(2000);

}
