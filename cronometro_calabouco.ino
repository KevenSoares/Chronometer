int A,B,C,D,cont = 1,i;
int dig = 0;
unsigned long tempo = 0;
unsigned char segundo;
unsigned char minuto;
int segs[2];
int mins[2];
bool counting = false;
void setup() 
{
//  Serial.begin(9600);
  for(i = 2; i <= 16; i++)
  {
   pinMode(i,OUTPUT);
  }
  for(i = 2; i <= 16; i++)
  {
   digitalWrite(i,LOW);
  }
}

void loop() 
{
  if(varre())
  {
    seteseg(cont);
    decod(dig);
  }
  

}

