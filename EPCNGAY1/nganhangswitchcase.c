#include<stdio.h>
int main(int argc, char *argv)
{
	float tk=0;
	float a=50000;
	float b=0;
	printf("Ban da dang nhap thanh cong. Xin chuc mung\n");
	printf("Ban muon su dung chuc nang nao?\n");
	printf("1. Rut tien\n");
	printf("2. Kiem tra so du\n");
	printf("3. Chuyen khoan\n");
	printf("4. Kiem tra lich su gia dich\n");
	printf("Moi ban nhap cac lua chon tu 1-4\n");
	
	int choose=0;
	scanf("%d", &choose);
	if(choose>=1 && choose<=4)
	{
		switch (choose)
		{
			case 1: 
			printf("Nhap so tien ban can rut: \n");
			scanf("%f", &b);
			if (b<50000)
			{
			tk= a-b;
			printf("Rut tien thanh cong, so du con lai la: %f\n", tk);}
			else 
			printf("So du trong tai khoan khong du!\n");
			break;
			case 2:
				
				printf("So du trong tai khoan cua ban la: %f\n", a);
				break;
			case 3:
				printf("Ban hay nhap so tai khoan can chuyen khoan: \n");
				break;
			case 4: 
			printf("Danh sach cac giao dich gan day\n");
			break;
			default:
				printf("Ban chon chua chinh xac!\n");
		}
	}
	else{
		printf("Lua chon sai. Moi ban chon lai tu 1-4!");
		
	}
	printf("\n");
	return 0;
}
