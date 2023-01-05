# 関西型言語ヘッダ "kansai.h"

## DISCLAIMER
エセ関西弁だけど怒らないでね :love:

## 使い方

### 基本
- 実装ファイル先頭で`#include "kansai.h"`する
- プリプロセス後の結果を見たい時は`$ cc -E <ソースファイル>`

### 便利な接続詞
- 'の': ''  
(空文字) `整数 の num` → `int num`
- 'や': ''  
(空文字) `a や けどこれが b や な` → `a = b ;`
- 'と': ','  
(列挙) `ほんで引数は 整数 の a と 整数 の b やねん` → `( a , b )`
- 'な': ';'  
(文の終了) `整数 の cnt や な` → `int cnt ; `

### 関数の宣言と実装
```C
何も返さへん関数で main いうねん ほんで引数は 無いん やねん
詳しくいうとな
    終わんねん
ちうわけや

// ↓ cc -E

void main ( void )
{
    return;
}

整数 を返す関数で main いうねん ほんで引数は 整数 の argc と 文字 のポインタ のポインタ の argv やねん
詳しくいうとな
    返すのが 0 や な
ちうわけや

// ↓ cc -E

int main ( int argc , char * * argv )
{
    return 0 ;
}

// プロトタイプ宣言
整数 を返す関数で main いうねん ほんで引数は 整数 の argc と 文字 のポインタ のポインタ の argv やねん な

// ↓ cc -E

int main ( int argc , char * * argv ) ;
```

### 制御構造
無限ループ(`while (1)`)のみ使用可能です。  
`if`文を用いて`break`するなどして使用してください。
```C
こっから先繰り返すねん
それはこっから
    もし cond1 やったら
    こうするねん
        もうやめさせてもらうわ
    こういうことや
    せやなくて cond2 やったら
    こうするねん
        頭に戻らせてもらうな
    こういうことや
    せやなかったら
    こうするねん
    こういうことや
ここまでやね

// ↓ cc -E

while(1)
{
    if( cond1 )
    {
        break;
    }
    else if ( cond2 )
    {
        continue;
    }
    else
    {
    }
}
```

### 型
プリミティブ型と構造体が使用可能です。
```C
正の 整数 の id や な
でっかい 小数 の value や な

// ↓ cc -E

unsigned int id ;
long double value ;

// 配列・文字列
整数 の array で個数が 10 個やねん な
array の番号でいう 1 番め や けどこれが 1 や な
文字 の str で個数が 決まってへんねん けどこれが "おおきに" や な

// ↓ cc -E

int array [ 10 ] ;
array [ 1 ] = 1 ;
char str [ ] = "おおきに" ;

// 構造体
ひとかたまりなんやけど
    でっかい 正の 整数 id な
    文字 の name で個数が 128 個やねん な
こういうのんが中に入ってるねん
User ていうんやけどな

// ↓ cc -E

typedef struct {
    long unsigned int id ;
    char name [ 128 ] ;
}
User ;

// ポインタ
整数 の val や けどこれが 0 な
整数 のポインタ の ptr や けどこれが なんもないん や な
ptr や けどこれが ポインタの val な
実体の ptr や けどこれが 1 な
// with stdlib.h
整数 のポインタ の array や けどこれが 型を 整数 のポインタ にした 関数の malloc を呼ぶねん ほんで引数は 型 整数 のサイズ やねん な

// ↓ cc -E

int val = 0 ;
int * ptr = NULL ;
ptr = & val ;
* ptr = 1 ;
int * array = ( int * ) malloc ( sizeof( int ) ) ;
```

### 演算子
```C
// 算術演算子
整数 の a と b な
a に1足すねん な
b を1引くねん な
整数 の add や けどこれが a 足す b や な
整数 の sub や けどこれが a 引く b や な
整数 の mul や けどこれが a 掛ける b や な
整数 の div や けどこれが a 割る b や な
整数 の rem や けどこれが a を b で割ったあまり や な

// ↓ cc -E

int a , b ;
a ++ ;
b -- ;
int add = a + b ;
int sub = a - b ;
int mul = a * b ;
int div = a / b ;
int rem = a % b ;

// 比較演算子
a 小なり b
a 小なりイコール b
a 大なり b
a 大なりイコール b
a イコール b
a ノットイコール b

// ↓ cc -E

a < b
a <= b
a > b
a >= b
a == b
a != b

// 論理演算子
もし あのー 先に cond1 または cond2 した結果 やのうて かつ cond3 やったら

// ↓ cc -E

if( ! ( cond1 || cond2 ) && cond3 )

// 三項演算子
val や けどこれが cond のとき val1 でちゃうとき val2 や な

// ↓ cc -E

val = cond ? val1 : val2 ;


// メンバアクセス
User の user や な
User のポインタ の puser な
もし user や けどこれの id イコール puser や けどこのポインタの id やったら

// ↓ cc -E

User user ;
User * puser ;
if( user . id == puser -> id )
```

### 標準出力への出力
`stdio.h`は`kansai.h`で`include`しています。
```C
ワシが言いたいんはな "答えは%d" で中身が val ちうことやねん な

// ↓ cc -E

printf( "答えは%d" , val ) ;
```