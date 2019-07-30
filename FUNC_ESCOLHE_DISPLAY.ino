void seteseg(int nd)
{
  int numdisp = nd;
  switch (numdisp)
  {
    case(1):
    {
       A = 0;
       B = 1;
       C = 2;
       D = 3;  
       if(!counting) mins[0] = dig;     
    }
    break;
    case(2):
    {
       A = 4;
       B = 5;
       C = 6;
       D = 7;
      if(!counting) mins[1] = dig;  
    }
    break;
    case(3):
    {
       A = 8;
       B = 9;
       C = 10;
       D = 11;
       if(!counting)segs[0] = dig;  
    }
    break;
    case(4):
    {
       A = 12;
       B = 13;
       C = 14;
       D = 15;
      if(!counting) segs[1] = dig;  
    }
    break;
    default:
    {
       A = 0;
       B = 1;
       C = 2;
       D = 3;
    }
    break;
  }
}

