void adaugareInainte(nod * & p , int x)
{
    nod* nou = new nod;
    nou -> info = x;
    if(p == NULL) p = nou;
    else
    {
        nou -> urm = p;
        p = nou;
    }
}
