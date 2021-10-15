#include<stdio.h>

main()
{
	int dasm , lythuyet, thuchanh;
	printf("moi nhap so diem thung phan : \n");
	printf("diem ly thuyet: ");
	scanf("%d",&lythuyet);
	printf("diem thuc hanh: ");
	scanf("%d",&thuchanh);
	printf("diem dasm : ");
	scanf("%d",&dasm);

    switch(xeploai(lythuyet,thuchanh,dasm))
	{
		case 0: printf("xep loai truot");
			break;
		case 1: printf("xep loai do");
		    break;
		case 2: printf("xep loai kha");
			break;
		case 3: printf("xep loai gioi");
			break;	
	}
	

	
	
}
int  xeploai(int lythuyet,int thuchanh,int dasm)
{
	int tong,tb;
	tong=lythuyet+thuchanh+dasm;
	tb = tong/3;
    if(tb<40)
    return 0;
    if(tb<=60&&tb>=40)
    return 1;
    if(60<tb&&tb<80)
    return 2;
    if (tb>=80)
    return 3;
	
	
}


