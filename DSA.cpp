#include <iostream>
#include <conio.h>
#include <stdlib.h>
void Traverse (int A[], int , int);
void Insertion();
void Deletion();
void Linear_Multi (int A[], int , int , int );
void Linear_Single (int A[], int , int , int);
void Binary_Single ( );
void Binary_Multi ();
void Bubble_SortA();
void Bubble_SortD();
void Selection_SortA();
void Selection_SortD();
void Insertion_SortA();
void Insertion_SortD();
void Shell_SortA();
void Shell_SortD();
void MergingA(int A[], int , int B[], int , int C[], int);
void MergeSort_SubA(int , int);
void MergeSortA();
void MergeA(int , int, int);
void MergingD(int A[], int , int B[], int , int C[], int);
void MergeSort_SubD(int , int);
void MergeSortD();
void MergeD(int , int, int);
void QuickSort_SubA(int A[] ,int ,int);
void QuickSortA ();
int PartitionA (int A[], int ,int);
void QuickSort_SubD(int A[] ,int ,int);
void QuickSortD (int A[], int ,int);
int PartitionD (int A[], int ,int);
void Push (int st[], int, int, int&, int);
void Pop (int st[], int, int&, int);
void SQueue_Insert (int Q[], int, int, int&, int&, int);
void SQueue_Delete (int Q[], int, int&, int& ,int);
void CQueue_Insert (int CQ[], int, int&, int&, int, int);
void CQueue_Delete (int CQ[], int, int&, int&, int);
struct SLL
		{
			int info;
			SLL*next;
		};
	SLL* sll_start = NULL;
	SLL* sll_top=NULL;
	SLL* sll_F=NULL;
	SLL* sll_R=NULL;
struct DLL
       {
       	int info;
       	DLL*next;
       	DLL*prev;
	   };
	DLL* dll_start =NULL;
	DLL* dll_top=NULL;
	DLL* dll_F=NULL; 
	DLL* dll_R=NULL;
void Traverse_SLL();
void Determine_Length_SLL();
void Insertion_AtLast_SLL ();
void Insertion_AtFirst_SLL ();
void Insertion_InMiddle_BGN_SLL ();
void Insertion_InMiddle_AGN_SLL ();
void Insertion_InMiddle_BMidN_SLL ();
void Insertion_InMiddle_AMidN_SLL ();
void Insertion_InSortedList_Asscending_SLL ();
void Deletion_AtFirst_SLL ();
void Deletion_AtLast_SLL ();
void Deletion_InMiddle_SearchedNode_SLL ();
void Deletion_InMiddle_ExactMiddleNode_SLL ();
void Traverse_DLL ();
void Insertion_AtFirst_DLL ();
void Insertion_AtLast_DLL ();
void Insertion_InMiddle_BGN_DLL ();
void Insertion_InMiddle_AGN_DLL ();
void Insertion_InMiddle_BMidN_DLL ();
void Insertion_InMiddle_AMidN_DLL ();
void Insertion_InSortedList_Asscending_DLL ();
void Deletion_AtFirst_DLL ();
void Deletion_AtLast_DLL ();
void  Deletion_InMiddle_SearchedNode_DLL ();
void Deletion_InMiddle_ExactMiddleNode_DLL ();
void Display_Stack();
void Push_SLL ();
void Pop_SLL ();
void Display_StackD ();
void Push_DLL ();
void Pop_DLL ();
void Display_Queue ();
void EnQueue_SLL ();
void DeQueue_SLL ();
void Display_QueueD ();
void EnQueue_DLL ();
void DeQueue_DLL ();
int A[10] , size = 10, NA=0, K , LB=0, Item, B[10]={1,9,7,3,11,5,17,15,19,13}, NB=0, C[20], NC=0, low, high, mid , top=0, R, F, st[10], SQ[10] , CQ[10],chll,SItem; //Left[10] , Right[10];

