#include <stdio.h>
//int main()
//{
//	int arr[100], n,i,j,temp;
//
//  printf("Enter number of elements\n");
//  scanf("%d", &n);
//
//  printf("Enter %d integers\n", n);
//  
//   for (i = 0; i < n; i++)
//    scanf("%d", &arr[i]);
////    int n = 5;
////    int arr[] = {4,5,1,3,6};
//
//    for( i = 0; i < n; i++) {
//        for( j = i + 1; j < n; j++) {
//            if(arr[i] > arr[j]) {
//                temp = arr[i];
//                arr[i] = arr[j];
//                arr[j] = temp;
//            }
//        }
//    }
//    printf("Sorted array: ");
//    for( i = 0; i < n; i++)  {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int n = 10;
//    int a[] = {3,2,6,5,4,7,8,9,5,1};
//    int min_index;
//    for(int i = 0; i < n - 1; i++) {
//        min_index = i;
//        for(int j = i + 1; j < n; j++) {
//            if(a[min_index] > a[j]) {
//                min_index = j;
//            }
//        }
//        if(min_index != i)
//        {
//            int temp = a[i];
//            a[i] = a[min_index];
//            a[min_index] = temp;
//        }
//    }
//    printf("Sorted Array: ");
//    for(int i = 0; i < n; i++)  {
//        printf(" %d", a[i]);
//    }
//    return 0;
//}

int main (){
	int arr[100],n,i,j,sort;
	printf("enter the elements:\n");
	scanf("%d",&n);
	printf("enter the integers:\n");
	
	for(i=0;i<n;i++){
			scanf("%d",&arr[i]);
	}
	for (i=0;i<n;i++){
		for(j=i+1;j< n;j++){
			if(arr[i] >arr[j]){
				sort = arr[i];
				arr[i]=arr[j];
			arr[j]= sort;
			}
		}
	}
	
	printf("sorted array:");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
}
