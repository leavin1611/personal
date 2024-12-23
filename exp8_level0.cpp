#include<stdio.h>
struct phone
{
    int emino;
    char name[30];
    char color[30];
    int modelno;
};
void print(struct phone n)
{
    printf("%d\n",n.emino);
    printf("%s\n",n.name);
    printf("%s\n",n.color);
    printf("%d\n",n.modelno);
}
int main()
{
    struct phone v;
    scanf("%d",&v.emino);
    scanf("%s",&v.name);
    scanf("%s",&v.color);
    scanf("%d",&v.modelno);
    print(v);
}
