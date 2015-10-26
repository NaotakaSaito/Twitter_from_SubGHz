#920MHz無線から送信したテキストメッセージをTwitterにつぶやくプログラムです。

# Lazurite Sub-GHz側
Lazurite\subghz.cのプログラムです。
30行目のメッセージをそのまま無線で送信しています。

# Raspberry Pi側
1) Raspberry PiにRuby用のTwitterプログラムをインストールします。
　「おまけ_Twitter編でBME280をつぶやく.pptx」の1ページ目

2) TwitterをRubyからアクセスするための設定を行います。
　「おまけ_Twitter編でBME280をつぶやく.pptx」の2～3ページ目を見て、その通りにやってみてください。

3) プログラムの変更
15行目-20行目の""の中のhogehoge...を自分のtwitterの情報に置き換えてください。
「おまけ_Twitter編でBME280をつぶやく.pptx」の4ページ目の黒く消されている部分のテキストを貼り付けれるだけです。

  customer_key="ここに入れる"
  consumer_secret="ここに入れる"
  access_token="ここに入れる"
  access_token_secret="ここに入れる"
  
4) プログラムの実行方法
・ドライバをロードする
sudo insmod ~/driver/sub-ghz/DRV_802154.ko

・rubyを実行する
sudo ./send_message.rb

・rubyを停止するためには
Ctrl+C
を押します。

・ドライバを停止する。
sudo rmmod DRV_802154

5) プログラムの解説
105行目  受信した文字を","のところで分離します。
　　　　　csv[0]には最初のカンマまでの文字が入ります。今回の場合はTwitterになります。
　　　　　csv[1]にはカンマの後の２番目のメッセージが入ります。
112行目　実際にTwitterに送信しているところです。

　　　　Lazuriteから送信した文字はそのままでは文字
　　　　として認識してくれないので、encode()でRaspberry Piが
　　　　読めるように変換しています。

では動かしてみてください！！
がんばってね～～～ 


