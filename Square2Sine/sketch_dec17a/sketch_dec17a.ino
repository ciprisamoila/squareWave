void setup() {
  pinMode(10, OUTPUT);
  Serial.begin(9600);
}

void voltmeter(int pin, char s[]) {
  int val = analogRead(pin);
  float voltage = 0.0049 * val;
  Serial.print(s);
  Serial.print(":");
  Serial.println(voltage);
}

void loop() {
  unsigned long time = millis() / 1000; 

  voltmeter(A0, "V0");
  voltmeter(A1, "V1");
  voltmeter(A2, "V2");
  voltmeter(A3, "V3");
  
  if(time % 2 == 0) digitalWrite(10, HIGH);
  else digitalWrite(10, LOW);

  delay(100);

  Serial.print(0);
  Serial.print(" ");
  Serial.println(5);
}
