#include <Servo.h>

// --- Définition des pins ---
#define BTN_SERVO 4
#define SERVO_PIN 9

// --- Servo ---
Servo myServo;
bool servoOpen = false;         
int pressCount = 0;             
unsigned long lastPressTime = 0;
const unsigned long sequenceTimeout = 2000; // 2s max pour valider la séquence
const unsigned long debounceDelay = 50;     // anti-rebond

void setup() {
  pinMode(BTN_SERVO, INPUT_PULLUP);  

  myServo.attach(SERVO_PIN);
  myServo.write(0); // Position initiale

  Serial.begin(9600);
}

void loop() {
  static bool lastBtnServo = HIGH;
  static unsigned long lastDebounceTime = 0;

  bool btnServoState = digitalRead(BTN_SERVO);

  // Détection front descendant avec anti-rebond
  if (lastBtnServo == HIGH && btnServoState == LOW) {
    unsigned long now = millis();
    if (now - lastDebounceTime > debounceDelay) {
      
      // Reset si trop de temps entre 2 appuis
      if (now - lastPressTime > sequenceTimeout) {
        pressCount = 0;
      }

      pressCount++;
      lastPressTime = now;

      Serial.print("Appui Servo détecté, compteur = ");
      Serial.println(pressCount);

      // Exemple : bascule servo après 2 appuis rapides
      if (pressCount == 2) {
        servoOpen = !servoOpen;
        myServo.write(servoOpen ? 90 : 0);
        Serial.println(servoOpen ? "Servo à 90°" : "Servo à 0°");
        pressCount = 0; // reset
      }
      lastDebounceTime = now;
    }
  }

  lastBtnServo = btnServoState;
}
