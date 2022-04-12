
#include<cstring>

void replacePi(char input[]) {
	
    int n=strlen(input);
if(n<=1)
{
    return;
}
    if(input[0]=='p'&&input[1]=='i')
    {
        for(int i=n;i>=2;i--)
        {
            input[i+2]=input[i];
        }
        input[0]='3';
        input[1]='.';
        input[2]='1';
        input[3]='4';
    }
        replacePi(input+1);

}