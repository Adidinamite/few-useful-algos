int suma(nod * p)
{
    int s = 0;
	if(p!=0 && p->urm !=0 && p->urm->urm!=0)
    {
    	for(nod *i = p; i->urm->urm !=0; i = i->urm)
        {
        	if(i->info %2==0 && i->urm->info %2==1 && i->urm->urm->info %2==0)
                s+=i->urm->info;
        }
    }
    return s;
}
