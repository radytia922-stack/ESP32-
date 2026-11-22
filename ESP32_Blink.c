const int ledPin = 2; // GPIO 2 (often wired to the onboard LED)

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  digitalWrite(ledPin, HIGH); // Turn LED on (~3.3V)
  delay(1000);              // Wait 1 second
  digitalWrite(ledPin, LOW);  // Turn LED off (0V)
  delay(1000);              // Wait 1 second
}
