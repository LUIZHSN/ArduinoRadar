const int trig = 3;
const int echo = 2;

const int led_branco = 8;
const int led_azul  = 9;
const int led_verde = 10;
const int led_amarelo = 11;
const int led_vermelho = 12;

int duration = 0;
int distance = 0;

void setup() 
{
  pinMode(trig , OUTPUT);
  pinMode(echo , INPUT);
  
  pinMode(led_branco , OUTPUT);
  pinMode(led_azul  , OUTPUT);
  pinMode(led_verde , OUTPUT);
  pinMode(led_amarelo , OUTPUT);
  pinMode(led_vermelho , OUTPUT);
  
  Serial.begin(9600);

}

void loop()
{
  digitalWrite(trig , HIGH);
  delayMicroseconds(1000);
  digitalWrite(trig , LOW);


  duration = pulseIn(echo , HIGH);
  distance = (duration/2) / 28.5 ;
  Serial.println(distance);
  

if ( distance <= 100 )
  {
    digitalWrite(led_branco, HIGH);
}
else
  {
    digitalWrite(led_branco, LOW);
}


if ( distance <= 80 )
  {
    digitalWrite(led_azul, HIGH);
}
else
  {
    digitalWrite(led_azul, LOW);
}


if ( distance <= 60 )
  {
    digitalWrite(led_verde, HIGH);
}
else
  {
    digitalWrite(led_verde, LOW);
}


if ( distance <= 40 )
  {
    digitalWrite(led_amarelo, HIGH);
}
else
  {
    digitalWrite(led_amarelo, LOW);
}


if ( distance <= 20 )
  {
    digitalWrite(led_vermelho, HIGH);
}
else
  {
    digitalWrite(led_vermelho, LOW);
}

}