using namespace std;
int main()
{
	int ch;
		do
	{
	cout<<"\n*MENU*";
	cout<<"\nSelect Operation\n";
	cout<<" 1- Array\n 2- Stack\n 3- Queue\n 4- Linked List\n 5- Exit\n";
	cout<<"Enter your Choice: ";
	cin>>ch;
	switch (ch)
	{
	 case 1:
	 		cout<<" 1- Traversing\n 2- Insertion\n 3- Deletion\n 4- Searching\n 5- Sorting\n 6- Exit\n";
	 		cout<<"\nEnter your Choice: ";
	 		cin>>chll;
	  switch (chll)
	   {
		case 1: 
		   Traverse(A, LB, NA);
		   break;
		case 2: 
	       cout<<"\nEnter Index where you Want to Insert: ";
		   cin>>K;
		   cout<<"\nWhat you want to Insert: ";
		   cin>>Item;
		   Insertion();
		   break;
		case 3:
		   cout<<"\nEnter Index where you Want to Delete: ";
		   cin>>K;
		   Deletion();
		break;
		case 4: 
		  int chh;
		  cout<<"\nWhich type of searching you Want: ";
		  cout<<"\n 1- Linear\n 2- Binary\n";
		  cout<<"\nEnter choice: ";
		  cin>>chh;
	   	switch(chh)
	   	{
			case 1:
			int	cl;
			cout<<"\n 1- Single\n 2- Multiple\n";
			cout<<"\nEnter choice: ";
			cin>>cl;
			  switch (cl)
			 {
			 	case 1:
			 		cout<<"\nWhat you want to Search: ";
			 		cin>>Item;
			 		Linear_Single (A, NA, LB, Item);
			 	break;
			 	case 2:
			 		cout<<"\nWhat you want to Search: ";
			 		cin>>Item;
			 	    Linear_Multi(A,NA,LB,Item);
			    break;
			    default:
			    	cout<<"\nInvalid...\n";
			    break;
			   	
			 } 	
			break;
			case 2:
				int	cb;
			cout<<"\n 1- Single\n 2- Multiple\n";
			cout<<"\nEnter choice: ";
			cin>>cb;
			  switch (cb)
			 {
			 	case 1:
			 		cout<<"\nWhat you want to Search: ";
			 		cin>>Item;
			 	    Binary_Single ( );
			 	break;
			 	case 2:
			 		cout<<"\nWhat you want to Search: ";
			 		cin>>Item;
			 	    Binary_Multi ( );
			    break;
			    default:
			    	cout<<"\nInvalid...\n";
			    break;
			    
			 } 	
		    break;
		}
		break;
		case 5:
			int chs;
			cout<<"\nIn Which order you want to sort: ";
			cout<<"\n 1- Ascending\n 2- Descending\n";
			cout<<"\nEnter choice: ";
			cin>>chs;
			 switch (chs)
			 {
			 	case 1:
			 		int chs1;
			 		cout<<"\nSelect the type of Sorting: ";
			 		cout<<"\n 1- Bubble\n 2- Selection\n 3- Insertion\n 4- Shell\n 5- Merge\n 6- Quick\n" ;
			 		cout<<"\nEnter choice: ";
			 		cin>>chs1;
			 		switch (chs1)
			 		{
			 			case 1:
			 				Bubble_SortA();
			 				main();
			 			break;
			 			case 2:
			 				Selection_SortA();
			 			    main();
			 			break;
			 			case 3:
			 				Insertion_SortA();
			 				main();
			 			break;
			 			case 4:
			 				Shell_SortA();
			 				main();
			 			break;
			 			case 5:
			 			//	Merging(A,NA,B,NB,C,LB);
			 			    MergeSortA();
			 				main();
			 			break;
			 			case 6:
			 				QuickSortA ();
			 				main();
			 			break;
			 			default:
			 				cout<<"\nInvalid\n";
			 			break;
					 }
				break;
		    	case 2:
			 		int chs2;
			 		cout<<"\nSelect the type of Sorting: ";
			 		cout<<"\n 1- Bubble\n 2- Selection\n 3- Insertion\n 4- Shell\n 5- Merge\n 6- Quick\n";
			 		cout<<"\nEnter choice: ";
			 		cin>>chs2;
			 		switch (chs2)
			 		{
			 			case 1:
			 				Bubble_SortD();
			 				main();
			 			break;
			 			case 2:
			 				Selection_SortD();
			 				main();
			 			break;
			 			case 3:
			 				Insertion_SortD();
			 				main();
			 			break;
			 			case 4:
			 				Shell_SortD();
			 				main();
			 			break;
			 			case 5:
			 				MergeSortD ();
			 				main();
			 			break;
			 			case 6:
			 				QuickSortD (A, LB, NA);
			 				main();
			 			break;
			 			default:
			 				cout<<"\nInvalid...\n";
			 				main();
			 			break;
					 }
					 main();
				break;
				default:
					cout<<"\nInvalid Choice...\n";
					main();
				break; 		
			 }
			 main();
		break;
		case 6:
			main();
		break;
		default:
			cout<<"\nInValid Choice...\n";
		break;
	}
	break;
	case 2:
		cout<< " 1- Array\n 2- Linked List\n 3- Exit\n";
		cout<<"\nEnter your choice: ";
		cin>>chll;
		switch (chll)
		{
		 case 1:
			int chS;
			cout<<" 1- Push\n 2- Pop\n";
			cout<<"\nEnter your Choice: ";
			cin>>chS;
			switch (chS)
			{
				case 1:
					cout<<"\nWhat you want to Insert: ";
					cin>>Item;
					Push (st, LB, size, top, Item);
				break;
				case 2:
					Pop (st, LB, top, Item);
				break;
				default:
					cout<<"\nInvalid...\n";
				break;
			}
		break;
		case 2:
			cout<<" 1- Push\n 2- Pop\n";
			cout<<"\nEnter your Choice: ";
			cin>>chll;
			switch (chll)
			{
			  case 1:
				cout<<" 1- SLL\n 2- DLL\n";
				cout<<"\nEnter your Choice: ";
				cin>>chll;
				switch (chll)
				{
					case 1:
						cout<<"\nWhat you want to Insert: ";
						cin>>Item;
						Push_SLL ();
						cout<<"\nStack contain: ";
						Display_Stack();
					break;
					case 2:
						cout<<"\nWhat you want to Insert: ";
						cin>>Item;
						Push_DLL ();
						cout<<"\nStack contain: ";
						Display_StackD();
					break;
					default:
						cout<<"\nInValid...";
					break;
				}
			  break;
			  case 2:
				cout<<" 1- SLL\n 2- DLL\n";
				cout<<"\nEnter your Choice: ";
				cin>>chll;
				switch (chll)
				{
					case 1:
						Pop_SLL ();
						cout<<"\nStack contain: ";
						Display_Stack();
					break;
					case 2:
						Pop_DLL ();
						cout<<"\nStack contain: ";
						Display_StackD();
					break;
					default:
						cout<<"\nInValid...";
					break;
				}
			  break;
			  default:
			     cout<<"\nInValid...";
			  break;	
	    	}
	    break;
	    case 3:
	    	main();
	    break;
	    default:
	    	cout<<"\nInValid...\n";
	    break;
		}
	break;
	case 3:
		cout<< " 1- Array\n 2- Linked List\n 3- Exit\n";
		cout<<"\nEnter your choice: ";
		cin>>chll;
		switch (chll)
		{
		 case 1:
				int chQ;
			cout<<" 1- Simple\n 2- Circular\n";
			cout<<"\nSelect the Queue Type: ";
			cin>>chQ;
			switch (chQ)
			{
				case 1:
					int chQs;
					cout<<" 1- Insert\n 2- Delete";
					cout<<"\nWhat you want to do: ";
					cin>>chQs;
					switch (chQs)
					{
						case 1:
							cout<<"\nWhat you want to insert: ";
							cin>>Item;
							SQueue_Insert(SQ, LB, size, F, R, Item);
						break;
						case 2:
							SQueue_Delete(SQ, LB,F,R,Item);
						break;
						default:
							cout<<"\nInvalid...\n";
						break;		
					}
				break;
				case 2:
					int chQc;
					cout<<" 1- Insert\n 2- Delete\n";
					cout<<"\nWhat you want to do: ";
					cin>>chQc;
					switch (chQc)
					{
						case 1:
							cout<<"\nWhat you want to insert: ";
							cin>>Item;
							CQueue_Insert (CQ, LB, R, F, size, Item);
						break;
						case 2:
							CQueue_Delete (CQ,LB, R, F, Item);
					    break;
					    default:
					    	cout<<"\nInvalid...";
					    break;
					}
				break;
				default:
					cout<<"\nInvalid...";
				break;
			}
		break;
		case 2:
			cout<<" 1- EnQueue\n 2- DeQueue\n";
			cout<<"\nEnter your Choice: ";
			cin>>chll;
			switch (chll)
			{
			  case 1:
				cout<<" 1- SLL\n 2- DLL\n";
				cout<<"\nEnter your Choice: ";
				cin>>chll;
				switch (chll)
				{
					case 1:
						cout<<"\nWhat you want to Insert: ";
						cin>>Item;
						EnQueue_SLL ();
						cout<<"\nQueue after Insertion is: ";
						Display_Queue ();
					break;
					case 2:
						cout<<"\nWhat you want to Insert: ";
						cin>>Item;
						EnQueue_DLL ();
						cout<<"\nQueue after Insertion is: ";
						Display_QueueD ();
					break;
					default:
						cout<<"\nInValid...";
					break;
				}
			  break;
			  case 2:
				cout<<" 1- SLL\n 2- DLL\n";
				cout<<"\nEnter your Choice: ";
				cin>>chll;
				switch (chll)
				{
					case 1:
						DeQueue_SLL ();
					    cout<<"\nQueue after Deletion is: ";
						Display_Queue ();
					break;
					case 2:
						DeQueue_DLL ();
						cout<<"\nQueue after Deletion is: ";
						Display_QueueD ();
					break;
					default:
						cout<<"\nInValid...";
					break;
				}
			  break;
			  default:
			     cout<<"\nInValid...";
			  break;	
	    	}
		break;
		case 3:
			main();
		break;
		default:
			cout<<"\nInValid...";
		break;
	  }
	break;
	case 4:
			cout<<" 1- Single\n 2- Double\n";
			cout<<"\nEnter your choice: ";
			cin>>chll;
			switch (chll)
			{
				case 1:
					cout<<" 1- Traverse\n 2- Length\n 3- Insertion\n 4- Deletion\n";//" 3- Exit\n";
					cout<<"\nWhat you want to do: ";
					cin>>chll;
					switch (chll)
					{
						case 1:
							Traverse_SLL ();
						break;
						case 2:
							Determine_Length_SLL();
						break;
						case 3:
							cout<<" 1- Start\n 2- Middle\n 3- Last\n";
							cout<<"\nWhere you want to insert: ";
							cin>>chll;
							switch (chll)
							{
							  case 1:
							  	cout<<"\nWhat you want to Insert: ";
							  	cin>>Item;
							  	Insertion_AtFirst_SLL ();
							  	cout<<"\t";
							  	cout<<"\nLinked List After Insertion is: ";
							  	Traverse_SLL();
							  	
							  break;
							  case 2:
							  	cout<<" 1- BGN\n 2- AGN\n 3- BMidN\n 4- AMidN\n 5- Sorted\n";
							  	cout<<"\nWhat you want to do: ";
							  	cin>>chll;
							  	switch (chll)
							  	{
							  	  case 1:
							  	  cout<<"\nWhat you want to Insert: ";
							  	  cin>>Item;
							  	  cout<<"\nBefore Which you want to Insert: ";
							  	  cin>>SItem;
								  Insertion_InMiddle_BGN_SLL ();
								  cout<<"\t";
								  cout<<"\nLinked List After Insertion is: ";
							  	  Traverse_SLL();
								  break;
								  case 2:
								  cout<<"\nWhat you want to Insert: ";
							  	  cin>>Item;
							  	  cout<<"\nAfter which you want to Insert: ";
							  	  cin>>SItem;
								  Insertion_InMiddle_AGN_SLL ();
								  cout<<"\t";
								  cout<<"\nLinked List After Insertion is: ";
							  	  Traverse_SLL();
								  break;
								  case 3:
								  cout<<"\nWhat you want to Insert: ";
								  cin>>Item;
								  Insertion_InMiddle_BMidN_SLL ();
								  cout<<"\t";
								  cout<<"\nLinked List After Insertion is: ";
							  	  Traverse_SLL();
							  	  break;
							  	  case 4:
							  	  cout<<"\nWhat you want to Insert: ";
							  	  cin>>Item;
							  	  Insertion_InMiddle_AMidN_SLL ();
							  	  cout<<"\t";
								  cout<<"\nLinked List After Insertion is: ";
							  	  Traverse_SLL();
							  	  break;
							  	  case 5:
							  	  cout<<"\nWhat you want to Insert: ";
							  	  cin>>Item;
							  	  Insertion_InSortedList_Asscending_SLL ();
							  	  cout<<"\t";
								  cout<<"\nLinked List After Insertion is: ";
							  	  Traverse_SLL();
							  	  break;
								  default:
								  	cout<<"\nInValid...";
								  break;
								}
							  break;
							  case 3:
							    cout<<"\nWhat you want to Insert: ";
						    	cin>>Item;
							    Insertion_AtLast_SLL ();
							    cout<<"\t";
							  	cout<<"\nLinked List After Insertion is: ";
							  	Traverse_SLL();
							 break;
							 default:
							    cout<<"\nInvalid...";
							 break;	
							}	
						break;
						case 4:
							 	cout<<" 1- Start\n 2- Middle\n 3- End\n";
							 	cout<<"\nFrom where you want to delete: ";
							 	cin>>chll;
							 	switch (chll)
							 	{
							 		case 1:
							 			Deletion_AtFirst_SLL ();
							 			cout<<"\nLinked List After Deletion is: ";
							  	        Traverse_SLL();
							 		break;
							 		case 2:
							 		    cout<<" 1- Searched Node\n 2- ExactMid\n";
							 		    cout<<"\nFrom where you want to delete: ";
							 		    cin>>chll;
							 		    switch (chll)
							 		    {
							 		      case 1:
							 		       cout<<"\nWhat you want to Delete:";
							 		       cin>>Item;
										   Deletion_InMiddle_SearchedNode_SLL ();
										   cout<<"\nLinked List After Deletion is: ";
							  	           Traverse_SLL();	
							  	          break;
							  	          case  2:
							  	            Deletion_InMiddle_ExactMiddleNode_SLL ();
							  	          	cout<<"\nLinked List After Deletion is: ";
							  	            Traverse_SLL();
							  	          break;
							  	          default: 
							  	            cout<<"\nInValid...";
							  	          break;
							  	         }
							 		break;
							 		case 3:
							 			Deletion_AtLast_SLL ();
							 			cout<<"\nLinked List After Deletion is: ";
							  	        Traverse_SLL();
							 		break;
							 		default:
							 			cout<<"\nInvalid...";
							 		break;
								 }
						break;
						default:
							cout<<"\nInvalid...";
						break;
					}
				break;
				case 2:
					cout<<" 1- Traverse\n 2- Insertion\n 3- Deletion\n 4- Exit\n";
				    cout<<"\nWhat you want to do: ";
					cin>>chll;
					switch (chll)
					{
						case 1:
							Traverse_DLL();
						break;
						case 2:
							cout<<" 1- Start\n 2- Middle\n 3- Last\n";
							cout<<"\nWhere you want to insert: ";
							cin>>chll;
							switch (chll)
							{
							  case 1:
							  	cout<<"\nWhat you want to Insert: ";
							  	cin>>Item;
							  	Insertion_AtFirst_DLL ();
							  	cout<<"\t";
							  	cout<<"\nLinked List After Insertion is: ";
							  	Traverse_DLL();
							  	
							  break;
							  case 2:
							  	cout<<" 1- BGN\n 2- AGN\n 3- BMidN\n 4- AMidN\n 5- Sorted\n";
							  	cout<<"\nWhat you want to do: ";
							  	cin>>chll;
							  	switch (chll)
							  	{
							  	  case 1:
							  	 cout<<"\nWhat you want to Insert: ";
							  	  cin>>Item;
							  	  cout<<"\nBefore which you want to Insert: ";
							  	  cin>>SItem;
								  Insertion_InMiddle_BGN_DLL ();
								  cout<<"\t";
								  cout<<"\nLinked List After Insertion is: ";
							  	  Traverse_DLL();
								  break;
								  case 2:
								  cout<<"\nWhat you want to Insert: ";
							  	  cin>>Item;
							  	  cout<<"\nAfter which you want to Insert: ";
							  	  cin>>SItem;
								  Insertion_InMiddle_AGN_DLL ();
								  cout<<"\t";
								  cout<<"\nLinked List After Insertion is: ";
							  	  Traverse_DLL();
								  break;
								  case 3:
								  cout<<"\nWhat you want to Insert: ";
								  cin>>Item;
								  Insertion_InMiddle_BMidN_DLL ();
								  cout<<"\t";
								  cout<<"\nLinked List After Insertion is: ";
							  	  Traverse_DLL();
							  	  break;
							  	  case 4:
							  	  	cout<<"\nWhat you want to Insert: ";
							  	  	cin>>Item;
							  	  	Insertion_InMiddle_AMidN_DLL ();
							  	  	cout<<"\t";
								    cout<<"\nLinked List After Insertion is: ";
							  	    Traverse_DLL();
							  	  break;
							  	  case 5:
							  	  	cout<<"\nWhat you want to Insert: ";
							  	  	cin>>Item;
							  	  	Insertion_InSortedList_Asscending_DLL ();
							  	  	cout<<"\t";
								    cout<<"\nLinked List After Insertion is: ";
							  	    Traverse_DLL();
							  	  break;
								  default:
								  	cout<<"\nInValid...";
								  break;
								}
							  break;
							  case 3:
							    cout<<"\nWhat you want to Insert: ";
						    	cin>>Item;
							    Insertion_AtLast_DLL ();
							    cout<<"\t";
							  	cout<<"\nLinked List After Insertion is: ";
							  	Traverse_DLL();
							 break;
							 default:
							    cout<<"\nInvalid...";
							 break;	
							}	
						break;
						case 3:
							cout<<" 1- Start\n 2- Middle\n 3- End\n";
							 	cout<<"\nFrom where you want to delete: ";
							 	cin>>chll;
							 	switch (chll)
							 	{
							 		case 1:
							 			Deletion_AtFirst_DLL ();
							 			cout<<"\nLinked List After Deletion is: ";
							  	        Traverse_DLL();
							 		break;
							 		case 2:
							 		    cout<<" 1- Searched Node\n 2- ExactMid\n";
							 		    cout<<"\nFrom where you want to delete: ";
							 		    cin>>chll;
							 		    switch (chll)
							 		    {
							 		      case 1:
							 		       cout<<"\nWhat you want to Delete:";
							 		       cin>>Item;
										   Deletion_InMiddle_SearchedNode_DLL ();
										   cout<<"\nLinked List After Deletion is: ";
							  	           Traverse_DLL();	
							  	          break;
							  	          case  2:
							  	          	Deletion_InMiddle_ExactMiddleNode_DLL ();
							  	          	cout<<"\nLinked List After Deletion is: ";
							  	            Traverse_DLL();
							  	          break;
							  	          default: 
							  	            cout<<"\nInValid...";
							  	          break;
										}
							 		break;
							 		case 3:
							 			Deletion_AtLast_DLL ();
							 			cout<<"\nLinked List After Deletion is: ";
							  	        Traverse_DLL();
							 		break;
							 		default:
							 			cout<<"\nInvalid...";
							 		break;
							    }
						break;
						default:
							cout<<"\nInvalid...";
						break;
					}
				break;
				default:
					cout<<"\nInvalid...";
	            break;		
			}
	break;
	case 5:
		main();
	break;
	default:
		cout<<"\nInValid Choice...\n";
	break;
	}
   }
   while (ch!=7);
 }

                                          // ARRAY
