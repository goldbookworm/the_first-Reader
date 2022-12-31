#include<stdio.h>
#include<windows.h>
#include<string.h> 
#define S SMG_duanma
int main()
{
	int a,i;
	char word[]="Scalar waves propagating in the direction of the magnetic field vector are clearly driven by magnetic fields,and are formed, for example by rotating electrical charges. Such field vortexes must be searched for;as such a motor would be capable to drive the biological processes and chemical reactions";
	a=strlen(word);
	int code[a+1];
	unsigned char SMG_duanma[a+1];
	memset(code,'\0',sizeof(code));
	memset(SMG_duanma,'\0',sizeof(SMG_duanma));
	for(i=0;i<=strlen(word);i++)
	{
		code[i]=word[i];
	}
	printf("\n");
	for(i=0;i<=strlen(word);i++)
	{
		switch(code[i])
		{
			case 65:S[i]=0x88;break;
			case 97:S[i]=0x88;break;
			case 66:S[i]=0x83;break;
			case 98:S[i]=0x83;break;
			case 67:S[i]=0xc6;break;
			case 99:S[i]=0xc6;break;
			case 68:S[i]=0xa1;break;
			case 100:S[i]=0xa1;break;
			case 69:S[i]=0x86;break;
			case 101:S[i]=0x86;break;
			case 70:S[i]=0x8e;break;
			case 102:S[i]=0x8e;break;
			case 71:S[i]=0xc2;break;
			case 103:S[i]=0xc2;break;
			case 72:S[i]=0x89;break;
			case 104:S[i]=0x89;break;
			case 73:S[i]=0xf0;break;
			case 105:S[i]=0xf0;break;
			case 74:S[i]=0xf1;break;
			case 106:S[i]=0xf1;break;
			case 75:S[i]=0x8a;break;
			case 107:S[i]=0x8a;break;
			case 76:S[i]=0xc7;break;
			case 108:S[i]=0xc7;break;
			case 77:S[i]=0xc8;break;
			case 109:S[i]=0xc8;break;
			case 78:S[i]=0xab;break;
			case 110:S[i]=0xab;break;
			case 79:S[i]=0xa3;break;
			case 111:S[i]=0xa3;break;
			case 80:S[i]=0x8c;break;
			case 112:S[i]=0x8c;break;
			case 81:S[i]=0x98;break;
			case 113:S[i]=0x98;break;
			case 82:S[i]=0xce;break;
			case 114:S[i]=0xce;break;
			case 83:S[i]=0x92;break;
			case 115:S[i]=0x92;break;
			case 84:S[i]=0x87;break;
			case 116:S[i]=0x87;break;
			case 85:S[i]=0xc1;break;
			case 117:S[i]=0xc1;break;
			case 86:S[i]=0xe3;break;
			case 118:S[i]=0xe3;break;
			case 87:S[i]=0x81;break;
			case 119:S[i]=0x81;break;
			case 88:S[i]=0x9b;break;
			case 120:S[i]=0x9b;break;
			case 89:S[i]=0x91;break;
			case 121:S[i]=0x91;break;
			case 90:S[i]=0xa4;break;
			case 122:S[i]=0xa4;break;
			case 44:S[i]=0x7f;break;
			case 46:S[i]=0x7f;break;
			case 59:S[i]=0x7f;break;
			case 34:S[i]=0xdd;break;
			case 39:S[i]=0xdf;break;
			default :S[i]=0xff;break;
		}
	}
	printf("The Codes:\n");
	for(i=0;i<=strlen(word);i++)
	{
		printf("0x%x, ",S[i]);
	}
	printf("\n");
	printf("The number of codes : %d\n\n",strlen(S));
	printf("=================================\n");
    system("pause");
    return 0;
}
