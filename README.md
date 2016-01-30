# c11_utils
##コンパイル
g++ -std=c++11 filename.cpp
./a.out

#day1
競技プログラミングでよくある入力をGeneric Programming風に書いてみた.  
```c++
cin >> N;  
for(int i=0;i<N;i++){  
  cin >> a[i] >> b[i] >> ... >> z[i];  
}
```
上のようなコードが以下のようになる
```c++
StdIn(N);
StdPushback(N,a,b,...,z);
```

同様に、複数の変数を空白区切りで出力できるように作った.

##新しく覚えたこと
* 可変長引数
* auto による型推論
* Range-based for loop(foreach)

##改善点
push_backのInputの部分もっとうまく書けそう  
エラー処理も書かないとだめ