// Traversing 
	void Traverse (int A[], int LB, int NA)
	{
		for (int i=LB; i<=NA+LB-1 ; i++)
		{
			cout<<A[i]<<"\t";
		}
	}
// Insertion	
   void Insertion ()
   {
   	if (NA==size)
   	{
      	   cout<<"\nArray is Full\n";
    }
	if (K<LB || K>NA+LB)
	{
   	   cout<<"\nInsertion position is Not Valid\n";
    }
   	for (int i= NA+LB-1 ; i<=K; i++)
   	  {
		A[i]=A[i]+A[i+1];
      } 
      A[K]=Item;
   	  NA=NA+1;
   }
// Deletion
void Deletion ()
{
	if(NA==0)
    	{
    		cout<<"\n Array is Empty \n";
		}
		if(K<LB || K>NA+LB-1)
		{
			cout<<"\n Deletion Position is Not Valid \n";
		}
		else
		{
			for(int i=K+1; i<=NA+LB-1; i++)
			{
				A[i-1]=A[i];
			}
		}
		//cout<<A[K];
		NA=NA-1;	
	
}
	
// Linear Single Search
   void Linear_Single (int A[], int NA, int LB, int Item)
   {
   	for(int i=LB; i<=NA+LB-1; i++)
   	{
   		if (A[i]==Item)
   		{
   			cout<<"\n"<<Item<<" Found"<<" at index "<<i;
	    }
	    else
	    {
	    	cout<<"\n"<<Item<<" Not Found";	
		}
	}
	  
   } 
