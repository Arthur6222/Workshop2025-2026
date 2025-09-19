int ledPin = 13;
int pirPin = 8;
int buttonPin = 2;

bool pirEnabled = false;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(pirPin, INPUT);
  pinMode(buttonPin, INPUT_PULLUP);

  Serial.begin(9600);
  Serial.println("Test PIR + Bouton");
}

void loop() {
  if (digitalRead(buttonPin) == LOW) {
    pirEnabled = !pirEnabled;
    delay(300);
    Serial.println(pirEnabled ? "PIR activé" : "PIR désactivé");
    digitalWrite(ledPin, LOW); 
  }

  if (pirEnabled) {
    int val = digitalRead(pirPin);
    Serial.print("Lecture PIR: ");
    Serial.println(val);

    if (val == HIGH) {
      digitalWrite(ledPin, HIGH);
    } else {
      digitalWrite(ledPin, LOW);
    }
  }
}
