bool ePrim(int x)
{
    if(x == 0 || x== 1)
        return false;
     if(x == 2)
      return true;
    for(int j = 3; j<=sqrt(x); ++j)
        if(x%j==0)
            return false;
    return true;
}
