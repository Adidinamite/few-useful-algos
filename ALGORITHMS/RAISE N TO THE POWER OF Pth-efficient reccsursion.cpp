void power(long long x, int unsigned long int)
{
  if(y == 0)
  {
    return 1;
  }
  else if(y % 2 == 0)
  {
    return power(x , y/2) * power(x, y/2);
  }
  else 
  {
    return x* power(x, y/2) * power(x, y/2);
  }
}
