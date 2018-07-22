void setup() {

  Serial.begin(115200);
  Serial.print("hello, world\n");
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  blink();
}

void blink() {
  int intervals [5] = { 100, 300, 600, 1000, 1500 }; 
  for (int i = 0; i < 5; i++) {

    digitalWrite(LED_BUILTIN, HIGH);   
    delay(intervals[i]);
    digitalWrite(LED_BUILTIN, LOW);
    delay(intervals[i]);        
  }   
}

