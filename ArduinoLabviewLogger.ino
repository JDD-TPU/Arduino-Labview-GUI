/*
  Analog input, Digital outu, serial output to Labview GUI


2017.07.20
JDD

 */

const int Apin0 = A0;
const int Apin1 = A1;
const int Apin2 = A2;
const int Apin3 = A3;
const int Apin4 = A4;
const int Apin5 = A5;
const int Dpin0 = 0;
const int Dpin1 = 1;
const int Dpin2 = 2;


int A_0 = 0;    
int A_1 = 0;
int A_2 = 0;
int A_3 = 0;
int A_4 = 0;
int A_5 = 0;

int D_0 = 0;
int D_1 = 0;
int D_2 = 0;
int count = 0;

void setup() {
  // initialize serial communications at 9600 bps:
  Serial.begin(9600);
}

void loop() {
  // read the analog in value:
  A_0 = analogRead(Apin0);
  A_1 = analogRead(Apin1);
  A_2 = analogRead(Apin2);
  A_3 = analogRead(Apin3);
  A_4 = analogRead(Apin4);
  A_5 = analogRead(Apin5);
  pinMode(D_0, INPUT);

D_0 = digitalRead(Dpin0);
D_1 = digitalRead(Dpin1);
D_2 = digitalRead(Dpin2);

 if (A_0 < 10)
  {
  Serial.print("A0 = 000");
  }
 else if (A_0 <100)
  {
  Serial.print("A0 = 00");
  }
  else if (A_0 <1000)
  {
  Serial.print("A0 = 0");
  }
 else
  {
  Serial.print("A0 = ");
  }
  Serial.print(A_0);

 if (A_1 < 10)
  {
  Serial.print(" A1 = 000");
  }
 else if (A_1 <100)
  {
  Serial.print(" A1 = 00");
  }
  else if (A_1 <1000)
  {
  Serial.print(" A1 = 0");
  }
 else
  {
  Serial.print(" A1 = ");
  }
  Serial.print(A_1);


 if (A_2 < 10)
  {
  Serial.print(" A2 = 000");
  }
 else if (A_2 <100)
  {
  Serial.print(" A2 = 00");
  }
  else if (A_2 <1000)
  {
  Serial.print(" A2 = 0");
  }
 else
  {
  Serial.print(" A2 = ");
  }
  Serial.print(A_2);

 if (A_3 < 10)
  {
  Serial.print(" A3 = 000");
  }
 else if (A_3 <100)
  {
  Serial.print(" A3 = 00");
  }
  else if (A_3 <1000)
  {
  Serial.print(" A3 = 0");
  }
 else
  {
  Serial.print(" A3 = ");
  }
  Serial.print(A_3);
  

 if (A_4 < 10)
  {
  Serial.print(" A4 = 000");
  }
 else if (A_4 <100)
  {
  Serial.print(" A4 = 00");
  }
  else if (A_4 <1000)
  {
  Serial.print(" A4 = 0");
  }
 else
  {
  Serial.print(" A4 = ");
  }
  Serial.print(A_4);


 if (A_5 < 10)
  {
  Serial.print(" A5 = 000");
  }
 else if (A_5 <100)
  {
  Serial.print(" A5 = 00");
  }
  else if (A_5 <1000)
  {
  Serial.print(" A5 = 0");
  }
 else
  {
  Serial.print(" A5 = ");
  }
  Serial.print(A_5);

Serial.print(" D0 = ");
Serial.print(D_0);
Serial.print(" D1 = ");
Serial.print(D_1);
Serial.print(" D2 = ");
Serial.print(D_2);
Serial.println(count);

  //delay(10);
  count=count+1;
}
