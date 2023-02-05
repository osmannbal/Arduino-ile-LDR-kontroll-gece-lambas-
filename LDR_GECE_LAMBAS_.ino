int ledPin =5;
int ldrPin=A0;
int esikDeger=400;

void setup() {
  pinMode(5, OUTPUT);
  pinMode(A0, INPUT);
  Serial.begin(9600);
  Serial.println("LDR degeri ile led yakma");
}

void loop() {
  int isikDeger = analogRead(A0);
  Serial.print("Ortamin isik degeri: ");
  Serial.println(isikDeger);
  if(isikDeger<esikDeger){
    digitalWrite(5, HIGH);
    Serial.println("Ortam aydinlatildi.");
  }
  else{
    digitalWrite(5, LOW);
    Serial.println("Ortamin isigi yeterli.");
  }
  delay(1000); 
}
