#include<iostream>
#include<limits.h>

using namespace std;
void Insert(int ary[],int hFn, int Size){
int element,pos,n=0;
cout&lt;&lt;&quot;Enter key element to insert\n&quot;;
cin&gt;&gt;element;
pos = element%hFn;
while(ary[pos]!= INT_MIN) {
if(ary[pos]== INT_MAX)
break;
pos = (pos+1)%hFn;
n++;
if(n==Size)
break;
}
if(n==Size)
cout&lt;&lt;&quot;Hash table was full of elements\nNo Place to insert this
element\n\n&quot;;
else
ary[pos] = element;
}
void display(int ary[],int Size){
int i;
cout&lt;&lt;&quot;Index\tValue\n&quot;;

for(i=0;i&lt;Size;i++)
cout&lt;&lt;i&lt;&lt;&quot;\t&quot;&lt;&lt;ary[i]&lt;&lt;&quot;\n&quot;;
}
int main(){
int Size,hFn,i,choice;
cout&lt;&lt;&quot;Enter size of hash table\n&quot;;
cin&gt;&gt;Size;
hFn=Size;
int ary[Size];
for(i=0;i&lt;Size;i++)
ary[i]=INT_MIN;
do{
cout&lt;&lt;&quot;Enter your choice\n&quot;;
cout&lt;&lt;&quot; 1-&gt; Insert\n 2-&gt; Display\n 0-&gt; Exit\n&quot;;
cin&gt;&gt;choice;
switch(choice){
case 1:
Insert(ary,hFn,Size);
break;
case 2:
display(ary,Size);
break;
default:
cout&lt;&lt;&quot;Enter correct choice\n&quot;;
break;

}
}while(choice);
return 0;
}
