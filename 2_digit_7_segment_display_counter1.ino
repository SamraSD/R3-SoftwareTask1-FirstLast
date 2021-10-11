// C++ code
//

void setup()
{
  pinMode(A0, INPUT);
  for(int i=0;i<=13;i++)
    pinMode(i, OUTPUT);
  Serial.begin(9600);

}
int PotVal = 0;
int a;
int b;
const int number[10]={0b0000,0b0001,0b0010,0b0011,0b0100,0b0101,0b0110,0b0111,0b1000,0b1001};

void loop()
{
  delay(100); // Wait for 100 millisecond(s)
  PotVal = (analogRead(A0)/10.23);
  a = PotVal / 10;
  b = PotVal % 10;
  Serial.println(PotVal);
  Serial.println(a);
  Serial.println(b);
  int A = number[a] & 0b1000;
  int B = number[a] & 0b0100;
  int C = number[a] & 0b0010;
  int D = number[a] & 0b0001;
  int E = number[b] & 0b1000;
  int F = number[b] & 0b0100;
  int G = number[b] & 0b0010;
  int H = number[b] & 0b0001;
  if (A = 8)
    digitalWrite(1, HIGH);
    else
      digitalWrite(1, LOW);
  if (B = 4)
    digitalWrite(2, HIGH);
    else
      digitalWrite(2, LOW);
  if (C = 2)
    digitalWrite(3, HIGH);
    else
      digitalWrite(3, LOW);
  if (D = 1)
    digitalWrite(4, HIGH);
    else
      digitalWrite(4, LOW);
  if (E = 8)
    digitalWrite(5, HIGH);
    else
      digitalWrite(5, LOW);
  if (F = 4)
    digitalWrite(6, HIGH);
    else
      digitalWrite(6, LOW);
  if (G = 2)
    digitalWrite(7, HIGH);
    else
      digitalWrite(7, LOW);
  if (H = 1)
    digitalWrite(8, HIGH);
    else
      digitalWrite(8, LOW);
    
}