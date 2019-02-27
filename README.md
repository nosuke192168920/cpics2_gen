# cpics2_gen

## 概要

cpics2_genは、
CPicS2のPIC12F509に書き込むプログラムを生成するツールです。

cpics2_gen.exe を起動すると、
テンプレートとなるプログラムのhexファイル（template.hex）を読み込み、
そこに別のファイル（key.txt）で指定したキー情報を書き込んで、
新規にhexファイル（cpics2prg.hex）を出力します。

## 動作環境

cpics2_gen.exe は、
32bit版および64bit版のWindows 10上で動作することを確認しています。
それ以外のバージョンのWindows上でも動作するかもしれませんが、未確認です。

実行ファイルが動作しない場合や、
MacやLinuxなどのWindows以外の環境で実行する場合は、
C言語で書かれたソースコードが付属しているので、
これをコンパイルし直して実行ファイルを作成してみてください。

コンパイルの仕方については、
このドキュメントの後ろの方に書かれています。

# 使い方

1. key.txtを、メモ帳などの適当なテキストエディタで開きます

1. key.txtに、CPicS2で書き込みたいキー情報を記述して保存します

  キー情報は、「0x0F,0x00,0x02,...」のように、
  1Byteずつカンマで区切って、「0x」で始まる16進数表記で半角で記述して下さい。
  デフォルトでは、「0xFF」が20Byte分、カンマ区切りで記述されているので、
  適宜上書きしてください。

1. cpics2_gen.exeをダブルクリックするなどして起動します

  正しく実行できた場合、コマンドプロンプトが開き、
  以下のようなメッセージが表示されるはずです。

        Read key file "key.txt" ... OK
        ================================
        Key data:
        00000000  ff ff ff ff ff ff ff ff  ff ff ff ff ff ff ff ff
        00000010  ff ff ff ff
        SHA1: eff33c65a4f3862c231f9e4d6fefa7b34398dbf2
        Key name: phoenix
        ================================
        Read template hex file "template.hex" ... OK
        Write to output file "cpics2prg.hex" ... OK
        Press any key to exit.
  
  `Key data:`と書かれたところの下に、
  key.txt から読み込まれたキー情報が表示されます。
  
  読み込まれたキー情報が既知のものである場合、
  `Key name:` 欄に、そのキーに対応するタイトルが表示されます。
  意図したものになっているか、よく確認してください。  

1. ウィンドウをクリックして、何かキーを押すと、ウィンドウが閉じます

  cpics2_gen.exe と同じフォルダに生成される
  cpics2prg.hex という名前のファイルが、
  PIC12F509に書き込むプログラムになります。


## コンパイルの仕方

gccが使える環境で、makeコマンドを実行してください。

    % make
    gcc -I. -O2 -Wall  -c sha1.c
    gcc -I. -O2 -Wall  -c cpics2_gen.c
    gcc -O2 -Wall  sha1.o cpics2_gen.o -o cpics2_gen

Linux環境でコンパイルできることを確認しています。
Macは所持していないため、未確認です。


## 著作権表記

- SHA1について

  Copyright (c) 2011 IETF Trust and the persons identified as authors of the code. All rights reserved.

  SHA1の実装はRFC 6234に記載されたものを利用しています。

- その他のコードについて

  Copyright (c) 2019 nosuke <<sasugaanija@gmail.com>>


## License

SHA1の実装については、RFC 6234の著作権表記にある通り、
簡易BSDライセンスに基づいて配布されています。

それ以外のコードについては、MITライセンスに基づきます。


