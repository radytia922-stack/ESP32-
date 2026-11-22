const int redPin = 21;    // LED Merah terhubung ke GPIO 25
const int greenPin = 23;  // LED Hijau terhubung ke GPIO 27

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
}

void loop() {
  // Hijau menyala (Jalan)
  digitalWrite(redPin, LOW);
  digitalWrite(greenPin, HIGH);
  delay(5000); // Menyala selama 5 detik

  // Merah menyala (Berhenti)
  digitalWrite(greenPin, LOW);
  digitalWrite(redPin, HIGH);
  delay(5000); // Menyala selama 5 detik
}
