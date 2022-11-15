#include <stdio.h>

void ReverseString(int LCount ,int StrMid, int StrLen, char Str[1001]);

int main(void)
{
	
	int TCase = 0;
	scanf("%d", &TCase); getchar();
	char Str[TCase][1001];
	
	for(int i = 0; i < TCase; i++)
	{
		scanf("%[^\n]", &Str[i]); getchar();
	}
	
	for(int i = 0; i < TCase; i++)
	{
		int StrMid = 0, StrLen = 0;
		while(Str[i][StrMid] != '\0')
		{
			StrMid++;
		}
		StrLen = StrMid - 1;
		StrMid = (StrMid / 2); 
		
		ReverseString(0 , StrMid, StrLen, Str[i]);
	}
	
	for(int i = 0; i < TCase; i++)
	{
		printf("Case #%d: %s\n", (i + 1), Str[i]);
	}

	return 0;
}

void ReverseString(int LCount ,int StrMid, int StrLen, char Str[1001])
{
	
	if(LCount == (StrMid - 1))
	{
		char Temp = Str[StrLen];
		Str[StrLen] = Str[LCount];
		Str[LCount] = Temp;
		return;
	}
	
	char Temp = Str[StrLen];
	Str[StrLen] = Str[LCount];
	Str[LCount] = Temp;
	return ReverseString((LCount + 1), StrMid, (StrLen - 1), Str);
}
