int m11 = 39; // motor pins in arduino
int m22 = 37;
int m21 = 35;
int m22 = 33;

int e,f,g,h;

int en1 = 3;
int en2 = 8;

void setup()
{
  pinMode(m11,INPUT);
  pinMode(m12,INPUT);
  pinMode(m21,INPUT);
  pinMode(m22,INPUT);

  pinMode(i,OUTPUT);
  pinMode(j,OUTPUT);
  pinMode(k,OUTPUT);
  pinMode(l,OUTPUT);

  pinMode(en1,OUTPUT);
  pinMode(en2,OUTPUT);

  Serial.begin(9600);
}

void loop()
{
  digitalWrite(en1,HIGH);
  digitalWrite(en2,HIGH);

  digitalWrite(i,LOW);
  digitalWrite(j,LOW);
  digitalWrite(k,LOW);
  digitalWrite(l,LOW);

  if(digitalRead(m11) == HIGH && digitalRead(m22) == HIGH)
  {
    analogWrite(en1,255);
    analogWrite(en2, 10);
    digitalWrite(i,LOW);
    digitalWrite(j,HIGH);
    digitalWrite(k,HIGH);
    digitalWrite(l,LOW);
  }
  if(digitalRead(m12) == HIGH && digitalRead(m21) == HIGH)
  {
    analogWrite(en1,10);
    analogWrite(en2, 255);
    digitalWrite(i,HIGH);
    digitalWrite(j,LOW);
    digitalWrite(k,LOW);
    digitalWrite(l,HIGH);
  }
  if(digitalRead(m11))
  {
    digitalWrite(i,LOW);
    digitalWrite(j,HIGH);
    Serial.println("Motor1 Forward");
  }
  if(digitalRead(m12))
  {
    digitalWrite(i,HIGH);
    digitalWrite(j,LOW);
    Serial.println("Motor1 Reverse");
  }
  if(digitalRead(m21))
  {
    digitalWrite(k,LOW);
    digitalWrite(l,HIGH);
    Serial.println("Motor2 Forward");
  }
  if(digitalRead(m22))
  {
    digitalWrite(k,HIGH);
    digitalWrite(l,LOW);
    Serial.println("Motor2 Reverse");
  }
  delay(1000);
}

