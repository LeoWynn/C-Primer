//
//  Primer.cpp
//  C++Primer
//
//  Created by Leo on 17/7/22.
//  Copyright (c) 2017年 Leo Wen. All rights reserved.
//

#include "Primer.h"



/*
 Used for tracking all primer grammar.
*/

void hello();
//标识符，关键字，三字符组
void data_type();
void typedef_usage();
void enumeration_usage();
//初始化局部变量和全局变量
void constant_usage();
//转义序列码
//类型限定符
void storage_class_usage();
//杂项运算符
void for_while_usage();
void cmath_usage();
void random_int();





/*
 对象 - 对象具有状态和行为。例如：一只狗的状态 - 颜色、名称、品种，行为 - 摇动、叫唤、吃。对象是类的实例。
 类 - 类可以定义为描述对象行为/状态的模板/蓝图。
 方法 - 从基本上说，一个方法表示一种行为。一个类可以包含多个方法。可以在方法中写入逻辑、操作数据以及执行所有的动作。
 即时变量 - 每个对象都有其独特的即时变量。对象的状态是由这些即时变量的值创建的。
*/

void hello()
{
    //std::cout << "Hello World"; // 输出 Hello World
    //cont is in std namespace
    cout << "Hello World!\n"; // 输出 Hello World
}


/*
 C++ 标识符
 C++ 标识符是用来标识变量、函数、类、模块，或任何其他用户自定义项目的名称。一个标识符以字母 A-Z 或 a-z 或下划线 _ 开始，后跟零个或多个字母、下划线和数字（0-9）。
 C++ 标识符内不允许出现标点字符，比如 @、$ 和 %。C++ 是区分大小写的编程语言。因此，在 C++ 中，Manpower 和 manpower 是两个不同的标识符。
 
 C++ 关键字
 下表列出了 C++ 中的保留字。这些保留字不能作为常量名、变量名或其他标识符名称。
 asm	else	new	this
 auto	enum	operator	throw
 bool	explicit	private	true
 break	export	protected	try
 case	extern	public	typedef
 catch	false	register	typeid
 char	float	reinterpret_cast	typename
 class	for	return	union
 const	friend	short	unsigned
 const_cast	goto	signed	using
 continue	if	sizeof	virtual
 default	inline	static	void
 delete	int	static_cast	volatile
 do	long	struct	wchar_t
 double	mutable	switch	while
 dynamic_cast	namespace	template
 
 三字符组
 三字符组就是用于表示另一个字符的三个字符序列，又称为三字符序列。三字符序列总是以两个问号开头。
 三字符序列可以出现在任何地方，包括字符串、字符序列、注释和预处理指令。
 下面列出了最常用的三字符序列：
 三字符组	替换
 ??=	#
 ??/	\
 ??'	^
 ??(	[
 ??)	]
 ??!	|
 ??<	{
 ??>	}
 ??-	~
*/

void data_type()
{
    /*
     七种基本的 C++ 数据类型：
     类型	关键字
     布尔型	bool
     字符型	char
     整型	int
     浮点型	float
     双浮点型	double
     无类型	void
     宽字符型	wchar_t
     
     一些基本类型可以使用一个或多个类型修饰符进行修饰：
     signed
     unsigned
     short
     long
    */
    
    //endl 这将在每一行后插入一个换行符，<< 运算符用于向屏幕传多个值
    cout << "Size of char : " << sizeof(char) << endl;
    cout << "Size of int : " << sizeof(int) << endl;
    cout << "Size of short int : " << sizeof(short int) << endl;
    cout << "Size of long int : " << sizeof(long int) << endl;
    cout << "Size of float : " << sizeof(float) << endl;
    cout << "Size of double : " << sizeof(double) << endl;
    cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;
}


void typedef_usage()
{
    //使用 typedef 为一个已有的类型取一个新的名字
    typedef int try_int;
    try_int i = 10;
    cout << "i = " << i << endl;
}


void enumeration_usage()
{
    /*
     枚举类型(enumeration)是C++中的一种派生数据类型，它是由用户定义的若干枚举常量的集合。
     如果一个变量只有几种可能的值，可以定义为枚举(enumeration)类型。所谓"枚举"是指将变量的值一一列举出来，
     变量的值只能在列举出来的值的范围内。
     创建枚举，需要使用关键字 enum。
     enum 枚举名{
     标识符[=整型常数],
     标识符[=整型常数],
     ...
     标识符[=整型常数]
     } 枚举变量;
    */
    
    //枚舉類型的变量只能赋值枚举类型中的集合，默认索引为0
    enum color { red = 5, green, blue } c;
    c = blue;
    cout << "c is " << c << endl;
    c = green;
    cout << "c is " << c << endl;
    
    
}

/*
 初始化局部变量和全局变量
 当局部变量被定义时，系统不会对其初始化，您必须自行对其初始化。定义全局变量时，系统会自动初始化为下列值：
 int	0
 char	'\0'
 float	0
 double	0
 pointer	NULL
*/


/*
 常量
 整数常量
 整数常量可以是十进制、八进制或十六进制的常量。前缀指定基数：0x 或 0X 表示十六进制，0 表示八进制，不带前缀则默认表示十进制。
 整数常量也可以带一个后缀，后缀是 U 和 L 的组合，U 表示无符号整数（unsigned），L 表示长整数（long）。
 后缀可以是大写，也可以是小写，U 和 L 的顺序任意。
 
 定义常量:
 使用 #define 预处理器。
 使用 const 关键字。
*/

#define LENGTH 10
#define WIDTH  5
#define NEWLINE "hello"

