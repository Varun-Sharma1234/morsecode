int led_builtIn = 13; 
volatile int cindex = 0;  // Declare cindex as volatile

int buttonPin = 2; 
String name = "varun";  // Declaring the string name
bool isBlinking = false;

void setup() {
  pinMode(led_builtIn, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(buttonPin), start, FALLING);
  Serial.begin(9600); 
}

void start()
{
  isBlinking = true;
  cindex = 0; 
}

void loop() {
   if (isBlinking) {  
    Serial.println(name);
    BlinkName();
    isBlinking = false;
  }

}

void BlinkName()
{
  for (cindex; cindex < name.length(); cindex++) {
      BlinkCharacters(name[cindex]);
      delay(1000);
    }
}

void BlinkDot() {
  digitalWrite(led_builtIn, HIGH);
  delay(300);
  digitalWrite(led_builtIn, LOW);
  delay(300);

}

void BlinkDash() {
  digitalWrite(led_builtIn, HIGH);
  delay(900);
  digitalWrite(led_builtIn, LOW);
  delay(300);
}

void BlinkCharacters(char current) {
  if (current == 'a') {
    BlinkDot();
    BlinkDash();
  }
  if (current == 'b') {
    BlinkDash();
    BlinkDot();
    BlinkDot();
    BlinkDot();
  }
  if (current == 'c') {
    BlinkDash();
    BlinkDot();
    BlinkDash();
    BlinkDot();
  }
  if (current == 'd') {
    BlinkDash();
    BlinkDot();
    BlinkDot();
  }
  if (current == 'e') {
    BlinkDot();
  }
  if (current == 'f') {
    BlinkDot();
    BlinkDot();
    BlinkDash();
    BlinkDot();
  }
  if (current == 'g') {
    BlinkDash();
    BlinkDash();
    BlinkDot();
  }
  if (current == 'h') {
    BlinkDot();
    BlinkDot();
    BlinkDot();
    BlinkDot();
  }
  if (current == 'i') {
    BlinkDot();
    BlinkDot();
  }
  if (current == 'j') {
    BlinkDot();
    BlinkDash();
    BlinkDash();
    BlinkDash();
  }
  if (current == 'k') {
    BlinkDash();
    BlinkDot();
    BlinkDash();
  }
  if (current == 'l') {
    BlinkDot();
    BlinkDash();
    BlinkDot();
    BlinkDot();
  }
  if (current == 'm') {
    BlinkDash();
    BlinkDash();
  }
  if (current == 'n') {
    BlinkDash();
    BlinkDot();
  }
  if (current == 'o') {
    BlinkDash();
    BlinkDash();
    BlinkDash();
  }
  if (current == 'p') {
    BlinkDot();
    BlinkDash();
    BlinkDash();
    BlinkDot();
  }
  if (current == 'q') {
    BlinkDash();
    BlinkDash();
    BlinkDot();
    BlinkDash();
  }
  if (current == 'r') {
    BlinkDot();
    BlinkDash();
    BlinkDot();
  }
  if (current == 's') {
    BlinkDot();
    BlinkDot();
    BlinkDot();
  }
  if (current == 't') {
    BlinkDash();
  }
  if (current == 'u') {
    BlinkDot();
    BlinkDot();
    BlinkDash();
  }
  if (current == 'v') {
    BlinkDot();
    BlinkDot();
    BlinkDot();
    BlinkDash();
  }
  if (current == 'w') {
    BlinkDot();
    BlinkDash();
    BlinkDash();
  }
  if (current == 'x') {
    BlinkDash();
    BlinkDot();
    BlinkDot();
    BlinkDash();
  }
  if (current == 'y') {
    BlinkDash();
    BlinkDot();
    BlinkDash();
    BlinkDash();
  }
  if (current == 'z') {
    BlinkDash();
    BlinkDash();
    BlinkDot();
    BlinkDot();
  }
}