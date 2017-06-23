<?php
$z[0]=Array("global","",487,513);
$z[0][4]['name']="cfg_webname";
$z[1]=Array("field","(@me==\"\")? @me=\" class='current'\":@me=\"\";",806,897);
$z[1][4]['name']="typeid";
$z[1][4]['runphp']="yes";
$z[2]=Array("channelartlist","\n            <li {dede:field name='currentstyle'/}><a class=\"first-level\" href=\"{dede:field name='typeurl'/}\" target=\"\"><strong>{dede:field name='typename'/}</strong></a><i></i>\n              <ul class=\"\">\n                {dede:channel type='son' noself='yes'}\n                <li class=\"\"><a class=\"\" href=\"[field:typelink/]\" target=\"\"><strong>[field:typename/]</strong></a></li>\n                {/dede:channel}\n              </ul>\n            </li>\n            ",992,1518);
$z[2][4]['row']="10";
$z[2][4]['typeid']="top";
$z[3]=Array("global","",1915,1941);
$z[3][4]['name']="cfg_webname";
$z[4]=Array("channelartlist","\n          <li><span><a href=\"{dede:field name='typeurl'/}\">{dede:field name='typename'/}</a></span><a href=\"javascript:;\"><i class=\"touch-arrow-down\"></i></a>\n            <ul>\n              {dede:channel type='son' noself='yes'}\n              <li><a href=\"[field:typelink/]\"><span>[field:typename/]</span></a></li>\n              {/dede:channel}\n            </ul>\n          </li>\n          ",2733,3186);
$z[4][4]['row']="10";
$z[4][4]['typeid']="top";

?>