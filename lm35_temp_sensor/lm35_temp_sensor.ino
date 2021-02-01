int led = 4;
float sinVal;
int toneVal;
int val; //Photoelectric diode value
unsigned long tepTimer;

void setup() {
  // put your setup code here, to run once:
pinMode(8, OUTPUT);
pinMode(led, OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  val = analogRead(0); //From analog pin 0
  int val;
  double data;
  val = analogRead(0);
  data = (double)val*(5/10.24); //Convert voltage to temperature value

  if(data>25 && val > 500){
    digitalWrite(led, HIGH);
   
    for(int x = 0; x<180; x++){
      sinVal = (sin(x*(3.142/180)));
      toneVal = 2000+(int(sinVal*1000));
  
      tone(8, toneVal);
      delay(2);
  }
  }else{
    digitalWrite(led, LOW);
    noTone(8);
  }
  //every 500 millis
  if(millis()-tepTimer>50){
    tepTimer = millis();
    Serial.print("Temp: ");
    Serial.print(data);
    Serial.println("C");
    Serial.print("Light intensity ");
    Serial.println(val); //Prints light intensity value
    
  }

}
