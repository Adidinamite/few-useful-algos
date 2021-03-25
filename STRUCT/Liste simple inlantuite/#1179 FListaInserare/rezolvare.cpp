void inserare(nod * p, nod * q, int x)
{
	nod* nou = new nod;
    nou -> info = x;
    nou -> urm = q -> urm;
    q -> urm = nou;
}
