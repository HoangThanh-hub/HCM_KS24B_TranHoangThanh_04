#include <stdio.h>


int main(){
    int n;
    printf("\nNhap so phan tu cho mang: ");
            scanf("%d", &n);
            int array[n];
             for (int i= 0; i < n; i++){
                printf("array[%d]= ",i);
                scanf("%d",&array[i]);
            }

    while(1){
    printf("====================MENU=====================\n");
    printf("1. Nhap so phan tu va gia tri cho mang\n");
    printf("2. In ra gia tri cac phan tu trong mang\n");
    printf("3. Dem so luong cac so hoan hao co trong mang\n");
    printf("4. Tim gia tri lon thu 2 trong mang\n");
    printf("5. Them 1 phan tu vao vi tri ngau nhien trong mang\n");
    printf("6. Xoa phan tu tai 1 vi tri cu the\n");
    printf("7. Sap xep mang theo thu tu tang dan\n");
    printf("8. Cho nguoi dung nhap vao 1 phan tu v a tim kiem phan tu do co ton tai hay khong\n");
    printf("9. Sap xep lai mang va hien thi ra tioan bo phan tu co trong mang sao cho toan bo so chan dung truoc, so le dung sau\n");
    printf("10. Dao nguoc thu tu phan tu co trong mảng\n");
    printf("============================================\n");

    int choice;
    int soCanTim;
    
    
   
    
    printf("\nNhap lua chon cua ban: ");
    scanf("%d",&choice);
    

    switch(choice){
        case 1:{
             printf("\nNhap so phan tu cho mang: ");
            scanf("%d", &n);
            int array[n];
             for (int i= 0; i < n; i++){
                printf("array[%d]= ",i);
                scanf("%d",&array[i]);
            }
            break;
            
        }
        case 2:
            for(int i = 0 ; i<n; i++){
                printf("array[%d]= %d, ", i,array[i]);
            }
            printf("\n");
            break;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
            printf("\nsap xep mang tho thu tu tang dan: ");
            for(int i= 1;i< n; i++){
            int key= array[i];
            int j=i-1;

            while(j>=0 && array[j] > key){
                array[j+1] =array[j];
                j=j-1;
            }
            array[j+1]=key;
            }
            for(int i=0; i< n; i++){
                printf("%d ", array[i]);
            }
            printf("\n\n");
            break;
        case 8:
            
            printf("nhap so can tim: ");
            scanf("%d", &soCanTim);
            int flag = 1;
	        for(int i = 0; i < n; i++){
	        if(array[i] == soCanTim){
			flag =0;
			printf("\n%d duoc tim thay tai vi tri %d \n", soCanTim, i);
			break;
		    }	
	        }
	        if(flag){
		    printf("\nko tim thay gia tri %d trong mang\n", soCanTim);	
        	}
            break;
        case 9:
        case 10:
        default:
             printf("\nkhong hop le ban hay nhap lai \n");
             break;

        
              


    }
    }
    return 0;
}