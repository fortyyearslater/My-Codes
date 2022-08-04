
string sminus(sint x,sint y)
{
	int lena=x.len(),lenb=b.len(),leno,o[10001],i=1;
	string t;
	while(i<=lena||i<=lenb)
	{
		if(x.num[i]<y.num[i])
		{
			x.num[i]+=10;              
			y.num[i+1]--;
		}
		o[i]=x.num[i]-y.num[i];                        
		i++;
	}
	leno=i;
	while((o[leno]==0)&&(leno>1))leno--;   ¡¡  
	for(i=leno;i>=1;i--)t+=itoc(o[i]);
	return t;
}
	


