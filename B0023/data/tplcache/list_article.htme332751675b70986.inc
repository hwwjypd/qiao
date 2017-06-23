<?php
$z[0]=Array("field","",369,388);
$z[0][4]['name']="title";
$z[1]=Array("global","",389,415);
$z[1][4]['name']="cfg_webname";
$z[2]=Array("field","",455,484);
$z[2][4]['name']="keywords";
$z[3]=Array("field","",523,581);
$z[3][4]['name']="description";
$z[3][4]['function']="html2text(@me)";
$z[4]=Array("include","",3251,3286);
$z[4][4]['filename']="head.htm";
$z[5]=Array("field","",3805,3827);
$z[5][4]['name']="typename";
$z[6]=Array("channel","\n            <li class=\"\"><a href=\"[field:typeurl/]\">[field:typename/]</a></li>\n            ",5813,6021);
$z[6][4]['type']="son";
$z[6][4]['currentstyle']="<li class='current'><a href='~typelink~'>~typename~</a></li>";
$z[7]=Array("list","\n                    <div class=\"entry-item\">\n                      <div class=\"time\">\n                        <p class=\"time-day\">[field:pubdate function='strftime(\"%d\",@me)'/]</p>\n                        <p class=\"time-date\">[field:pubdate function='strftime(\"%Y-%m\",@me)'/]</p>\n                      </div>\n                      <div class=\"entry-title\">\n                        <h2><a href=\"[field:arcurl/]\" target=\"_blank\">[field:title/]</a></h2>\n                      </div>\n                      <div class=\"entry-summary\">\n                        <div class=\"qhd-content\">\n                          <p>[field:description function='cn_substr(@me,250)'/]...</p>\n                        </div>\n                      </div>\n                    </div>\n                    ",6547,7359);
$z[7][4]['pagesize']="10";
$z[8]=Array("pagelist","",7462,7528);
$z[8][4]['listitem']="index,end,pre,next,pageno";
$z[8][4]['listsize']="5";
$z[9]=Array("include","",7706,7741);
$z[9][4]['filename']="foot.htm";

?>