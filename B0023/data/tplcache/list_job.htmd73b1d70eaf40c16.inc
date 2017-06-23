<?php
$z[0]=Array("field","",62,81);
$z[0][4]['name']="title";
$z[1]=Array("global","",82,108);
$z[1][4]['name']="cfg_webname";
$z[2]=Array("field","",148,177);
$z[2][4]['name']="keywords";
$z[3]=Array("field","",216,274);
$z[3][4]['name']="description";
$z[3][4]['function']="html2text(@me)";
$z[4]=Array("include","",790,825);
$z[4][4]['filename']="head.htm";
$z[5]=Array("type","[field:typename /]",1605,1658);
$z[5][4]['typeid']="15";
$z[6]=Array("channelartlist","\n        <dl class=\"list-none navnow\">\n          <dt id='part2_25' {dede:field name='currentstyle'/}><a href='{dede:field name='typeurl'/}' class=\"zm\"><span>{dede:field name='typename'/}</span></a></dt>\n        </dl>\n        ",1707,2011);
$z[6][4]['type']="son";
$z[6][4]['noself']="yes";
$z[6][4]['typeid']="15";
$z[7]=Array("field","",2216,2238);
$z[7][4]['name']="typename";
$z[8]=Array("field","",2279,2301);
$z[8][4]['name']="position";
$z[9]=Array("list","\n        <dl class='list-none metlist'>\n          <dt><a href='[field:arcurl/]' title='[field:title/]' target='_self'>[field:title/]</a></dt>\n          <dd class='list '>\n            <div class='mis'><span>发布日期：[field:pubdate function='strftime(\"%Y-%m-%d\",@me)'/]</span></div>\n            <div class='editor met_editor'>\n             \n              \n              <div>[field:description function='cn_substr(@me,150)'/]...</div>\n              </span></div>\n            <div class='dtail'><span><a href='/a/job/yingpin/' title='在线应聘' target='_self'>在线应聘</a></span><span><a href='[field:arcurl/]' title='查看详细' target='_self'>查看详细</a></span></div>\n        </dl>\n        ",2410,3155);
$z[9][4]['pagesize']="5";
$z[10]=Array("pagelist","",3210,3276);
$z[10][4]['listitem']="index,end,pre,next,pageno";
$z[10][4]['listsize']="5";
$z[11]=Array("include","",3379,3414);
$z[11][4]['filename']="foot.htm";

?>