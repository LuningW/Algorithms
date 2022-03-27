# vector使用方法
我曾经以为自己对C/C++语言掌握很好，但是随着刷题的不断进行发现自己还是太天真了，很难做到游刃有余。我决定在刷算法提的时候积累一些在课堂上没有教过的但我觉得应该掌握的东西。
> vector是C++标准模板库中的部分内容，它是一个多功能的，能够操作多种数据结构和算法的模板类和函数库。
> 简单来说他就是一个容器，能够存放各种类型的对象，是一个能够存放任意类型的动态数组，可以动态改变大小。
## 定义
* 使用时必须包含头文件#include<vector>
* vector属于std命名域，因此需要通过命名限定
```
 //三种命名域
using std::vector;
using namespace std;
std::vector<int> stud;
```
* vector<类型名> 参数名(长度)；
```
 vector<int> stud(20); 
```
  
## 简单用法
1. 如何访问
```
stud[12]=123;
```
2. 在容器为尾部顺序填充数据
```
for(int i=0;i<20;i++)
{
   stud.push_back(1);//填充1
}
```
3. 动态改变vector大小
```
//把容器的大小改为40
stud.resize(40);
```
4. 向vector中装入自定义数据类型
```
class myclass
{

};
vector<myclass> my_class;
```
5. 定义容器时赋初值
```
//赋初值为0
vector<int> stud(20,0);
```
6. 将一个容器的对象赋给另一个容器
```
vector<int> stud_1(100,0);
vector<int> stud_2;//无需标注容量
stud_2=stud_1;
```
## 其他用法
```
  //定义
  vector<int> c;
  c.clear()  //移除容器中所有数据
  c.empty()  //判断容器是否为空
  c.erase(pos)  //删除pos位置的数据
  c.erase(beg,end)  //删除[beg，end)区间的数据
  c.front()  //传回第一个数据
  c.insert(pos,elem)  //在pos位置插入一个elem
  c.pop_back()  //删除最后一个数据
  c.push_back(elem)  //在尾部加入一个数据elem
  c.resize(num)  //重新设置该容器的大小
  c.size()  //返回容器中实际数据的个数
  c.begin()  //返回指向容器第一个元素的迭代器
  c.end()  //返回指向容器最后一个元素的迭代器
```

## 迭代器iterator
> 迭代器相当于指针，用迭代器操作容器中对象位置的值,当迭代器指向了容器中的某个位置，则可以使用*加迭代器操作该位置了

```
std::vector<int> stud;
for(int j=0;j<10;j++)
{
    stud.push_back(j);
}
std::vector<int>::iterator p;
p++;
*p = 20;
for(p = stud.begin();p!=stud.end();p++)
  {
      *p=50;
  }
                       
```
## 二维vector的定义
> 定义一个二维的动态数组，有10行，每一行都是用vector存储
```
vector<vector<int>> Array(10,vector<int>(0));
//vector<int>(0)是对vector的初始化，否则不能对vector存入元素
```
```
//存入数据
for(int j=0;j<10;j++)
{
   for(int i=0;i<9;i++)
  {
      Arry[j].push_back(i);
  }
}
//输出数据
for(int j=0;j<10;j++)
{
   for(int i=0;i<Arry[j].size();i++)
   {
      cout<<Arry[j][i]<<" ";
   }
}
```

## 定义一个行列都变化的数组
```
vector< vector<int> > Array;
vector< int > line;
for( j = 0; j < 10; j++ )
{
  Array.push_back( line );//要对每一个vector初始化，否则不能存入元素。
  for ( i = 0; i < 9; i++ )
  {
   Array[ j ].push_back( i );
  }
}
for( j = 0; j < 10; j++ )
{
  for( i = 0; i < Array[ j ].size(); i++ )
  {
   cout << Array[ j ][ i ] << " ";
  }
  cout<< endl;
}  
```

