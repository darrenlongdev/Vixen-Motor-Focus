/**
 * Darren Long - Telescope Focuser
 */

#define DIR_PIN   4 // Direction
#define STEP_PIN  5 // Step
#define EN_PIN    7 //enable

void setup() {
  pinMode(EN_PIN, OUTPUT);
  pinMode(STEP_PIN, OUTPUT);
  pinMode(DIR_PIN, OUTPUT);
  
  pinMode(8, INPUT_PULLUP); // btnLeftSlowPin
  pinMode(9, INPUT_PULLUP); // btnLeftFastPin
  pinMode(10, INPUT_PULLUP); // btnRightSlowPin
  pinMode(11, INPUT_PULLUP); // btnRightFastPin
  
  digitalWrite(EN_PIN, LOW); //activate driver
  //digitalWrite(EN_PIN, HIGH); //disable driver
}

void loop() {

int iPot = round(map(analogRead(2), 0, 1023, 16000, 6000));

int btnLeftSlow = digitalRead(8);
int btnLeftFast = digitalRead(9);
int btnRightSlow = digitalRead(10);
int btnRightFast = digitalRead(11);

if (btnLeftSlow == LOW) { 
  digitalWrite(DIR_PIN, LOW); // Direction
    digitalWrite(STEP_PIN, HIGH);
    delayMicroseconds(960);
    digitalWrite(STEP_PIN, LOW);
    delayMicroseconds(iPot); //16000
 } 

if (btnRightSlow == LOW) { 
  digitalWrite(DIR_PIN, HIGH); // Direction
    digitalWrite(STEP_PIN, HIGH);
    delayMicroseconds(960);
    digitalWrite(STEP_PIN, LOW);
    delayMicroseconds(iPot); //16000
 } 
 
 if (btnLeftFast == LOW) { 
  digitalWrite(DIR_PIN, LOW); // Direction
    digitalWrite(STEP_PIN, HIGH);
    delayMicroseconds(960);
    digitalWrite(STEP_PIN, LOW);
    delayMicroseconds(960);
 } 

if (btnRightFast == LOW) { 
  digitalWrite(DIR_PIN, HIGH); // Direction
    digitalWrite(STEP_PIN, HIGH);
    delayMicroseconds(960);
    digitalWrite(STEP_PIN, LOW);
    delayMicroseconds(960);
 } 
 
 }