// Linear Multiple Search  
   void Linear_Multi (int A[], int NA, int LB, int Item)
   {
   	int count=0;
   	for (int i=LB; i<=NA+LB-1; i++)
   	{
	if (A[i]==Item) 
   	  {
   		count= count+1;
      }
    } 
      if (count==0)
      {
    	cout<<"\n"<<Item<<" Not Found\n";
    	
      }
      else 
      {
		cout<<"\n"<<Item<<" Found "<<count<<" times";
   	  }
     
   }	
   
   //Binary Single Search
   void Binary_Single ()
   {
   	 low=LB;
   	 high=NA+LB-1;
   	//while (low<= high)
   	for (int i=low; i<=high; i++)
   	{
   	    mid= int((low+high) /2 );
   		if(Item==A[mid])
   		{
         	cout<<"\n"<<Item<<" Found"<<" at"<<mid;
         	return;
	    }
	    else if (Item>A[mid])
		 {
	       	low=mid+1;
	   	 }
	   	 else 
	   	 {
	   	 	high=mid-1;
		 }
		 
    }
         cout<<"\n"<<Item<<"Not Found\n";
         return;
   }
   //Binary Multiple Search
   void Binary_Multi ()
   {
	
	int count=0;
   	low= LB;
   	high=NA+LB-1;
   	while (low<=high)
   	{	
   		mid= int ((low+high) /2);
   		if (Item==A[mid])
   		{
   			count=1;
   			int i =mid+1;
   			while ((i<=high)&&(A[i]==Item))
   			{
   				count=count+1;
   				i=i+1;
			}
			i= mid-1;
			while ((i>=low)&&(A[i]==Item))
			{
				count=count+1;
				i=i-1;
			}
			cout<<"\n"<<Item<<" Found "<<count<<" Times\n";
			return;
		}
		else if (A[mid]<Item)
		{
			low=mid+1;
		}
		else 
		{
			high=mid-1;
		}
		
	}
	
			if (count==0)
		cout<<"\n"<<Item<<" Not Found";
		return;
   }
   
//Bubble Sorting for Ascending order 
void Bubble_SortA ()
{
	int last= NA+LB-1;
	for (int j=LB; j<=NA-1; j++)
   //while (N-1)
	{
		for (int i=LB; i<=last-1; i++)
		{
			if (A[i]>A[i+1])
			{
				int t;
				t=A[i];
				A[i]=A[i+1];
				A[i+1]=t;
			}
		}
	 last =last-1;
	}
}
//Bubble Sorting for Descending Order
void Bubble_SortD ()
{
	int last= NA+LB-1;
  for (int j=LB; j<=NA-1; j++)
  // while (N-1)
	{
		for (int i=LB; i<=last-1; i++)
		{
			if (A[i]<A[i+1])
			{
				int q;
				q=A[i];
				A[i]=A[i+1];
				A[i+1]=q;
			}
		}
	 last =last-1;
	}
}
//Selection Sorting for Ascending Order
void Selection_SortA ()
{
	int First=LB;
		//while (NA-1)
		for(int i=LB;i<=(NA-1);i++)
		{
			int minloc=First;
			for (int i=(First+1); i<=(NA+LB-1); i++)
			{
				if (A[minloc]>A[i])
				{
					minloc=i;
				}
			}
				int r;
				r=A[minloc];
				A[minloc]=A[First];
				A[First]=r;
				First=First+1;
		}
}
//Selection Sorting for Descending Order
void Selection_SortD ()
{
	int First=LB;
		//while (NA-1)
		for(int i=LB;i<=(NA-1);i++)
		{
			int maxloc=First;
			for (int i=First+1; i<=NA+LB-1; i++)
			{
				if (A[maxloc]<A[i])
				{
					maxloc=i;
				}
			}
				int s;
				s=A[First];
				A[First]=A[maxloc];
				A[maxloc]=s;
				First=First+1;
		}
}
//Insertion Sorting for Ascending Order
void Insertion_SortA()
{
		for(int last=(LB+1);last<=(NA+LB-1);last++)
		{
		int	min=A[last];
		int	i=last-1;
			while((i>=LB)&&(A[i]>min))
			{
				A[i+1]=A[i];
				i=i-1;
			}
			A[i+1]=min;
		//	last=last+1;
		}
}
//Insertion Sorting for Descending Order
void Insertion_SortD()
{
		for(int last=(LB+1);last<=(NA+LB-1);last++)
		{
			int i;
			int	max=A[last];
			i=last-1;
			while((i>=LB)&&(A[i]<max))
			{
				A[i+1]=A[i];
				i=i-1;
			}
			A[i+1]=max;
		}
}
//Shell Sorting for Ascending Order
void Shell_SortA()
{
	int Gap=int(NA/2);
	while (Gap!=0)
	{
		//int last=LB+Gap;
		for (int last=LB+Gap;last<NA+LB-1;last++)
		{
			int min=A[last];
		   int i=last-Gap;
			while ((i>=LB)&&(A[i]>min))
			{
				A[i+Gap]=A[i];
				i=i-Gap;
			}
		   A[i+Gap]=min;
		}
		Gap=int(Gap/2);
	}
}
//Shell Sorting for Descending Order
void Shell_SortD()
{
	int Gap=int(NA/2);
	while (Gap!=0)
	{
		//int last=LB+Gap;
		for (int last=LB+Gap;last<NA+LB-1;last++)
		{
			int max=A[last];
		   int i=last-Gap;
			while ((i>=LB)&&(A[i]<max))
			{
				A[i+Gap]=A[i];
				i=i-Gap;
			}
		   A[i+Gap]=max;
		}
		Gap=int(Gap/2);
	}
}

