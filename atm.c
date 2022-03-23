#include<stdio.h>
int main(){
	int mapin,sodu,sotienmuonchuyen;
	char chuyentien[40],b;
	int pin=123;
	int i,luachon,tiencanrut;
	i=0;
	int taikhoan=123456;
	do{
	printf("\nnhap vao ma pin : ");
	scanf("%d",&mapin);
	i++;
	}while(i<3 && mapin!=pin);
	if(mapin==pin){
		printf("dang nhap thanh cong\n");
		printf("nhap lua chon \n");
		printf("nhap 1 de rut tien\n");
		printf("nhap 2 de kiem tra tai khoan\n");
		printf("nhap 3 de chuyen tien \n");
		fflush(stdin);
		scanf("%d",&luachon);
		switch(luachon){
			case 1:
			printf("nhap so tien can rut");
			fflush(stdin);
			scanf("%d",&tiencanrut);
			    if(tiencanrut<=taikhoan){
			    	printf("rut tien thanh cong : %d\n",tiencanrut);
					sodu=taikhoan-tiencanrut;
					printf("so du con lai = %d",sodu);}
			    	else
			    	printf("tai khoan cua ban khong du tien\n");
					break;
			case 2:
		       	printf("so tien cua ban la = %d\n",taikhoan);
			    break;
			case 3:
				printf("\nnhap stk muon chuyen : ");
				fflush(stdin);
				gets(chuyentien);
				printf("\nso tien muon chuyen = ");
				fflush(stdin);
				scanf("%d",&sotienmuonchuyen);
				if(sotienmuonchuyen<=taikhoan){
					printf("\nchuyen tien thanh cong cho %s",chuyentien);
					sodu=taikhoan-sotienmuonchuyen;
					printf("\nso du con lai = %d",sodu);}
					else{
					printf("\nso du khong du");}
                break;
		    }
	printf("\nban co muon tiep tuc hay khong Y/N\n");
	fflush(stdin);
	b=getchar();
		    while(b=='Y'){
		printf("nhap lua chon \n");
		printf("nhap 1 de rut tien\n");
		printf("nhap 2 de kiem tra tai khoan\n");
		printf("nhap 3 de chuyen tien \n");
		fflush(stdin);
		scanf("%d",&luachon);
		switch(luachon){
			case 1:
			printf("nhap so tien can rut");
			fflush(stdin);
			scanf("%d",&tiencanrut);
			    if(tiencanrut<=taikhoan){
			    	printf("rut tien thanh cong : %d\n",tiencanrut);
					sodu=taikhoan-tiencanrut;
					printf("so du con lai = %d",sodu);}
			    	else
			    	printf("tai khoan cua ban khong du tien\n");
					break;
			case 2:
		       	printf("so tien cua ban la = %d\n",taikhoan);
			    break;
			case 3:
				printf("\nnhap stk muon chuyen : ");
				fflush(stdin);
				gets(chuyentien);
				printf("\nso tien muon chuyen = ");
				fflush(stdin);
				scanf("%d",&sotienmuonchuyen);
				if(sotienmuonchuyen<=taikhoan){
					printf("\nchuyen tien thanh cong cho %s",chuyentien);
					sodu=taikhoan-sotienmuonchuyen;
					printf("\nso du con lai = %d",sodu);}
					else{
					printf("\nso du khong du");}
                break;
		    }
		    printf("\nban co muon tiep tuc hay khong Y/N\n");
		    fflush(stdin);
		    b=getchar();
		    if(b =='N'){
		    	printf("\nket thuc chuong trinh");}
			}
			}else{
			printf("khoa the");
		}}
		
		
		
	
