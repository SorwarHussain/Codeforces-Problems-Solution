#include<stdio.h>


int main()
{
    char str[100];
    int i;
    gets(str);
    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i]!='a'&&str[i]!='e'&&str[i]!='i'&&str[i]!='u'&&str[i]!='o'&&str[i]!='A'&&str[i]!='E'&&str[i]!='I'&&str[i]!='U'&&str[i]!='O'&&str[i]!='y'&&str[i]!='Y')
        {
            if((str[i]>'A'&&str[i]<'E')||(str[i]>'E'&&str[i]<'I')||(str[i]>'I'&&str[i]<'O')||(str[i]>'O'&&str[i]<'U')||(str[i]>'U'&&str[i]<='Y')||(str[i]>'Y'&&str[i]<='Z'))
            {
                str[i]+=32;
                printf(".%c",str[i]);
            }
            else
            {
                printf(".%c",str[i]);
            }

        }

    }
    return 0;
}
