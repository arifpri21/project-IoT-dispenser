// Pin Definitions
#define RELAY1 D1 // Relay 1
#define RELAY2 D2 // Relay 2
#define RELAY3 D3 // Relay 3
#define RELAY4 D4 // Relay 4
#define LED_PIN D5 // LED

// Waktu Durasi Antar Pola (ms)
const unsigned long DISCO_DELAY = 150; // Waktu antar pola (lebih cepat)

void setup() {
  Serial.begin(115200);

  // Atur pin sebagai OUTPUT
  pinMode(RELAY1, OUTPUT);
  pinMode(RELAY2, OUTPUT);
  pinMode(RELAY3, OUTPUT);
  pinMode(RELAY4, OUTPUT);
  pinMode(LED_PIN, OUTPUT);

  // Semua relay dan LED OFF saat mulai
  digitalWrite(RELAY1, HIGH);
  digitalWrite(RELAY2, HIGH);
  digitalWrite(RELAY3, HIGH);
  digitalWrite(RELAY4, HIGH);
  digitalWrite(LED_PIN, LOW);

  Serial.println("🎵 Lampu Disko Dimulai! 🕺💃✨");
}

void loop() {
  // Pola 1: **Waves of Lights** - Efek Gelombang
  for (int i = 0; i < 4; i++) {
    digitalWrite(RELAY1, LOW); digitalWrite(RELAY2, HIGH);
    digitalWrite(RELAY3, HIGH); digitalWrite(RELAY4, LOW);
    delay(DISCO_DELAY);
    digitalWrite(RELAY1, HIGH); digitalWrite(RELAY2, LOW);
    digitalWrite(RELAY3, LOW); digitalWrite(RELAY4, HIGH);
    delay(DISCO_DELAY);
  }

  // Pola 2: **Blinking Random** - Blink Acak Cepat
  for (int i = 0; i < 6; i++) {
    randomSeed(millis());
    int randomRelay = random(1, 6); // Relay 1-4 dan LED
    switch (randomRelay) {
      case 1: digitalWrite(RELAY1, LOW); delay(DISCO_DELAY); digitalWrite(RELAY1, HIGH); break;
      case 2: digitalWrite(RELAY2, LOW); delay(DISCO_DELAY); digitalWrite(RELAY2, HIGH); break;
      case 3: digitalWrite(RELAY3, LOW); delay(DISCO_DELAY); digitalWrite(RELAY3, HIGH); break;
      case 4: digitalWrite(RELAY4, LOW); delay(DISCO_DELAY); digitalWrite(RELAY4, HIGH); break;
      case 5: digitalWrite(LED_PIN, HIGH); delay(DISCO_DELAY); digitalWrite(LED_PIN, LOW); break;
    }
    delay(DISCO_DELAY);
  }

  // Pola 3: **Strobe Lights** - Efek Strobe Cepat
  for (int i = 0; i < 5; i++) {
    digitalWrite(RELAY1, LOW); digitalWrite(RELAY2, LOW);
    digitalWrite(RELAY3, LOW); digitalWrite(RELAY4, LOW);
    digitalWrite(LED_PIN, HIGH); // Semua menyala
    delay(50); // Kedipan cepat
    digitalWrite(RELAY1, HIGH); digitalWrite(RELAY2, HIGH);
    digitalWrite(RELAY3, HIGH); digitalWrite(RELAY4, HIGH);
    digitalWrite(LED_PIN, LOW); // Semua mati
    delay(50); // Kedipan cepat
  }

  // Pola 4: **Spiral Lights** - Efek Spiral
  for (int i = 0; i < 4; i++) {
    digitalWrite(RELAY1, LOW); delay(DISCO_DELAY); digitalWrite(RELAY1, HIGH);
    digitalWrite(RELAY2, LOW); delay(DISCO_DELAY); digitalWrite(RELAY2, HIGH);
    digitalWrite(RELAY3, LOW); delay(DISCO_DELAY); digitalWrite(RELAY3, HIGH);
    digitalWrite(RELAY4, LOW); delay(DISCO_DELAY); digitalWrite(RELAY4, HIGH);
    digitalWrite(LED_PIN, HIGH); delay(DISCO_DELAY); digitalWrite(LED_PIN, LOW);
  }

  // Pola 5: **Fast Alternating** - Bergantian Cepat
  digitalWrite(RELAY1, LOW); digitalWrite(RELAY2, HIGH);
  digitalWrite(RELAY3, LOW); digitalWrite(RELAY4, HIGH); delay(DISCO_DELAY);
  digitalWrite(RELAY1, HIGH); digitalWrite(RELAY2, LOW);
  digitalWrite(RELAY3, HIGH); digitalWrite(RELAY4, LOW); delay(DISCO_DELAY);

  // Pola 6: **Flash Effect** - Kedipan Kilat
  for (int i = 0; i < 4; i++) {
    digitalWrite(RELAY1, LOW); digitalWrite(RELAY2, LOW);
    digitalWrite(RELAY3, LOW); digitalWrite(RELAY4, LOW);
    digitalWrite(LED_PIN, HIGH); // Semua menyala
    delay(100); // Kilat sesaat
    digitalWrite(RELAY1, HIGH); digitalWrite(RELAY2, HIGH);
    digitalWrite(RELAY3, HIGH); digitalWrite(RELAY4, HIGH);
    digitalWrite(LED_PIN, LOW); // Semua mati
    delay(100); // Kilat sesaat
  }

  // Pola 7: **Pulse Effect** - Efek Nadi (Melambat dan Cepat)
  for (int i = 0; i < 5; i++) {
    digitalWrite(RELAY1, LOW); digitalWrite(RELAY2, LOW);
    digitalWrite(RELAY3, LOW); digitalWrite(RELAY4, LOW);
    digitalWrite(LED_PIN, HIGH); // Semua menyala
    delay(200); // Nadi lambat
    digitalWrite(RELAY1, HIGH); digitalWrite(RELAY2, HIGH);
    digitalWrite(RELAY3, HIGH); digitalWrite(RELAY4, HIGH);
    digitalWrite(LED_PIN, LOW); // Semua mati
    delay(100); // Nadi cepat
  }

  // Pola 8: **Rhythm Sync** - Efek Menyala Berdasarkan Irama
  for (int i = 0; i < 4; i++) {
    digitalWrite(RELAY1, LOW); digitalWrite(RELAY2, HIGH);
    digitalWrite(RELAY3, HIGH); digitalWrite(RELAY4, LOW);
    delay(DISCO_DELAY); // Irama pertama
    digitalWrite(RELAY1, HIGH); digitalWrite(RELAY2, LOW);
    digitalWrite(RELAY3, LOW); digitalWrite(RELAY4, HIGH);
    delay(DISCO_DELAY); // Irama kedua
  }

  // Pola 9: **Mirror Effect** - Efek Cermin (Relay Berlawanan)
  digitalWrite(RELAY1, LOW); digitalWrite(RELAY2, HIGH);
  digitalWrite(RELAY3, HIGH); digitalWrite(RELAY4, LOW);
  delay(DISCO_DELAY);
  digitalWrite(RELAY1, HIGH); digitalWrite(RELAY2, LOW);
  digitalWrite(RELAY3, LOW); digitalWrite(RELAY4, HIGH);
  delay(DISCO_DELAY);

  // Pola 10: **Rainbow Flash** - Kilat Pelangi (Relay Acak)
  for (int i = 0; i < 5; i++) {
    randomSeed(millis());
    int randomRelay = random(1, 6); // Relay 1-4 dan LED
    switch (randomRelay) {
      case 1: digitalWrite(RELAY1, LOW); delay(DISCO_DELAY); digitalWrite(RELAY1, HIGH); break;
      case 2: digitalWrite(RELAY2, LOW); delay(DISCO_DELAY); digitalWrite(RELAY2, HIGH); break;
      case 3: digitalWrite(RELAY3, LOW); delay(DISCO_DELAY); digitalWrite(RELAY3, HIGH); break;
      case 4: digitalWrite(RELAY4, LOW); delay(DISCO_DELAY); digitalWrite(RELAY4, HIGH); break;
    }
    digitalWrite(LED_PIN, LOW); delay(DISCO_DELAY);
  }

  // Jeda antar siklus pola
  delay(500);
  Serial.println("✨ Pola Disko Selesai, Mengulang... ✨");
}
