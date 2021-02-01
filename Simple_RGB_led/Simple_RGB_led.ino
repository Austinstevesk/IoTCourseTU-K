
void setup() {
  // put your setup code here, to run once:
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(6, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(6, HIGH);


  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(6, LOW);


  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(6, LOW);

  delay(1000);
  //Further mixture of colours gives different types of colours
}