// Merge Sort in Ascending Order
void MergeSortA()
{
	  low=LB;
	  high=(NA+LB-1);
	MergeSort_SubA(low, high);
		cout<<"now the array is\n";
	for(int i=LB;i<=NA+LB-1;i++)
	{
		cout<<A[i]<<"\t";
	}   
}
void MergeSort_SubA(int low, int high)
{
	if(low<high)
	{
	int	mid=(low+high)/2;
       MergeSort_SubA(low,mid);
        MergeSort_SubA((mid+1),high);
         MergeA(low,mid,high);
         //	cout<<"now the array is\n";
	}
}

void MergeA(int low,int mid,int high)
{
int NL=(mid-low+1);
int NR=(high-mid);
int L[NL];
int R[NR];
 K=LB;
for(int i=low;i<=mid;i++)
{
	L[K]=A[i];
	K=K+1;
}
int q=LB;
for( int i=(mid+1);i<=high;i++)
{
	R[q]=A[i];
	q=q+1;
}
int PTRL=LB;
int PTRR=LB;
int PTRA=low;
while(PTRL<=(NL+LB-1) && PTRR <=(NR+LB-1) )
{
	if(L[PTRL]<R[PTRR])
	{
		A[PTRA]=L[PTRL];
		PTRL=PTRL+1;
	}
	else
	{
	A[PTRA]=R[PTRR];
		PTRR=PTRR+1;	
	}
		PTRA=PTRA+1;
}
    if(PTRL>(NL+LB-1))
    { 
	for(int i=PTRR;i<=(NR+LB-1);i++ )
	{
		A[PTRA]=R[i];
			PTRA=PTRA+1;		
	}
   }
   else
   {
	for(int i=PTRL;i<=(NL+LB-1);i++ )
	 {
		A[PTRA]=L[i];
			PTRA=PTRA+1;		
     }
   }

}
//Merge Sort in Descending Order
void MergeSortD()
{
	int low=LB;
	int high=(NA+LB-1);
	MergeSort_SubD(low,high);
		cout<<"now the array is\n";
	for(int i=LB;i<=NA+LB-1;i++)
	{
		cout<<A[i]<<"\t";
	}   
}

void MergeSort_SubD(int low,int high)
{
	if(low<high)
	{
	int	mid=(low+high)/2;
       MergeSort_SubD(low,mid);//left side range
        MergeSort_SubD((mid+1),high);//right side range
         MergeD(low,mid,high);//sorted both sides of array
         //	cout<<"now the array is\n";
	}
}

void MergeD(int low,int mid,int high)
{
int NL=(mid-low+1);
int NR=(high-mid);
int L[NL];
int R[NR];
 K =LB;//fill the left
  for(int i=low;i<=mid;i++)
 {
	L[K]=A[i];
	K=K+1;
 }
int q=LB;//fill the right
  for( int i=(mid+1);i<=high;i++)
 {
	R[q]=A[i];
	q=q+1;
 }
int PTRL=LB;
int PTRR=LB;
int PTRA=low;
//PTRA=&LB;PTRB=&LB;PTRB=&LB;
while(PTRL<=(NL+LB-1) && PTRR <=(NR+LB-1) )
{
	if(L[PTRL]>R[PTRR])
	{
		A[PTRA]=L[PTRL];
		PTRL=PTRL+1;
	}
	else
	{
	A[PTRA]=R[PTRR];
		PTRR=PTRR+1;	
	}
		PTRA=PTRA+1;
}
 if(PTRL>(NL+LB-1))
 {
	for(int i=PTRR;i<=(NR+LB-1);i++ )
	{
		A[PTRA]=R[i];
			PTRA=PTRA+1;		
	}
 }
 else
 {
		for(int i=PTRL;i<=(NL+LB-1);i++ )
		
	{
		A[PTRA]=L[i];
			PTRA=PTRA+1;		
   }
 }

}

//Quick Sort for Ascending Order
void QuickSort_SubA(int A[], int Low, int High)
{
	if (Low<High)
	{
	int index= PartitionA (A,Low,High);
	QuickSort_SubA(A,Low,index-1);
	QuickSort_SubA(A,index+1,High);
    }
}
void QuickSortA ()
{
	low= LB;
	high= NA+LB-1;
	QuickSort_SubA (A,low,high);
}
int PartitionA (int A[], int Low, int High)
{
	int Pivot=A[Low];
	int i=Low+1;
	int j=High;
	while (i<j)
	{
    	while ((i<=High)&&(A[i]<=Pivot))
    	{
		i=i+1;
    	}
    	while (A[j]>Pivot)
    	{
    		j=j-1;
		}
	    if (i<j)
	    {
	    	int t;
	    	A[j]=t;
	    	A[j]=A[i];
	    	A[i]=t;
		}
		else
		{
		 int s;
		 A[Low]=s;
		 A[Low]=A[j];
		 A[j]=s;
		}
   }
   return (j);
}
//Quick Sort for Descending order
void QuickSort_SubD(int A[], int Low, int High)
{
	if (Low<High)
	{
	int index= PartitionD (A,Low,High);
	QuickSort_SubD(A,Low,index-1);
	QuickSort_SubD(A,index+1,High);
    }
}
void QuickSortD (int A[], int LB, int N)
{
	low= LB;
	high= N+LB-1;
	QuickSort_SubD (A,low,high);
}
int PartitionD (int A[], int low, int high)
{
	int Pivot=A[low];
	int i=low+1;
	int j=high;
	while (i<j)
	{
    	while ((i<=high)&&(A[i]>=Pivot))
    	{
		i=i+1;
    	}
    	while (A[j]<Pivot)
    	{
    		j=j-1;
		}
	    if (i<j)
	    {
	    	int t;
	    	A[j]=t;
	    	A[j]=A[i];
	    	A[i]=t;
		}
		else
		{
		 int s;
		 A[low]=s;
		 A[low]=A[j];
		 A[j]=s;
		}
   }
   return j;
}
// Insertion in Stack 
void Push (int st[], int LB, int Size, int& top, int Item)
{
	if (top==Size+LB-1)
	{
		cout<<"\n Stack is full";
		return;
	}
	top=top+1;
	st[top]=Item;
    cout<<"Elements in Stack are: ";
    for (int i=top; i>LB; i--)
    {
    	cout<<st[i]<<"\t";
	}
}
// Deletion in Stack
void Pop (int st[], int LB, int& top, int Item)
{
	if (top==LB-1)
	{
		cout<<"\nStack is Empty\n";
		return;
	}
	st[top]=Item;
	cout<<"\nDeleted item is: "<<st[top]<<"\n";
	top=top-1;
	cout<<"Elements in Stack are: ";
    for (int i=top; i>LB; i--)
    {
    	cout<<st[i]<<"\t";
	} 
}
// Simple Queue Insertion
void SQueue_Insert(int SQ[], int LB, int size, int& F, int& R, int Item)
{
	if (R==size+LB-1)
	{
		cout<<"\nNo more insertion is possible in Queue";
		return;
	}
	if (R==LB-1)
	{
		R=LB;
		F=LB;
	}
	else
	{
		R=R+1;
	}
	SQ[R]=Item;
   	cout<<"now elements in Queue are: ";
    for(int i=F+1;i<=R;i++)
	{
		cout<<SQ[i]<<"\t";
    }
    
}
// Simple Queue Deletion
void SQueue_Delete(int SQ[], int LB, int& F, int& R, int Item )
{
	if (F==LB-1)
	{
		cout<<"\nQueue is Empty";
		return;
	}
	SQ[F]=Item;
	if (F==R)
	{
		F=LB-1;
		R=LB-1;
	}
	else
	{
		F=F+1;
	}
	cout<<"now elements in Queue are: ";
    for(int i=F+1;i<=R;i++)
	{
		cout<<SQ[i]<<"\t";
    }

}

