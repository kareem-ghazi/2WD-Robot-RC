int EN1 = 10;
int EN2 = 11;

int IN1 = 2;
int IN2 = 3;
int IN3 = 4;
int IN4 = 5;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  analogWrite(EN1, 255);
  analogWrite(EN2, 255);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available()) {
    char USER_INPUT = Serial.read();

    if (USER_INPUT == 'F') {
      digitalWrite(IN1, HIGH);
      digitalWrite(IN2, LOW);

      digitalWrite(IN3, HIGH);
      digitalWrite(IN4, LOW);
    } else if (USER_INPUT == 'B') {
      digitalWrite(IN1, LOW);
      digitalWrite(IN2, HIGH);

      digitalWrite(IN3, LOW);
      digitalWrite(IN4, HIGH);
    } else if (USER_INPUT == 'R') {
      digitalWrite(IN1, LOW);
      digitalWrite(IN2, LOW);

      digitalWrite(IN3, HIGH);
      digitalWrite(IN4, LOW);
    } else if (USER_INPUT == 'L') {
      digitalWrite(IN1, HIGH);
      digitalWrite(IN2, LOW);

      digitalWrite(IN3, LOW);
      digitalWrite(IN4, LOW);
    } else if (USER_INPUT == 'S') {
      digitalWrite(IN1, LOW);
      digitalWrite(IN2, LOW);
  
      digitalWrite(IN3, LOW);
      digitalWrite(IN4, LOW);
    }
  }
}