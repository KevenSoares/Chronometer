void decod(int num)
{
  int numero = num;
  switch (numero)
  {
    case(0):
    {
      digitalWrite(A, LOW);
      digitalWrite(B, LOW);
      digitalWrite(C, LOW);
      digitalWrite(D, LOW);
    }
    break;
    case(1):
    {
       digitalWrite(A, HIGH);
       digitalWrite(B, LOW);
       digitalWrite(C, LOW);
       digitalWrite(D, LOW);
      
    }
    break;
     case(2):
    {
     digitalWrite(A, LOW);
     digitalWrite(B, HIGH);
     digitalWrite(C, LOW);
     digitalWrite(D, LOW);
    }
    break;
    case(3):
    {
     digitalWrite(A, HIGH);
     digitalWrite(B, HIGH);
     digitalWrite(C, LOW);
     digitalWrite(D, LOW);
    }
    break;
    case(4):
    {
      digitalWrite(A, LOW);
      digitalWrite(B, LOW);
      digitalWrite(C, HIGH);
      digitalWrite(D, LOW);
    }
    break;
    case(5):
    {
     digitalWrite(A, HIGH);
     digitalWrite(B, LOW);
     digitalWrite(C, HIGH);
     digitalWrite(D, LOW);
    }
    break;
    case(6):
    {
     digitalWrite(A, LOW);
     digitalWrite(B, HIGH);
     digitalWrite(C, HIGH);
     digitalWrite(D, LOW);
    }
    break;
    case(7):
    {
     digitalWrite(A, HIGH);
     digitalWrite(B, HIGH);
     digitalWrite(C, HIGH);
     digitalWrite(D, LOW);
    }
    break;
    case(8):
    {
     digitalWrite(A, LOW);
     digitalWrite(B, LOW);
     digitalWrite(C, LOW);
     digitalWrite(D, HIGH);
    }
    break;
    case(9):
    {
     digitalWrite(A, HIGH);
     digitalWrite(B, LOW);
     digitalWrite(C, LOW);
     digitalWrite(D, HIGH);
    }
    break;
    default:
    {
      digitalWrite(A, LOW);
      digitalWrite(B, LOW);
      digitalWrite(C, LOW);
      digitalWrite(D, LOW);
    }
    break;
  }
}