// Circular Queue Insertion
void CQueue_Insert (int CQ[], int LB, int& R, int& F, int size, int Item)
{
	if (((R==size+LB-1)&&(F==LB))||(R==F-1))
	{
		cout<<"\nNo more Insertion is possible\n";
		return;
	}
	if (R==LB-1)
    {
    	R=LB;
    	F=LB;
	}
	  else if (R==size+LB-1)
    	{
	    	R=LB;
	    }
	  else
	   {
		   R=R+1;
	   }
	CQ[R]=Item;
	cout<<"now elements in Queue are\n";
    for(int i=F;i<=R;i++)
	{
		cout<<CQ[i]<<"\t";
    }
}
// Circular Queue_Deletion

void CQueue_Delete (int CQ[], int LB, int& R, int& F, int Item)
{
	if (F==LB-1)
	{
		cout<<"\nQueue is Empty\n";
		return;
	}
	CQ[F]=Item;
	if (R==F)
	{
		R=LB-1;
		F=LB-1;
	}
	 else if (F==size+LB-1)
	 {
	 	F=LB;
	 }
	  else 
	  {
	  	F=F+1;
	  }
	  cout<<"now elements in Queue are\n";
    for(int i=F;i<=R;i++)
	{
		cout<<CQ[i]<<"\t";
    }
}

                                              // SINGLE LINKED LIST 
// Traversing
void Traverse_SLL ()
{
	if (sll_start==NULL)
	{
		cout<<"\nSLL is Empty...";
		return;
	}
	SLL* ptr= sll_start;
	while (ptr != NULL)
	{
	    cout<<ptr->info<<"\t";	
		ptr= ptr ->next;
	}
	
}
// Length of Linked List
void Determine_Length_SLL()
{
	int count=0;
	SLL*ptr=sll_start;
	while(ptr!=NULL)
	{
		count=count+1;
		ptr=ptr->next;
	}
	cout<<"\nNumber of elements in Linked List are: "<<count;
	return;
}
// Insertion
  // At Last
void Insertion_AtLast_SLL ()
{
	SLL* ptr= (SLL*)malloc(sizeof(SLL));
	ptr-> info= Item;
	ptr->next= NULL;
	SLL* ptr1=sll_start;
	if (ptr1==NULL)
	{
		sll_start=ptr;
	}
	else
	{
	   while (ptr1->next !=NULL)
	  {
		ptr1= (ptr1->next);
      }
      
    } 
	ptr1->next=ptr;
	return;
}
  //At First
void Insertion_AtFirst_SLL ()
{
	SLL* ptr=(SLL*)malloc(sizeof(SLL));
	ptr->info =Item;
	ptr->next =sll_start;
	sll_start=ptr;
	return;
}
  //In Middle 
    //before given node
/*void Insertion_InMiddle_BGN_SLL ()
{
  	SLL*ptr=sll_start;
  	bool found=false;
  	while (ptr !=NULL)
  	{ 
  	   if (ptr->info==node)
  	   {
  	     found=true;
  	     break;
       }
       ptr= ptr->next;
	}
	if (!found)
	{
		cout<<"\nNode not found";
		return;
	}
	if (ptr==sll_start)
	{
		cout<<"\nWhat you want to insert: ";
		cin>>Item;
		Insertion_AtFirst_SLL();
		return;
	}
	SLL* ptr1=(SLL*)malloc(sizeof(SLL));
	ptr1->info =Item;
  	SLL* ptr2= sll_start;
  	while (ptr2->next != ptr)
  	{
  		ptr2= ptr2->next;
	}
	ptr2->next=ptr1;
	ptr1->next=ptr;
	cout<<"\nNode inserted Successfully";
	return;
}*/
void Insertion_InMiddle_BGN_SLL ()
{
	SLL*ptr=sll_start;
	while ((ptr!=NULL)&&(ptr->info!=SItem))
	{
		ptr=ptr->next;
	}
	if (ptr==NULL)
	{
		cout<<"\nRequired Item Does Not Found";
		return;
	}
	SLL*ptr1=(SLL*)malloc(sizeof(SLL));
	ptr1->info=Item;
	ptr1->next=ptr;
	if (ptr==sll_start)
	{
		sll_start=ptr1;
		return;
	}
	SLL*ptr2=sll_start;
	while (ptr2->next!=ptr)
	{
		ptr2=ptr2->next;
	}
	ptr2->next=ptr1;
	return;
}
   //after given node
void Insertion_InMiddle_AGN_SLL ()
{
	SLL*ptr=sll_start;
	while ((ptr!=NULL)&&(ptr->info!=SItem))
	{
		ptr=ptr->next;
	}
	if (ptr==NULL)
	{
		cout<<"\nRequired Item Does Not Found";
		return;
	}
	SLL*ptr1=(SLL*)malloc(sizeof(SLL));
	ptr1->info=Item;
	ptr1->next=ptr->next;
	ptr->next=ptr1;
	return;
}
  //BMidN
void Insertion_InMiddle_BMidN_SLL ()
{
	int count=0;
	SLL*ptr=sll_start;
	while (ptr!=NULL)
	{
		count=count+1;
		ptr=ptr->next;
	}
	mid =int (count/2)+1;
	ptr=(SLL*)malloc(sizeof(SLL));
	ptr->info=Item;
	if ((count==0)||(count==1))
	{
		ptr->next=sll_start;
		sll_start=ptr;
		return;
	}
	SLL*ptr1=sll_start;
	for(int i=0; i<mid-2; i++)
	{
		ptr1=ptr1->next;
	}
	ptr->next=ptr1->next;
	ptr1->next=ptr;
	return;
}
  //AMidN
void Insertion_InMiddle_AMidN_SLL ()
{
	int count=0;
	SLL*ptr=sll_start;
	while (ptr!=NULL)
	{
		count=count+1;
		ptr=ptr->next;
	}
	mid= int (count/2)+1;
	ptr=(SLL*)malloc(sizeof(SLL));
	ptr->info=Item;
	if (count==0)
	{
		ptr->next=NULL;
		sll_start=ptr;
		return;
	}
	SLL*ptr1=sll_start;
	for (int i=0; i<mid-1; i++)
	{
		ptr1=ptr1->next;
	}
	ptr->next=ptr1->next;
	ptr1->next=ptr;
	return;
}
 // Ascending 
