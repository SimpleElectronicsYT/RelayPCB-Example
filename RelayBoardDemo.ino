//tracking variables for the outputs
bool activate1 = LOW;
bool activate2 = LOW;
bool activate3 = LOW;
bool activate4 = LOW;
bool activate5 = LOW;
bool activate6 = LOW;

//outputs to the relay channels
const int out1 = 9;
const int out2 = 10;
const int out3 = 11;
const int out4 = 12;

//inputs from switches for individual channels
const int in1 = 2;
const int in2 = 3;
const int in3 = 4;
const int in4 = 5;

//inputs from "FUN" switches
const int in5 = 6;
const int in6 = 7;

void setup() {

  //setting outputs to be as such
  pinMode(out1, OUTPUT);
  pinMode(out2, OUTPUT);
  pinMode(out3, OUTPUT);
  pinMode(out4, OUTPUT);

  //setting inputs to be as such and activating pullup resistors
  pinMode(in1, INPUT_PULLUP);
  pinMode(in2, INPUT_PULLUP);
  pinMode(in3, INPUT_PULLUP);
  pinMode(in4, INPUT_PULLUP);
  pinMode(in5, INPUT_PULLUP);
  pinMode(in6, INPUT_PULLUP);

  //setting the outputs to a known state
  digitalWrite(out1, LOW);
  digitalWrite(out2, LOW);
  digitalWrite(out3, LOW);
  digitalWrite(out4, LOW);
}

void loop() {

  //checking the state of activate1 and setting out1 accordingly
  if (activate1 == HIGH){
    digitalWrite(out1, HIGH);
  }
  else {
    digitalWrite(out1, LOW);
  }
  //checking the state of activate2 and setting out2 accordingly
  if (activate2 == HIGH){
    digitalWrite(out2, HIGH);
  }
  else {
    digitalWrite(out2, LOW);
  }
  //checking the state of activate3 and setting out3 accordingly
  if (activate3 == HIGH){
    digitalWrite(out3, HIGH);
  }
  else {
    digitalWrite(out3, LOW);
  }
  //checking the state of activate4 and setting out4 accordingly
  if (activate4 == HIGH){
    digitalWrite(out4, HIGH);
  }
  else {
    digitalWrite(out4, LOW);
  }

  //checking the state of the in1 and changing out1 in accordance
  if (digitalRead(in1) == LOW){
    delay(200);
    activate1 = !activate1;
  }
  //checking the state of the in2 and changing out2 in accordance
  if (digitalRead(in2) == LOW){
    delay(200);
    activate2 = !activate2;
  }
  //checking the state of the in3 and changing out3 in accordance
  if (digitalRead(in3) == LOW){
    delay(200);
    activate3 = !activate3;
  }
  //checking the state of the in4 and changing out4 in accordance
  if (digitalRead(in4) == LOW){
    delay(200);
    activate4 = !activate4;
  }
  //checking the state of the in5 and changing activate5 in accordance
  if (digitalRead(in5) == LOW){
    delay(200);
    activate5 = HIGH;
  }
  //checking the state of the in6 and changing activate6 in accordance
  if (digitalRead(in6) == LOW){
    delay(200);
    activate6 = HIGH;
  }
  //checking the state of the "FUN" input - in5 and performing some actions
  if (activate5 == HIGH){
    delay(500);
    activate1 = LOW;
    activate2 = LOW;
    activate3 = LOW;
    activate4 = LOW;
    activate6 = LOW;
    digitalWrite(out1, LOW);
    digitalWrite(out2, LOW);
    digitalWrite(out3, LOW);
    digitalWrite(out4, LOW);
    delay(500);
    digitalWrite(out1, HIGH);
    delay(500);
    digitalWrite(out2, HIGH);
    delay(500);
    digitalWrite(out3, HIGH);
    delay(500);
    digitalWrite(out4, HIGH);
    delay(1000);
    digitalWrite(out1, LOW);
    delay(500);
    digitalWrite(out2, LOW);
    delay(500);
    digitalWrite(out3, LOW);
    delay(500);
    digitalWrite(out4, LOW);
    delay(1000);
    activate5 = LOW;
  }

  //checking the state of the "FUN" input - in6 and performing some actions
  if (activate6 == HIGH){
    delay(500);
    activate1 = LOW;
    activate2 = LOW;
    activate3 = LOW;
    activate4 = LOW;
    activate5 = LOW;
    digitalWrite(out1, LOW);
    digitalWrite(out2, LOW);
    digitalWrite(out3, LOW);
    digitalWrite(out4, LOW);
    delay(500);
    digitalWrite(out1, HIGH);
    delay(500);
    digitalWrite(out1, LOW);
    delay(500);
    digitalWrite(out1, HIGH);
    delay(500);
    digitalWrite(out1, LOW);
    delay(500);
    digitalWrite(out2, HIGH);
    delay(500);
    digitalWrite(out2, LOW);
    delay(500);
    digitalWrite(out2, HIGH);
    delay(500);
    digitalWrite(out2, LOW);
    delay(500);
    digitalWrite(out3, HIGH);
    delay(500);
    digitalWrite(out3, LOW);
    delay(500);
    digitalWrite(out3, HIGH);
    delay(500);
    digitalWrite(out3, LOW);
    delay(500);
    digitalWrite(out4, HIGH);
    delay(500);
    digitalWrite(out4, LOW);
    delay(500);
    digitalWrite(out4, HIGH);
    delay(500);
    digitalWrite(out4, LOW);
    delay(1000);
    activate6 = LOW;
  }
}
