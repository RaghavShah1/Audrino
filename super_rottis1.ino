// C++ code
//
int btnstate = 0;

void setup()
{
  pinMode(5, INPUT);
  pinMode(13, OUTPUT);
  pinMode(4, INPUT);
  pinMode(12, OUTPUT);
  pinMode(3, INPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  if (digitalRead(5) == 1) //on off logic 
  {
    digitalWrite(13, HIGH);
  } else {
    digitalWrite(13, LOW);
  }
  while (digitalRead(4) == 1) // blink 
  {
    digitalWrite(12, HIGH);
    delay(300); // Wait for 300 millisecond(s)
    digitalWrite(12, LOW);
    delay(300); // Wait for 300 millisecond(s)
  }
  if (digitalRead(3) == 1) //toggle
  {
    if (btnstate == 1) {
      digitalWrite(11, LOW);
      btnstate = 0;
      delay(600); // Wait for 600 millisecond(s)
    } else {
      btnstate = 1;
      digitalWrite(11, HIGH);
      delay(600); // Wait for 600 millisecond(s)
    }
  }
}