void Insertion_InSortedList_Asscending_SLL ()
{
 	SLL*ptr=sll_start;
 	while ((ptr!=NULL)&&(ptr->info<Item))
 	{
 		ptr=ptr->next;
	}
	SLL*ptr1=(SLL*)malloc(sizeof(SLL));
	ptr1->info=Item;
	if (ptr==NULL)
	{
		ptr->next=NULL;
		if (sll_start==NULL)
		{
			sll_start=ptr1;
			return;
		}
		SLL*ptr2=sll_start;
		while (ptr2->next!=NULL)
	    {
		 ptr2=ptr2->next;
	    }
	   ptr2->next=ptr1;
	   return;	
	}
	if (ptr==sll_start)
	{
		ptr1->next=sll_start;
		sll_start=ptr1;
		return;
	}
	SLL*ptr2=sll_start;
	while (ptr2->next!=ptr)
	{
		ptr2=ptr2->next;
	}
	ptr2->next=ptr1;
	ptr1->next=ptr;
	return;
}
// Deletion
  // At First
void Deletion_AtFirst_SLL ()
{
	if (sll_start==NULL)
	{
		cout<<"\nSLL Is Empty...";
		return;
	}
	SLL*ptr=sll_start;
	sll_start=ptr->next;
	cout<<"\nData in Deleted Node: "<<ptr->info;
	delete (ptr);
	return;
}
  // At Last
void Deletion_AtLast_SLL ()
{
	if (sll_start==NULL)
	{
		cout<<"\nSLL is Empty";
		return;
	}
	if (sll_start->next==NULL)
	{
		delete (sll_start);
		sll_start=NULL;
		return;
	}
	SLL*ptr=sll_start;
	while (ptr->next->next!= NULL)
	{
		ptr=ptr->next;
	}
	delete (ptr->next);
	ptr->next=NULL;
	return;
}
  //From Middle
    //Searched Node
void  Deletion_InMiddle_SearchedNode_SLL ()
{
	SLL*ptr=sll_start;
	while ((ptr!=NULL)&&(ptr->info!=Item))
	{
		ptr=ptr->next;
	}
	if (ptr==NULL)
	{
		cout<<"\nItem Not Found";
		return;
	}
	if (ptr==sll_start)
	{
		sll_start=ptr->next;
		delete (ptr);
		return;
	} 
	SLL*ptr1=sll_start;
    while (ptr1->next!=ptr)
	{
		ptr1=ptr1->next;
	}
	ptr1->next=ptr->next;
	delete(ptr);
	return;
}
    //Exact Mid
void Deletion_InMiddle_ExactMiddleNode_SLL ()
{
	int count=0;
	SLL*ptr=sll_start;
	while (ptr!=NULL)
	{
		count=count+1;
		ptr=ptr->next;
	}
	mid= int (count/2)+1;
	if (count==0)
	{
		cout<<"\nSLL is Empty...";
		return;
	}
	if (count==1)
	{
	 delete (sll_start);
	 sll_start=NULL;
	 return;
	}
	ptr=sll_start;
	for (int i=0; i<mid-2; i++)
	{
		ptr=ptr->next;
	}
	SLL*ptr1=ptr->next;
	ptr->next=ptr1->next;
	delete (ptr1);
	return;
}
                           //DOUBLE LINKED LIST
  //Traverse
void Traverse_DLL ()
{
	if (dll_start==NULL)
	{
		cout<<"\nDLL is Empty...";
		return;
	}
	DLL* ptr=dll_start;
	while (ptr!=NULL)
	{
		cout<<ptr->info;
		cout<<"\t";
		ptr=ptr->next;
	}
	return;
}
  //Insertion
    //At First
void Insertion_AtFirst_DLL ()
{
 	DLL* ptr=(DLL*)malloc(sizeof(DLL));	
 	ptr->info=Item;
 	ptr->next=dll_start;
 	ptr->prev=NULL;
 	dll_start=ptr;
 	return;
}
  //At Last
void Insertion_AtLast_DLL ()
{
  DLL* ptr=(DLL*)malloc(sizeof(DLL));	
  ptr->info=Item;
  ptr->next=NULL;
  if (dll_start==NULL)
  {
  	ptr->prev=NULL;
  	dll_start=ptr;
  	return;
  }	
  DLL*ptr1=dll_start;
  while (ptr1->next!=NULL)
  {
  	ptr1=ptr1->next;
  }
  ptr1->next=ptr;
  ptr->prev=ptr1;
}
  //In Middle
   //Before
void Insertion_InMiddle_BGN_DLL ()
{
	DLL*ptr=dll_start;
	while ((ptr!=NULL)&&(ptr->info!=SItem))
	{
		ptr=ptr->next;
	}
	if (ptr==NULL)
	{
		cout<<"\nRequired Item Not Found";
		return;
	}
	DLL*ptr1=(DLL*)malloc(sizeof(DLL));
	ptr1->info=Item;
	ptr1->next=ptr;
	ptr1->prev=ptr->prev;
	ptr->prev=ptr1;
	if (ptr1->prev==NULL)
	{
		dll_start=ptr1;
	}
	else
	{
		ptr1->prev->next=ptr1;
	}
	
	
	return;
}
  //After
 void Insertion_InMiddle_AGN_DLL ()
 {
 	DLL*ptr=dll_start;
 	while ((ptr!=NULL)&&(ptr->info!=SItem))
 	{
 		ptr=ptr->next;
	 }
	 if (ptr==NULL)
	 {
	 	cout<<"\nRequired Item Not Found";
	 	return;
	 }
	 DLL*ptr1=(DLL*)malloc(sizeof (DLL));
	 ptr1->info=Item;
	 ptr1->next=ptr->next;
	 if (ptr->next!=NULL)
	 {
	 	ptr->next->prev=ptr1;
	 }
	 ptr1->prev=ptr;
	 ptr->next=ptr1;
	 return;
  } 
   //Before Exactly Middle
void Insertion_InMiddle_BMidN_DLL ()
{
	int count=0;
	DLL*ptr=dll_start;
	while (ptr!=NULL)
	{
		count=count+1;
		ptr=ptr->next;
	}
	mid=int (count/2)+1;
	ptr=(DLL*)malloc(sizeof(DLL));
	ptr->info=Item;
	if (count==0)
	{
		ptr->next=NULL;
		dll_start->prev=NULL;
		dll_start=ptr;
		return;
	}
	if (count==1)
	{
		ptr->next=dll_start;
		dll_start->prev=ptr;
		ptr->prev=NULL;
		dll_start=ptr;
		return;
	}
	DLL*ptr1=dll_start;
	for (int i=0; i<mid-1; i++)
	{
		ptr1=ptr1->next;
	}
	ptr->next=ptr1;
	ptr->prev=ptr1->prev;
	ptr->prev->next=ptr;
	ptr1->prev=ptr;
	return;
}
  //After Exactly Middle
void Insertion_InMiddle_AMidN_DLL ()
{
	int count=0;
	DLL*ptr=dll_start;
	while (ptr!=NULL)
	{
		count=count+1;
		ptr=ptr->next;
	}
	mid= int (count/2)+1;
	ptr=(DLL*)malloc(sizeof(DLL));
	ptr->info=Item;
	if (count==0)
	{
		ptr->next=NULL;
		ptr->prev=NULL;
		dll_start=ptr;
		return;
	}
	DLL*ptr1=dll_start;
	for (int i=0; i<mid-1; i++)
	{
		ptr1=ptr1->next;
	}
	ptr->next=ptr1->next;
	//ptr->prev=ptr1;
	if (ptr->next!=NULL)
	{
		ptr->next->prev=ptr;
	}
	ptr1->next=ptr;
    ptr->prev=ptr1;
	return;
}
  // Ascending 
