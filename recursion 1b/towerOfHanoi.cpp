void towerOfHanoi(int n,char Sour, char Aux,char Des)
{ 
	if(n==1)
	{
		cout<<Sour<<" "<<Des<<endl;
		return;
	}
	
	towerOfHanoi(n-1,Sour,Des,Aux);
	cout<<Sour<<" "<<Des<<endl;
	towerOfHanoi(n-1,Aux,Sour,Des);
}