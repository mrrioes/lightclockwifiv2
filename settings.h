const char settings_html[] PROGMEM = R"=====(
<!DOCTYPE HTML>
<html>
<head><title>Advanced Settings</title></head>
<body onload=tzupdate()>
<form action=/ method=GET>
Hour Marks: <select name=hourmarks>
<option value=0 $hourmarks0>none</option>
<option value=1 $hourmarks1>Midday</option>
<option value=2 $hourmarks2>Quadrants</option>
<option value=3 $hourmarks3>Hours</option>
<option value=4 $hourmarks4>Darken To Midday</option>
</select><br>

<input id=showsecondshidden type=hidden name=showsecondshidden value='0'>
Show Seconds<input type=checkbox name=showseconds $showseconds><br>
Sleep (24hr)<br><input type=text name=sleep value=$sleep><br>
Wake (24hr)<br><input type=text name=wake value=$wake><br>
Timezone:<br><input type=text name=timezone id=timezone></input><br>
<input type=submit name=submit value='Update Settings'/></form>
<a href=/>Return without saving</a><br>
<a href=/cleareeprom>Reset to factory default</a>
<script>function tzupdate(){var a=new Date();var b=a.getTimezoneOffset();document.getElementById("timezone").value=b/-60};</script>
</body>
</html>
)=====";
