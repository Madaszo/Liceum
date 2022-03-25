uses crt;
var
        kod:byte;
BEGIN
clrscr;
for kod:=0 to 255 do
        begin
        gotoxy(1+7*(kod div 25),kod mod 25 + 1);
        write(kod:3,': ',chr(kod));
        end;
readkey;
END.