void Insertion_InSortedList_Asscending_DLL ()
{
 	DLL*ptr=dll_start;
 	while ((ptr!=NULL)&&(ptr->info<Item))
 	{
 		ptr=ptr->next;
	}
	DLL*ptr1=(DLL*)malloc(sizeof(DLL));
	ptr1->info=Item;
	if (ptr==NULL)
	{
		if (dll_start==NULL)
		{
			ptr1->next=NULL;
		    ptr1->prev=NULL;
			dll_start=ptr1;
			return;
		}
		ptr1->next=NULL;
		DLL*ptr2=dll_start;
		while (ptr2->next!=NULL)
	    {
		 ptr2=ptr2->next;
	    }
	   ptr2->next=ptr1;
	   ptr1->prev=ptr2;
	   return;	
	}
	if (ptr==dll_start)
	{
		ptr1->next=dll_start;
		ptr1->prev=NULL;
		dll_start->prev=ptr1;
		dll_start=ptr1;
		return;
	}
	DLL*ptr2=dll_start;
	while (ptr2->next!=ptr)
	{
		ptr2=ptr2->next;
	}
	ptr2->next=ptr1;
	ptr1->prev=ptr2;
	ptr1->next=ptr;
	ptr->prev=ptr1;
	return;
}
 //Deletion 
   //At First
void Deletion_AtFirst_DLL ()
{
	if (dll_start==NULL)
	{
		cout<<"\nDLL is Empty";
		return;
	}
	DLL*ptr=dll_start;
	dll_start=dll_start->next;
	if (dll_start!=NULL)
	{
		dll_start->prev=NULL;
	}
	delete (ptr);
	return;
}
  //At Last
void Deletion_AtLast_DLL ()
{
	if (dll_start==NULL)
	{
		cout<<"\nDLL is Empty...";
		return;
	}
	if (dll_start->next==NULL)
	{
		delete (dll_start);
		dll_start=NULL;
		return;
	}
	DLL*ptr=dll_start;
	while (ptr->next->next!=NULL)
	{
		ptr=ptr->next;
    }
	delete (ptr->next);
	ptr->next=NULL;
	return;
}
  //In Middle
   //Searched Node
void  Deletion_InMiddle_SearchedNode_DLL ()
{
	DLL*ptr=dll_start;
	while ((ptr!=NULL)&&(ptr->info!=Item))
	{
		ptr=ptr->next;
	}
	if (ptr==NULL)
	{
		cout<<"\nItem Not Found";
		return;
	}
	if (ptr==dll_start)
	{
		dll_start=ptr->next;
		if (dll_start!=NULL)
		{
			dll_start->prev=NULL;
		}
		delete (ptr);
		return;
	} 
	DLL*ptr1=dll_start;
    while (ptr1->next!=ptr)
	{
		ptr1=ptr1->next;
	}
	ptr1->next=ptr->next;
	if (ptr->next !=NULL)
	{
		ptr->next->prev=ptr1;
	}
	delete(ptr);
	return;
}
   //Exact Mid
void Deletion_InMiddle_ExactMiddleNode_DLL ()
{
	int count=0;
	DLL*ptr=dll_start;
	while (ptr!=NULL)
	{
		count=count+1;
		ptr=ptr->next;
	}
	mid= int (count/2)+1;
	if (count==0)
	{
		cout<<"\nDLL is Empty...";
		return;
	}
	if (count==1)
	{
	 delete (dll_start);
	 dll_start=NULL;
	 return;
	}
	DLL*ptr1=dll_start;
	for (int i=0; i<mid-2; i++)
	{
		ptr1=ptr1->next;
	}
	DLL*ptr2=ptr1->next;
	ptr1->next=ptr2->next;
	if (ptr2->next != NULL)
    {
      ptr2->next->prev = ptr1;
    }
	delete (ptr2);
	return;
}
// Stack SLL
 //Display
void Display_Stack()
{
	if (sll_top==NULL)
	{
		cout<<"\nStack is Empty...";
		return;
	}
	SLL* ptr= sll_top;
	while (ptr != NULL)
	{
	    cout<<ptr->info<<"\t";	
		ptr= ptr ->next;
	}
}
 //Insertion

void Push_SLL ()
{
	SLL*ptr=(SLL*)malloc(sizeof(SLL));
	ptr->info=Item;
	ptr->next=sll_top;
	sll_top=ptr;
	return;
}
 //Deletion
void Pop_SLL ()
{
	if (sll_top==NULL)
	{
		cout<<"\nStack is Empty...";
		return;
	}
	SLL* ptr= sll_top;
	sll_top=sll_top->next;
	delete (ptr);
	return;
}
// Stack DLL
 // Display
void Display_StackD ()
{
	if (dll_top==NULL)
	{
		cout<<"\nStack is Empty...";
		return;
	}
	DLL* ptr=dll_top;
	while (ptr!=NULL)
	{
		cout<<ptr->info;
		cout<<"\t";
		ptr=ptr->next;
	}
	return;
}
 //Insertion
void Push_DLL ()
{
	DLL*ptr=(DLL*)malloc(sizeof(DLL));
	ptr->info=Item;
	ptr->prev=NULL;
	ptr->next=dll_top;
	if (dll_top!=NULL)
	{
		dll_top->prev=ptr;
	}
	dll_top=ptr;
	return;
}
 //Deletion
void Pop_DLL ()
{
	if (dll_top==NULL)
	{
		cout<<"\nStack is Empty...";
		return;
	}
	DLL* ptr=dll_top;
	dll_top=dll_top->next;
	if (dll_top!=NULL)
	{
		dll_top->prev=NULL;
	}
	delete (ptr);
	return;
}
// Queue SLL
 // Display
void Display_Queue ()
{
	SLL* ptr;
	if (sll_F==NULL)
	{
		cout<<"\nQueue is Empy...";
		return;
	}
	ptr=sll_F;
	while (ptr!=NULL)
	{
		cout<<ptr->info<<"\t";
		ptr=ptr->next;
	}
	return;
}
 // Insertion
void EnQueue_SLL ()
{
	SLL*ptr=(SLL*)malloc(sizeof(SLL));
	ptr->info=Item;
	ptr->next=NULL;
	if (sll_R==NULL)
	{
		sll_R=ptr;
		sll_F=ptr;
	}
	else
	{
		sll_R->next=ptr;
		sll_R=ptr;
	}
	return;
}
 // Deletion
void DeQueue_SLL ()
{

	if (sll_F==NULL)
	{
		cout<<"\nQueue is Empty...";
		return;
	}
	else
	{
		SLL*ptr=sll_F;
	    sll_F=sll_F->next;
		if (sll_F==NULL)
		{
			sll_R=NULL;
		}
		delete (ptr);
	}
	return;
}
// Queue DLL
 // Display
void Display_QueueD ()
{
	DLL*ptr;
	if (dll_F==NULL)
	{
		cout<<"\nQueue is Empty...";
		return;
	}
	ptr=dll_F;
	while (ptr !=NULL)
	{
		cout<<ptr->info<<"\t";
		ptr=ptr->next;
	}
	return;
}
 // Insertion
 void EnQueue_DLL ()
 {
 	DLL*ptr=(DLL*)malloc(sizeof(DLL));
 	ptr->info=Item;
	ptr->next=NULL;
	ptr->prev=NULL;
	if (dll_R==NULL)
	{
		dll_R=ptr;
		dll_F=ptr;
	}
	else
	{
		dll_R->next=ptr;
		dll_R=ptr->prev;
		dll_R=ptr;
	}
	return;
 }
 // Deletion
void DeQueue_DLL ()
{
	
	if (dll_F==NULL)
	{
		cout<<"\nQueue is Empty...";
		return;
	}
	else
	{
		DLL*ptr=dll_F;
		dll_F=dll_F->next;
		if (dll_F!=NULL)
		{
			dll_F->prev=NULL;
		}
		delete (ptr);
	}
	return;
}