void constant_usage()
{
    cout << LENGTH << endl;
    cout << WIDTH << endl;
    cout << NEWLINE << endl;
    int area;
    area = LENGTH * WIDTH;
    cout << area << endl;
    
    const float pi = 3.14;
    cout << pi * area << endl;
}

/*
 转义序列码
 转义序列	含义
 \\	\ 字符
 \'	' 字符
 \"	" 字符
 \?	? 字符
 \a	警报铃声
 \b	退格键
 \f	换页符
 \n	换行符
 \r	回车
 \t	水平制表符
 \v	垂直制表符
 \ooo	一到三位的八进制数
 \xhh . . .	一个或多个数字的十六进制数
*/


/*
 类型限定符
 类型限定符提供了变量的额外信息。
 限定符	含义
 const	const 类型的对象在程序执行期间不能被修改改变。
 volatile	修饰符 volatile 告诉编译器，变量的值可能以程序未明确指定的方式被改变。
 restrict	由 restrict 修饰的指针是唯一一种访问它所指向的对象的方式。只有 C99 增加了新的类型限定符 restrict。
*/


/*
 存储类
 存储类定义 C++ 程序中变量/函数的范围（可见性）和生命周期。这些说明符放置在它们所修饰的类型之前。下面列出 C++ 程序中可用的存储类：
 auto : 声明变量时根据初始化表达式自动推断该变量的类型、声明函数时函数返回值的占位符。
 register : 用于定义存储在寄存器中而不是 RAM 中的局部变量。这意味着变量的最大尺寸等于寄存器的大小（通常是一个词），且不能对它应用一元的 '&' 运算符（因为它没有内存位置）。
 static : 存储类指示编译器在程序的生命周期内保持局部变量的存在，而不需要在每次它进入和离开作用域时进行创建和销毁。因此，使用 static 修饰局部变量可以在函数调用之间保持局部变量的值; 修饰全局变量时，会使变量的作用域限制在声明它的文件内。
 
 extern: 用于提供一个全局变量的引用，全局变量对所有的程序文件都是可见的,
 mutable: 仅适用于类的对象,它允许对象的成员替代常量。也就是说，mutable 成员可以通过 const 成员函数修改。
 thread_local (C++11): 声明的变量仅可在它在其上创建的线程上访问。 变量在创建线程时创建，并在销毁线程时销毁。 每个线程都有其自己的变量副本。
*/

static int static_count = 10; /* 全局变量 */
void static_usage()
{
    static int i = 5; // 局部静态变量
    i++;
    cout << "变量 i 为 " << i;
    cout << " , 变量 count 为 " << static_count << std::endl;
    
}

void storage_class_usage()
{
    auto a = 10.9;
    cout << a << endl;
    while (static_count--){
        static_usage();
    }
    
    
}


/*
 杂项运算符
 运算符	描述
 sizeof	sizeof 运算符返回变量的大小。例如，sizeof(a) 将返回 4，其中 a 是整数。
 Condition ? X : Y	条件运算符。如果 Condition 为真 ? 则值为 X : 否则值为 Y。
 ,	逗号运算符会顺序执行一系列运算。整个逗号表达式的值是以逗号分隔的列表中的最后一个表达式的值。
 .（点）和 ->（箭头）	成员运算符用于引用类、结构和共用体的成员。
 Cast	强制转换运算符把一种数据类型转换为另一种数据类型。例如，int(2.2000) 将返回 2。
 &	指针运算符 & 返回变量的地址。例如 &a; 将给出变量的实际地址。
 *	指针运算符 * 指向一个变量。例如，*var; 将指向变量 var。
*/

void for_while_usage()
{
    //for(;;) 结构来表示一个无限循环。
    for (int i = 1; i < 10; i++) {
        cout << i << endl;
    }
    
    int j = 0;
    while (j < 10) {
        j++;
        cout << j << endl;
    }
}

#include  <cmath>

void cmath_usage()
{
    /*
     cmath: 常用的数字运算的内建函数
     1  double cos(double);
     该函数返回弧度角（double 型）的余弦。
     2	double sin(double);
     该函数返回弧度角（double 型）的正弦。
     3	double tan(double);
     该函数返回弧度角（double 型）的正切。
     4	double log(double);
     该函数返回参数的自然对数。
     5	double pow(double, double);
     假设第一个参数为 x，第二个参数为 y，则该函数返回 x 的 y 次方。
     6	double hypot(double, double);
     该函数返回两个参数的平方总和的平方根，也就是说，参数为一个直角三角形的两个直角边，函数会返回斜边的长度。
     7	double sqrt(double);
     该函数返回参数的平方根。
     8	int abs(int);
     该函数返回整数的绝对值。
     9	double fabs(double);
     该函数返回任意一个十进制数的绝对值。
     10	double floor(double);
     该函数返回一个小于或等于传入参数的最大整数。
    */
    
    int    i = -1000;
    float  f = 230.47;
    double d = 200.374;
    
    // 数学运算
    cout << "sin(d) :" << sin(d) << endl;
    cout << "abs(i)  :" << abs(i) << endl;
    cout << "floor(d) :" << floor(d) << endl;
    cout << "sqrt(f) :" << sqrt(f) << endl;
    cout << "pow( d, 2) :" << pow(d, 2) << endl;
    
}


void random_int()
{
    int i,j;
    
    // 设置种子
    //srand( (unsigned)time( NULL ) );
    //srand(1);
    
    /* 生成 10 个随机数 */
    for( i = 0; i < 10; i++ )
    {
        // 生成实际的随机数
        j= rand();
        cout <<"随机数： " << j << endl;
    }
    
}

//http://www.runoob.com/cplusplus/cpp-arrays.html
