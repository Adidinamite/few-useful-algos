for(int i = 0 ; i< n-1; ++i)
{
  for(int j = i + 1; j< n; ++j)
  {
    if(v[i]> v[j])
        swap(v[i], v[j]);
  }
}
