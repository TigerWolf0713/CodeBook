#include <bits/stdc++.h>
using namespace std;

/*

,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,:i,,,:,,,,,,,,,,,,,,,,:*:i:,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,*::,;i,,,,,,,,,,,;;,,,,,,,,,,,,,,,,,,
,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,;;,,,,,,,,,,,,,,,,,,,,i;:*:,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,:*::::i,,,,,,,,,,,;;,,,,,,,,,,,,,,,,,,
,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,i:,,,,,,,,,,,,,,,,,,,:*;:*,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,.ii::::i,,,,,,,,,,,;;,,,,,,,,,,,,,,,,,,
,,,,,,,,,,,,,,,,,,,,,,,,,,,,,;+:,,,,,,,,,,,,,,,,,,,;i:;i,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,:,,,,,,,,,*:::::i,,,,,,,,,,,;;,,,,,,,,,,,,,,,,,,
,,,,,,,,,,,,,,,,,,,,,,,,,,,,,**:,,,,,,,,,,,,,,,,,,:*;:i;,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,;:,,,,,,,;*:::::i:,,,,,,,,,,;;,,,,,,,,,,,,,,,,,,
,,,,,,,,,,:,,,,,,,,,,,,,,,,::+i,,,,,,,,,,,,,,,,,,,;i::i:,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,i:,,,,,,,ii:::::i:,,,,,,,,,,;;,,,,,,,,,,,,,,,,,,
,,,,,,,,,,,,,,,,,,,,,,,,,,,,;*i,,,,,,,,,,,,,,,,,,,*;::i:,,,,,,,,,,,,:,,,,,,,,,,,,,,,,,,,,,,i,,,,,,,,i;:::::;;,,,,,,,,,,;;,,,,,,,,,,,,,,,,,,
,,,,,,,,,,,,;,,,,,,,,,,,,,,,*i;,,,,,,,,,,,,,,,,,,:*:::i,,,,,,,,,,,,,;,,,,,,,,,,,,,,,,,,,,,:i,,,,,,,,*:,,:::;i,,,,,,,,,,i:,,,,,,,,,,,,,,,,,,
,,,,,,,,,,,:*,,,,,,,,,,,,,,:ii:,,,,,,,,,,,,,,,,,,*;:::i,,,,,,,,,,,,:i,,,,,,,,,,,,,,,,,,,,,;;,,,,,,,:*:,,:::;i,,,,,,,,,,i:,,,,,,,,,,,,,,,,,,
,,,,,,,,,,,;i,,,,,,,,,,,,,,i;i:,,,,,,,,,,,,,,,,,:*:::;i,,,,,,,,,,,,;i,,,,,,,,,,,,,,,,,,,,,i:,,,,,,,*;,..,:::*,,,,,,,,,,*:,,,,,,,,,,,,,,,,,,
,,,,,,,,,,,:;,,,,,,,,,,,,,,*;i,,,,,,,,,,,,,,,,,,ii:::;i,,,::,,,,,,:ii,,,,,,,,,,,,,,,,,,,,,*:,,,,,,:+:.``,:::*,,,,,,,,,,*:,,,,,,,,,,,,,,,,,,
,,,,,,,,,,,:;,,,,,,,,,,,,,;i;i,,::,,,,,,,,,,,,,,*::::ii,,,;:,,,,,,:ii,,,,,,,,,,,,,,,,,,,,:+:,,,,,,;+,.``,:::*,,,,,,,,,,*:,,,,,,,,,,,,,,,,,,
,,,,,,,,,,,;;,,,,,,,,,,,,,i;;i,,i:,,,,,,,,,,,,,i*::,:i;,,,;:,,,,,,;*i,,,,,,,,,,,,,,,,,,,,i+,,,,,,,i*.```,:::*:,,,,,,,,,+:,,,,,,,,,,,,,,,,,,
,,,,,,,,,,,;;,,,,,,,,,,,,:*:;;,,i:,,,,,,,,,,,,:*;::;,;:,,,;;,,,,,:i*i,,,,,,,,,,,,,,,,,,,:**,i;,,,,*;.```.:::i:,,,,,,,,,+;,,,,,,,,,,,,,,,,,,
,,,,,,,,,,,i;,,,,,,,,,,,,;i:i;,,i,,,,,,,,,,,,,:*:;*;.;:,,,;;,,,,,:**i,,,,,,,,,,,,,,,,,,,iii,,+;,,,+,`````,::i;,,,,,,,,,+*,,,,,,,,,,,,,,,,,,
,,,,,,,,,,,i;,,,,,,,,,,,:i;:i;,,i,,,,,,,,,,,,,*#**:`.i,,,,;;,,,,,:**i,,,,,,,,,,,,,,,,,,:*;;,,:+i,:+,`````,::;i,,,,,,,,,++:,,,,,,,,,,,,,,,,,
,,,,,,,,,,,i;,,,,,,,,,,,:i::i:,,*i;i;;;;;;;;*##i:,.`.i,,,,i:,,,,,;**i,,,,,,,,,,,,,,,,,,;;i;,,,,;*+i``````.,:;i,,,,,,,,:+*;,,,,,,,,,,,,,,,,,
,,,,,,,,,,,i;,,,,,,,,,,,;i::*:,,*ii******ii;:*i::.``.i,,,,i:,,,,:i**i,,,,,,,,,,,,,,,,,,*:i;,,,,,;z;```````,:;i,,,,,,,,:+;*,,,,,,,,,,,,,,,,,
,,,,,,,,,,,*;,,,,,,,,,,,*:::*:,,i,,,,,,,,::,,*::````,i,,,,*:,,,,i***i:,,,,,,,,,,,,,,,,:*,i;,:,,,:+;i,`````.::*:,,,,,,,;*,*:,,,,,,,,,,,,,,,,
,,,,,,,,,,,*;,,,,,,,,,,:*:::*,,:i,,,,,,,,,,,:*:,````,;,,,,*:,,,:+***i:,,,,,,,,,,,,,,,,i;,*:,,:,,;i`.;:.```.::*:,,,,,,,;*,*;,,,,,,,,,,,,,,,,
,,,,,,,,,,,*;,,,,,,,,,,ii:::i,,:i,,,,,,,,,,,i;,`````:;,,,,+:,,,,+***i:,,,,,,,,,,,,,,,:*:,+:,,,,,i:```,;:.``,:*:,,,,,,,ii:ii,,,,,,,,,,,,:,,,
,,,,,,,,,,:+;,,,,,,,,,,*;:::i,,:i,,,,,,,,,,:*:``````:;,,,:+:,,,,+****:,,,,,,,,,,,,,,,;i,,+:,,,,,*,`````,:;:.:*:,,,,,,,*i:;*,,,,,,,,,,,,;:,,
,,,,,,,,:,:#::,,,,,,,,:*::::i,,:*,,,,,,,,,,;i.``````:;,,,;#:,,,:++i**:,,,,,,,,,,,,,,,i;,:+,,,,,:*``````.``,;*#i:::,,,,*;::*:,,,,,,,,,,,i:,,
,,,,,,,,:,i*:,,,,,,,,,ii:::,i,,:*,,,,,,,,,,*,```````:;,,,i*,,,,:#+i**:,,,,,,,,,,,,,,:*,,i*,,,,,i;```````````,*;:;;:,,,+;,:i;,,,,,,,,,,,i:,,
,,,,,,,,,:**:,,,,,,,,,*:::..i,,:+,,,,,,,,,:*.```````;:,,,ii,,,,;++***:,,,,,,,,,,,,,,;;,:+*,,,,,*,```````````.i;,,,,,,,+;,:;*,,,,,,,,,,,*:,,
,,,,,,,,,;i*::,,,,,,,:*::,.,i,,;+,,,,,,,,,i:````````;:,,,;i:,,:;++***:,,,,,,,,,,,,,,*:,i**,:,,:*.````````````;i,,,,,,:+::::*,,,,,,,,,,:*:,,
,,,,,,,,:iii,:,:,:,,,;i:,.`,i,,i*:,,,,,,,,*.````````;:,,::i:,,:i++***;,,,,,,,,,,,,,,*,,+i*,,,,:*`````````````,*,,,,,,:+::::*:,,,,,,,,,:*,,,
,,,,,,,,,*;i:,,,,,,,,i::.``,i,,;;,,,,,,,,:;`````````i:,,i.i:,::i*#***;,,,,,,,,,,,,,;i,i*;*,,,,;;`````````````.*,,,,,,;*::::i;,,,,,,,,,:i,,,
,,,,,,,,:*;i:,,,,,,,:i:,```:;,:;::,:,,,,,i:`````````i:,,*`i:,::**z***;,,,,,,,,,,,,,*:,+;ii,,,,i:`````````````.*:,,,,,i*::::;*,,,,,,,,,;i,,,
,,,,,,,,ii:i:,:,,,,,i;:.```,;,;:,:,,,,,,,i.````````.i:,:i`i:,,:**z***;,,,,,,,,,,,,:*,**:;;,,,,*.``````````````i:,,,,,*i:::::+:,,,,,,,,;;,,,
,,,,,,,:*;:i;,:,,:,,*;.```.,;,;,::,,,,,,,i.````````.i:,;i`i:,,;**z+**;,,,,,,,,,,,,ii:#;,:;,,,:i```````````````i:,,,,,+i:::::*;,,,,,,,,i;,,,
,,,,,,::*::i;,,:,:,:*,`````:;,i.,;:,,,,,;:``````````i:,;:`;;,,;*+++**i,,,,,,,,,:,,*:i+,`:;,,,;:```````````````;;,,,,,*;:::::i*,,,,,,,,*:,,,
,,,,,,,;i::i;,,,,,:;i.`````:;,i..;,,,,,,i,``````````*:,i:`;;,,i*+;+**i,,,,,,,,:,,:*:+;.`;;,,,i,```````````````;;,,,,,+::::::;*,,,,,,,,+:,,,
,,,,,:,ii::;;,,,:,:*:``````:::;`.i,,,,,,*``````````.*:.*,`;;,,i*#,+**i,,,,,,,,:,,;i;+,``i;,,,i.```````````````:;,,,,:+,::::::+,,,,,,,:+:,,,
,,,,,,:*;::;i,,,:,:*.``````::;:``;,,,,,;;```````````*:,*.`;;,:**+.***i,,,,,,,,,,,*:*i.``i:,,:i.```````````````:i,,,,ii,::::::+:,,,,,,:*,,,,
,,,,,,:*;::;i,,:,,;:```````::;,``;,,:,,i,```````````*::*``:;,:***.i+*i,,,,,,,,:,:+;+,```*:,,:i.```````````````,i,,,,i:.::::::*;,,,,,,;i:,,,
,,,,,,*i:::;i,:,,,i..``````::i.``::,,,,*.```````````*:;i``:;,:*+;`:+**:,,,,,,,,,:*+i````i:.,i;````````````````,i,,,,*,`,:::::ii,,,,,,ii,,,,
,,,,,:+;:::;*,:,,,i.```````:;i.``,;,,,:i````````````*:;;``,;,:*#:`:+**:,,,,,,,,,ii+,````i;,,*:````````````````,i,,,,+.`.:::::i*,,,,,,*;,,,,
,,:,:*+::::;*,:,,;;````````:;i.``.i,,,i:````````````i:i,``,i,;*#.`.+**:,,,,,,,,,*+i`````i;,,+.````````````````.i,,,:*.``,::::;+,,,,,,+:,,,,
,,:,;+*;:::;+:,,,i,````````:ii````i:,:*.````````````i:*.``.i,;*#.``*+*;,,,,,,,,,*+..````;;,:*`````````````````.*,,,;;```.:::::+:,,,,:+,,,,,
:,,:i#*::::;#:,:,i.````````:*i````;:,:*.````````````;;i.``.i:;*+.``;+*;,,,,,,,,:+i``````;i,;*`````````````````.*,,,*:````:::::*;,,,,:*,,:,,
:,,;*z*:::::*;,,:i`````````,+;````::,:i`````````````;;;.``.i:;+*```:+*;,,,,,,,,;*,``````:i,i;`````````````````.*,,,+.````,::::*i,,,,;*,,,,,
,,:i+#*::::,i;,,;;`````````,#:````,;,;:`````````````;i;```.i:;+i```.+*;,,,,,,,,*i.``````:i,*:`````````````````.*,,:+.````.::::i*,,,,ii,,,,,
,:;*##+:;::.:;,,i:`````````.#:```.,i,;:`````````````;*;````i:;#:```.**i:,,,,,,:#:```````:*,+.`````````````````.*,,;*``````,:::;+,,,,*;,:,,,
,:i*#++:::,.,i:,i,`````````.+,```:;+:i+,.```````````:+:````;;i#,````i+i:,,,,,,;#.```````,*,*.`````````````````.i,,ii``````.::::+,,,,+:,,,,,
:;**z++;::.`,i,,*.``````````*.````.;:*;,:i;::,.`````:#,````;;i+,````:+i:,,,,,,i;````````,*:i``````````````````.i,,*:```````,:::+,,,:+:,,,,,
:i**#++;:,``.i,:i```````````:.`````,;*`````.,,..````,#,````;;i+.````.+*:,,,,,,*,````````,*;;``````````````````.i,,+,```````.,::+:,,;*,,,,,,
;*++#*+i:.``.i:i;.`````````````````.+i````````````.`.+,````:ii+.````.**;,,,,,,*.````````.*i:``````````````````.i,:*````````.,::*;,,*;,,,,,,
i*+#+*+i:..``i:+i:;ii**+++***i;:,...+i``````````````.*.````,ii*``````i+;:,,,,:i``````````++,``````````````````.i,i;`````````.::ii,:+,,,,,,,
**+z+*+i,```.;;+#nxxxxxnnnnxnxxnxxz#z#i;:,.``````````i.````.i*i``````,+i:,,,,i;``````````*#;;;i;:,,.``````````.i:+.``````````,:i*,;+,,,,,,,
+++#**+i.````:i#znxnxnnnnnnxnnxnxnnnnnnnnzz#+i,.`````:.`````;+i``````.+*:,,,,i,``````````**..,,,:;i**i:,,..```.i;*```````````.:;*,i*,,,,,,,
**+#**+;``.``,+nxnnnnnnnnnnnxxnnxxnxxxnnxnnxnn#;,````.``````;+i``````.**:,,,,*.``````````ii.````````..,:;iii;,.ii;````````````:;+,*;,,,,,,,
**##**+;`````.znzzzzzzzzznnnzzznnnnnnnxnnnxnnn#..```````````:z;```````;+:,,,,*.``````````,,.``````````````..,:;++:````````````,:+:*:,,,,,,,
**#++*+i`````.#i:;;;;;::;zn;...,:::i*znnxnnnnnz:````````````,n:```````.+;,,,:*.``````````.````````````````````.*#.````````````.:+;+:,,,,,,,
**z+**+*.```.`;,.::::::;#n* ````    .znxxnnnnnni````````````.+:````````**,,,:i```````````..,...````````````````*i``````````````,+**,,,,,,,,
*+#+**+*.`````.`.::::::+xn;  ``` ` `+nnnnnnnn+i:`````````````i,````````;+,,,;:``````````..;zz#++**;:..`````````i:``````````````.+#;,,,,,,,,
*##+**++.`.`````.:::::innx*` `   `,zz##zznnnnni,````````````.:.````````:+:,,i,```````````:znnnnnnnnxnnz#*;:,``.;````````````````*z:,,,,,,,,
*##**+*+.````````````.+xnxni.`.`` :z####z#znxn+,```````````````````````.+:,,*.``````````:znxnnnnnnnnnnxnnnnz#*ii````````````````;#,,,,,,,,,
+#++*+*+,`````````  `.znnnnzzzz,` .###zz#z#znnz,````````````````````````i;,:*.`````````,*+zzznnnnnnnnxnnnnnnxnxxz+i:.```````````;*:,,,,,,,,
+#++***#,````````````innnzzzz##,.:#zz##z###znnz,````````````````````````,*,:i```````````..,;;;i*+#zznnnnnnnnxnnnxnnn#+;,..``````*i,,:,,,,,,
+#*****#,`````````  `#xxnzzz######zz###*`iz#znn:`````````````````````````*:;;`````````````.::::::::;*#*#znnxnxnnxnnnnnxn#i:````.+:,,:,,,,,,
##**+**#:`````````` .zxnzzz##z#########+.*###nn;`````````````````````````;;i:`````````````,::::::::;+.``.,;*#znnnxnnnxxnnnnzi,.,#:,,,,,,,,,
#+*++*+#:`````````  ,nnn#z########+####z+####zn:`````````````````````````.i*,````````````.,:::::::;z;`      `.;*+nnnnxnnnnnnxz+++,,:,:,,,,,
#+****+#;`````````  ;nnzzz#####++*+*++###zzzzzn:``````````````````````````;#,````````````..,,::::;zn,  ``     ` `*xnxnnnnnnxnnnzi,,,,,,,,,,
z+*****+i```````````;nxzzz###+++*ii****++zzzzzz,``````````````````````````.*,`````````````   ``.,+nni`      `   `*xxnxnnnxnnnnnn;,,,,,,,,,,
z+**++*+i```````````:nn#zz##++*+ii;;i+i*+#zzz##.````````````````````````````````````````````` ``ixnnn:`       ``:znnnnxxxxx##xx#:,,,,,,,,,,
z***++*+*`````````` ,nn#zz##+**z+i;;##i**+zz###.```````````````````````````.``````````````   ```#nnnnn*,```  `:+#z##znnnxxx*;i##:,,,,,,,,,,
#*++++*+*`````````  ,nn##z#+*iiznz+zx+;ii*####*```````````````````````````````````````````   ` ,nnnnz#zzz*`  ,zz#zzz##znxnnz;:**,,,,,,,,,,,
#*++++*++`````````  `#n##z#+*ii#nxnnn*;ii*+##z;``.````````````````````````````````````````  ```innnzzz###z,  `#z##z##zzznnnn;;+;,,,,,,,,,,,
+++++++++.````````  `*nz##+*ii;i#nnn*;;;i*+##z,```````````````````````````````````````````   ``#nnz###z#zz+``:z####zz###znnnii+,,,,,,,,,,,,
++++++++#.```````````:nz##+*i;;::i*i;;;;i*+##*````````````````````````````````````````````    .znnz#z########zzz#zz+*z##znxni+*,,,,,,,,,,,,
++*+++++#.````````````+z##+*i;:,...,;;;;i*++#,``.`````````````````````````````````````````  ` .znzzz#####z#######z#,`+zzznxn:*;:,,,,,,,,,,,
++++++*+#.````````````,z##+*i;,.....,;;ii*+#*````````````````````````````````````````````     ,znzz#######++#+####z**#zz#znx;*::,::,;,,,,,,
++++++*+#.`````````` ` ;z#+*i;......,:;ii*##,````````````````````````````````````````````     :nnzz####+#++***++####z#zzzznx**::,,,;*,,,,,,
++++++*+#.````````````` ,++**;......,;;ii##,`````````````````````````````````````````````     :nzzzz###++iiiiii**+#####zzznxzi,::,:*:,,,,,,
++++++*+#,`````...```.```:+#i;......,:;*#i.``.```````````````````````````````````````````   ` :nzzz##++**ii;;;;ii*+####znznxz::,,,;i,:,,,,,
+++++***#,``````...........:***iiii**+*;.```.````````````````````````````````````````````   ` ,n#zz#++*i;#*;;;;;ii*++##znznx*,:,,,+:::,,,,,
+++++++*#,````...............,,:::::,,.``.`.``````````````````````````````````````````````  ``,zzz##+*ii;#ni;;;i+*i*+##znzxni,:,,i*,,,,,,,,
+++++++*#,``.............................`````````````````````````````````````````````````` ` .z####+ii;;*nn#*+nzii**+zznzn#::,::#,::,,,,,,
+++++++*#:`..............................`````````````````````````````````````````````````` ` `+###+*ii;:;#xxnnn*;;i*+zznnn*:,,:*i:,:,,,,,,
++++++++#:...............................`````````````````````````````````````````````````` `` i###+*i;;;;;+znz*;;;i*+#zznn:,,::+,:,:,,,,,,
++++++*+#:...............................````````````````````````````````````````````````````` .z##+*i;;;;;::;;:;;;i*+#zzn#,,::*;,,:,,,,,,,
++++++++#;.................................``````````````````````````````````````````````````` `*z++*i;;;:,,.,:;;;;i*+#zzn*,,:;+::,:,:,,,,,
++++++++#;.................................```````````````````````````````````````````````````` .##+*i;;;:....,;;;;i*+#z##;,,:#;,,,:,:,:,,,
++++++++#;.................................`````````````.,```````````````````````````````````````:z+*i;;;:.....;;;i**+#zi+,,:i*,,,,,::,,,,,
++++++++#;................,................`````````````,,````````````````````````````````````..``.+#*;;;:...`.;;;i**##,+;,::#::,:,,,,:,,,,
++++++++#;..........,,...,,................`````````````..````````````````````````````````````````..:i+*i;,...,;;;i*#+,,+:,:+i,,:,,,,:,,,,,
++++++++#;.........,,,..,,,...,...........````````````````.````````````````````````````````````........,i*******++++;.`i*,,i+,:,:,,,,:,,,,,
+++++++++i.........,,...,,...,,,.........`````````````````````````````````````````````````````............,,::;;;::,`..+;::#:,,,:,,,,,,:,,,
+++++++++i........,,....,,...,,..........````````````````````````````````````````````````````....................`....;*,:+i::,,:::,:,,,,::
+++++++++i........,..........,...........```````````````````````````````````````````````````..........................*;,in:,,:,,,,,:,:,:,,
+++++++++*.................,..............``````````````````````````````````````````````````.......................,.,#::#+:,:,,,,,:,,,,,,,
+++++++++*................................``````````````````````````````````````````````````.........................i*:+i*:,,:::::::::::::
+++++++++*...............................```````````````````````````````````````````````````........................,+:i+:i,:,:::::::::::::
+++++++++*...............................```````````````````````````````````````````````````........................i*,+,;;,,,:i:::::::::::
+++++++++*...............................``````````````````````````````````````````````````.........................*;+;.i:,:,:*:::::::::::
++++++++++...............................```````````````````````````````````````````````````..........,,...........,+i*..*:,::;*:::::::::::
+#+++++++#,............................````````````````````````````````````````````````````...........,,..,,.....,.*++,.:*,:::ii:::::::::::
+z+++++++#,``..........................```````````````````````````````````````````````````...........,:...,:....,:,+#:..ii,:::+::::::::::::
+z++++++*#:...`......................`````````````````````````````````````````````````````..........,,,,.,,,..,.,,;+i...*;,,:;*::::::::::::
+z++++++*#;`.``...................````````````````````````````````````````````````````````..........,,...,,...,,,,++,..,+,,::*;,:::::::::::
+z+++++++#*``````................`````````````````````````````````````````````````````````..........,....,..,..,.i#,...,*,:::+:,:::::::::::
+z+++++++++.`.````..............``````````````````````````````````````````````````````````.................,....,+,....:i,:::+:,:::::::::::
#z++++++++z,````````````````````````````````````````````````````````````````,:i*;.`.`..``...................,...i:.....i;,:,*i,,,,:::::::::
#z++++++++#;..````````````````````````````````````````````````````````````,*i;;:i*,```.``......................,:......*;,::+;,,,,:::::::::
##+++++++++*`.`````````````````````````````````````````````````````````..i+:,:,:,:*,`.```....................,.,......,+::,;+,:,,::::::::::
##+++++++++#,`.```````````````````````````````````````````````````````.:*;:::::,:,;i`````......................,......;i,:,*i,::,::::::::::
##+++++++++zi````````````````````````````````````````````````````````,ii::::::,::::*.`.``.............................*;:,:+::,::::::::::::
z#+++++++++##.`````````````````````````````````````````.```````````,ii:::::::::::::i;````.............................+:,:;+::,,:::::::::::
z#+++++++++*#;``.````````````````````````````````````````````````,ii;,::::::::::::,ii.````...........................,*:,:**:::,:::::::::::
z*+++++++++*+#,..`````````````````````````````````````````````.,*+;:::,:::::::::::,;i.````````.......................;i,::#::::::::::::::::
zi+++++++++++#*``````````````````````````````````.:;:,.````.:;*i:,:,,:::::::::::::,;;``````````......................*;,:;+,,::::::::::::::
z:i+++++++++++z;```````````````````````````````````;nnnz****i;::::,::,,:::::::::::,i,``````````.`...................,+:,,ii:,:,::::::::::::
z:;++++++++++++#,```````````````````````````````````+zni:::,:::::::::::::::::,:,,::*,`````````````...............`..:*,,:+;::::::::::::::::
#::i++++++++++++#.``.```````````````````````````````;zi::,:::::::::::::::::::::::,;i````````````````````..`.......`.;i,::+:::::::::::::::::
#::;+++++++++++*z+.`````````````````````````````````,+:::,:::::::::::::::::::::,::*:.```````````````````````......`.*;,:*i,::::::::::::::::
+:::*++++++++++++#*.```````````````````````````````.`;i,:,,::::::::::::::::::,:::i*.`.````````````````````````````..+:::+:,::::::::::::::::
+:::;++++++++++*++#i````````````````````````````````.,*:,,,::::::::::::::::::,:,;*.````````````````````````````````:*::;+:,:::::::::::::::;
i,:::*+++++++++++++zi`````````````````````````````````;*::,::::::::::,,:::::::,;*,`````````````````````````````````;i,,*i:,::::::::::::::,i
i::::i+++++++++++++#++,``.```````````````````````````.`i+:,,:::,::::::,,::::::i*,.````````````````````````````````.*:::+;:,:::::::::::::::+
;:::::*++++++++++++#;z*.````.`.`````````````````````````:*;,,:::,,,::::::::::**,`.````````````````````````````````,+,:i*:::::::::::::::::;#
;:::::;++++++++++++#i#++:`.`.````````````````````````.``..i*i;::::::::::,,,,..``.`````````````````````````````````:*,:+;:,::::::::::::::,*#
:::::::+++++++++**#+i#*+#:`.```````````````````````````````,:i++:,,.......`````.``````````````````````````````````;i,;+::,:::::::::::::::++
:::::::*++++++++++##i#+++#i..```````````````````````````.`````````````````````````````````````````````````````````*;,**::::::::::::::::,;#+
:::::::;++++++++++++i#++++#*.`.`..```````````````````````````````````````````````````````````````````````````````.+:,+;,:::::::::::::::,*#+
:::::::;*#++++++++#+i#+++++#+,```````````````````````````````````````````````````````````````````````````````````:*,;+:::::::::::::::,::#++
::::::::;+++++++++#+i#+++++++z;.`.```````````````````````````````````````````````````````````````````````````````ii,+i:::::::::::::::,:iz++
:::::::::*++++++++#*i#++++++*+#*..``````````````````````````````````````````````````````````````````````````````.+::+::::::::::::::::::+#++
:::::::::*++++++++#*i#+++++++++#+:.`````````````````````````````````````````````````````````````````````````````,#,i*,,::::::::::::::::#+++
:::::::::;++++++++#*i#+++++++#+++#;.````````````````````````````````````````````````````````````````````````````;+:+;:::::::::::::::::i#+++
::::::::::*+++++++#*i#+++++++#++++#+,`.`````````````````````````````````````````````````````````````````.`````.;ni;+,:::::::::::::::::+#+++
::::::::::i+++++++#*i#+++++++z+++++##;.```````````````````````````````````````````````````````````````````.``,*i#;**::::::::::::::::::#++++
::::::::::;+++++++#iiz+++++++z#++++++#+,``````````````````````````````````````````````````````````````.````,;*;:+:+i:::::::::::::::::i#++++
:::::::::::*++++++#iiz+++++++##++++++++#i.`````````````````````````````````````````````````````````````.`,ii;::i*;#::::::::::::::::::+#++++
:::::::::::i++++++zi;z+++++++##+++++++++z+:```.``````````````````````````````````````````````.`````````:;i;::;:*i+i::,::::::::::::::;#+++++
:::::::::::;++++++#i;z+++++++##+++++++++++#i..```````````````````````````````````````````````````.``.:ii:::::::+i#::::::::::::::::::*#+++++
::::::::::::*+++++#;;##++++++#z++++++++++++#+:.`````````````````````````````````````````````````.`.:**;:::::::;+*+,:,:::::::::::::::#++++++
::::::::::::i+++++#;;+#+#+++++z#++++#++++++++#*,``.``````````````````````````````````````````...,;*i::::::::::i+#;:::::::::::::::::iz++++++
::::::::::::;+++++#;:+#+#+++++z#+++++++++++++++#i,````````````````````````````````````````````,i*i::::::::::;:*+#::::::::::::::::::++++++++
:::::::::::::*++++#;:+#+#++++####+++++++++++++++##;.````.`````````````````````````````````.,;ii:::::::::::::::+#*::::::::::::::::,;#+++++++
:::::::::::::i+++++;:*#+#+++++###+++++++++++++++*+#+:`..`````.````````````````````````..,i**i:::::::::::::::::#z;:::::::::::::::::i#+++++++
::::::::::::::+++#+;;i#+++++++#z#+++++++++++++++++++#+;.`.``````````````````````````.:;++i:::::::::::::::::::;n#::::::::::::::::::##+++++++
::::::::::::::*++#*;:i#+#+++++#z#+++++++++++++#+++++++n+:````````````````````.``..:*+*;::::::::::::::::::::::ini:::::::::::::::::;z#+++++++
::::::::::::::;++#*::;#+#++#+++z#++++++++++++++++++#zz##z+;.`````````````````.:i++*;:::::::::::::::::::::::::+z::::::::::::::::::+*#+++++++
:::::::::::::::*+#*;;;#++++++++z###++++++++++++++#zz##+#zzz#i,...`..`..,,;i+++*i;:::::::::::::::::::::::::::;#+,:::::::::::::::::#;++++++++
:::::::::::::::i+#i::;+#+++++++#z#+++++++++#+++#zz#+###zz#+#zz##++*+++##zzz+;::::::::::::::::::::::::::::::::zi::::::::::::::::,i+:*#++++++
::::::::::::::::+z;::;*#++++++++z#+++++++++++#zn##+##zn######++nz###++++###+;:::::::::::::::::::::::::::::::;#:::::::::::::::::,+i:i#++++++
::::::::::::::::*z;:::;#++++++++z##+++++++#+#nz#####nz##+###++#z#++++++++++#;:::::::::::::::::::::::::::::::**:,:::::::::::::::;+;;:#++++++
:::::::::::::::,i#::::;##+++++++#z#++++++#+znz##+##z##++#+++##n##+####++++##*::::;::::::::::::::::::::::::::+;:::::::::::::::::**;::*++++++
::::::::::::::::;#:::::+#+++++++#n#+++++++nn#####+z##+####+#+#z#########+####;:;:::::::::::::::::::::::::::;+::::::::::::::::::+i:::i#+++++

*/

#define pb push_back
#define pii pair<int,int>
#define f first
#define s second
#define MOD 1000000007
#define mkp make_pair
#define FOR(i,l,r) for (int i=l;i<=r;i++)
#define ALL(x) x.begin(), x.end()
#define SZ(x) (int)(x.size())
#define DB 0
typedef long long ll;