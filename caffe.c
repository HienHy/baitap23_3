#include<stdio.h>
int main(){
	int luachon,soluong;
	int thanhtien,dongia;
	int sum=0;
	char luachon2;
	do{
	printf("menu bao gom \n");
	printf(" 1 : caffe sua \n");
	printf(" 2 : caffe sua da\n");
	printf(" 3 : caffe den\n");
	printf(" 4 : caffe sua nong\n ");
	printf(" 5 : caffe trung\n");
	scanf("%d",&luachon);
	switch(luachon){
		case 1:
			dongia=30000;
			printf("ban da chon caffe sua gia 30000\n");
			printf("nhap so luong\n");
			scanf("%d",&soluong);
			thanhtien=dongia*soluong;
			printf("so tien la %d X %d = %d\n",dongia,soluong,thanhtien);
			sum+=thanhtien;
			break;
		case 2:
			dongia=35000;
			printf("ban da chon caffe sua da gia 35000\n");
			printf("nhap so luong\n");
			scanf("%d",&soluong);
			thanhtien=dongia*soluong;
			printf("so tien la %d X %d = %d\n",dongia,soluong,thanhtien);
				sum+=thanhtien;
			break;
		case 3:
			dongia=25000;
			printf("ban da chon caffe den gia 25000\n");
			printf("nhap so luong\n");
			scanf("%d",&soluong);
			thanhtien=dongia*soluong;
			printf("so tien la %d X %d = %d\n",dongia,soluong,thanhtien);
				sum+=thanhtien;
			break;
		case 4:
			dongia=30000;
			printf("ban da chon caffe sua nong 30000\n");
			printf("nhap so luong\n");
			scanf("%d",&soluong);
			thanhtien=dongia*soluong;
			printf("so tien la %d X %d = %d\n",dongia,soluong,thanhtien);
				sum+=thanhtien;
			break;
		case 5:
			dongia=45000;
			printf("ban da chon caffe trung gia 45000\n");
			printf("nhap so luong\n");
			scanf("%d",&soluong);
			thanhtien=dongia*soluong;
			printf("so tien la %d X %d = %d\n",dongia,soluong,thanhtien);
				sum+=thanhtien;
			break;}
		printf("ban co muon tiep tuc khong Y/N\n");
		fflush(stdin);
		luachon2=getchar();}
   while(luachon2=='Y');
	if(luachon2 == 'N'){
			printf("so tien ban can thanh toan = %d",sum);}
			
		}
	
			
	
	
	
