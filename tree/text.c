#include "bintree.h" 

int main()
{
	int i = 1;
	struct bintree* b = InitBinTree();
	struct Key_Value p[6] = {{'A',0.35},{'B',0.15},{'C',0.1},{'D',0.1},{'E',0.25},{'F',0.05}};
	HuffmanTree(b,p,6); //�ú�������Ĺ��������������ڵ�Ϊ�˱�����ʾ���÷���'$'                                                                                
	K_Vvisit(p,6);       //�������ɵĽڵ���÷���'*'��ʾ�� 
	printf("\n");
	/*InsertRoot(b,Creat_tree_node(10));
	for(i;i<7;i++)
	{
		if(i < 3) InsertChild(b->root,(i+1)%2,Creat_tree_node(p[i]));
		else if(i < 5) InsertChild(b->root->leftchild,(i+1)%2,Creat_tree_node(p[i]));
		else if(i < 7) InsertChild(b->root->rightchild,(i+1)%2,Creat_tree_node(p[i]));
	}*/
	InOrderTraverse(b);
	printf("\n");
	PreOrderTraverse(b);
	printf("\n");
	PostOrderTraverse(b);
	printf("\n"); 
	//LevelOrderTraverse(b);
	DestoryBinTree(b);
}
