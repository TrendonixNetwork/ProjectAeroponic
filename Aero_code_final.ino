
#include <Keypad.h>


const byte ROWS = 4; // Four rows

const byte COLS = 4; // Three columns

// Define the Keymap

char keys[ROWS][COLS] = { {'1','2','3','A'}, {'4','5','6','B'}, {'7','8','9','C'} , {'*','0','#','D'}};
//char keys[ROWS][COLS] = { {'1','2','3'}, {'4','5','6'}, {'7','8','9'} , {'*','0','#'}};

// Connect keypad ROW0, ROW1, ROW2 and ROW3 to these Arduino pins.

//byte rowPins[ROWS] = { 8, 7, 6, 5 };
byte rowPins[ROWS] = { 12, 11, 10, 9 };

// Connect keypad COL0, COL1 and COL2 to these Arduino pins.

byte colPins[COLS] = { 8, 7, 6, 5 };
//byte colPins[COLS] = { 12, 11, 10, 9 };

// Create the Keypad

Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );
//22,23
#define pin1 52
#define pin2 50
#define pin3 48
#define pin4 28
#define pin5 30
#define pin6 32
#define pin7 34
#define pin8 36
#define pin9 38
#define led 13
char x;

#include <dht.h>

dht DHT;

#define DHT11_PIN 3
void setup()

{

pinMode(pin1,OUTPUT);
pinMode(pin2,OUTPUT);
pinMode(pin3,OUTPUT);
pinMode(pin4,OUTPUT);
pinMode(pin5,OUTPUT);
pinMode(pin6,OUTPUT);
pinMode(pin7,OUTPUT);
pinMode(pin8,OUTPUT);
pinMode(pin9,OUTPUT);



Serial.begin(9600);

}

void loop()

{
  digitalWrite(pin3,HIGH);

keycase();

}

void keycase()
{
  char key = keypad.getKey();
  
if(key) // Check for a valid key.

{

switch (key)

{

case '1':
while(1)
{
x = keypad.getKey();
if(x=='0')
break;
Serial.println(key);

digitalWrite(pin1,HIGH);
delay(1000);
digitalWrite(pin1,0);
delay(1000);
}
Serial.println(key);

break;

case '2':
while(1)
{
  x = keypad.getKey();
if(x=='0')
break;
Serial.println(key);

digitalWrite(pin1,HIGH);
delay(3000);
digitalWrite(pin1,0);
delay(3000);
}
Serial.println(key);

break;

case '3':
while(1)
{
  x = keypad.getKey();
if(x=='0')
break;
Serial.println(key);

digitalWrite(pin1,HIGH);
//delay(10000);
//digitalWrite(pin1,0);
//delay(10000);
}
Serial.println(key);

break;

case '4':
while(1)
{
  x = keypad.getKey();
if(x=='0')
break;
Serial.println(key);

digitalWrite(pin2,HIGH);
delay(1000);
digitalWrite(pin2,0);
delay(1000);
}
Serial.println(key);

break;

case '5':
while(1)
{
  x = keypad.getKey();
if(x=='0')
break;
Serial.println(key);

digitalWrite(pin2,HIGH);
delay(3000);
digitalWrite(pin2,0);
delay(3000);
}
Serial.println(key);

break;

case '6':
while(1)
{
  x = keypad.getKey();
if(x=='0')
break;
Serial.println(key);

digitalWrite(pin2,HIGH);
delay(10000);
digitalWrite(pin2,0);
delay(10000);
}
Serial.println(key);

break;

case '7':
while(1)
{
  x = keypad.getKey();
if(x=='0')
break;
Serial.println(key);

digitalWrite(pin2,HIGH);
digitalWrite(pin1,HIGH);
delay(1000);
digitalWrite(pin2,0);
digitalWrite(pin1,0);
delay(1000);
}
Serial.println(key);

break;

case '8':
while(1)
{
  x = keypad.getKey();
if(x=='0')
break;
Serial.println(key);

digitalWrite(pin2,HIGH);
digitalWrite(pin1,HIGH);
delay(7000);
digitalWrite(pin2,0);
digitalWrite(pin1,0);
delay(10000);
}
Serial.println(key);

break;

case '9':
while(1)
{
  x = keypad.getKey();
if(x=='0')
break;
Serial.println(key);
digitalWrite(pin2,HIGH);
digitalWrite(pin1,HIGH);
delay(60000);
digitalWrite(pin2,0);
digitalWrite(pin1,0);
delay(3000);

}
Serial.println(key);

break;

case 'A':
while(1)
{
x = keypad.getKey();
if(x=='0')
break;
Serial.println(key);

int chk = DHT.read11(DHT11_PIN);
  Serial.print("Temperature = ");
  Serial.println(DHT.temperature);
  Serial.print("Humidity = ");
  Serial.println(DHT.humidity);
  if(DHT.temperature>40)
  {
     digitalWrite(pin2,HIGH);
    // delay(10000);
     Serial.println("hot hot hot");
  }
  else
  {
     digitalWrite(pin2,0);
     Serial.println("heh!");
  }
  delay(1000);
}
Serial.println(key);

break;

case '0':
digitalWrite(pin1,LOW);
digitalWrite(pin2,LOW);
digitalWrite(pin3,LOW);
digitalWrite(pin4,LOW);
digitalWrite(pin5,LOW);
digitalWrite(pin6,LOW);
digitalWrite(pin7,LOW);
digitalWrite(pin8,LOW);
digitalWrite(pin9,LOW);
Serial.println(key);
break;
}
}
}
