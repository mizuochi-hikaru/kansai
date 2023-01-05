/* 関西型言語ヘッダ "kansai.h" */

#ifndef KANSAI_H_INCLUDED
#define KANSAI_H_INCLUDED

#include <stdio.h>

/*
接続詞(便利)
*/
#define の
#define や
#define と ,
#define な ;

/*
 型定義
 */
/* プリミティブ値 */
// NOTE: typedef int 整数; とかだと「でっかい 整数」とかがうまくいかないのでdefineで
#define 整数 int
#define 小数 double
#define 文字 char
#define 型なし void
#define 正の unsigned
#define でっかい long
/* 構造体 */
#define ひとかたまりなんやけど typedef struct {
#define こういうのんが中に入ってるねん }
#define ていうんやけどな ;
/* 配列 */
// 宣言
#define で個数が [
#define 個やねん ]
#define 決まってへんねん ]
// インデックスアクセス
#define の番号でいう [
#define 番め ]
/* ポインタ */
// 宣言
#define のポインタ *
// デリファレンス
#define 実体の *
// リファレンス     TODO: いい言い方ないかしら
#define ポインタの &
// nullptr
#define なんもないねん NULL
/* その他 */
// 定数
#define 定数の const
// キャスト
#define 型を (
#define にした )

/*
 演算子
 */
/* 算術演算子 */
#define けどこれが =
#define に1足すねん ++
#define を1引くねん --
#define 足す +
#define マイナスの -
#define 引く -
#define 掛ける *
#define 割る /
#define を %
#define で割ったあまり
/* 比較演算子 */
#define 小なり <
#define 小なりイコール <=
#define 大なり >
#define 大なりイコール >=
#define イコール ==
#define ノットイコール !=
/* 論理演算子 */
#define または ||
#define かつ &&
/* メンバアクセス */
#define けどこれの .
#define けどこのポインタの ->
/* 三項演算子 */
#define のとき ?
#define でちゃうとき :
/* 否定 */
#define あのー !
#define やなし
/* 括弧 */
#define 先に (
#define した結果 )
/* sizeof */
#define 型 sizeof(
#define のサイズ )

/* 
 関数
 */
#define を返す関数で
#define 何も返さへん関数で void
#define いうねん
#define ほんで
#define 引数は (
#define 無いん void
#define やねん )
#define 詳しくいうとな {
#define ちうわけや }
#define 関数の
#define を呼ぶねん
#define けど
#define を呼んだ結果で
#define なし 
#define 返すのが return
#define 終わんねん return;

/*
 制御構造
 */
/* ループ */
// NOTE: forとかは面倒なので無限ループでbreakする
#define こっから先繰り返すねん while(1)
#define それはこっから {
#define ここまでやね }
#define 頭に戻らせてもらうな continue;
#define もうやめさせてもらうわ break;
/* 分岐 */
#define もし if(
#define やったら )
#define せやなくて else if (
#define せやなかったら else
#define こうするねん {
#define こういうことや }

/*
 表示(stdout)
 */
#define ワシが言いたいんはな printf(
#define ちうことやねん )
#define で中身が ,

/*
未実装なのはあるけど、まあええやん？
extern
static
typedef
switch
case
default
for
do
++a
--a
a << b
a >> b
~a
a & b
a | b
a ^ b
*/
#endif /* KANSAI_H_INCLUDED*/
