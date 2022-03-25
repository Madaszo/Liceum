uses crt;
var
        t:array[1..10]of byte;
        i:byte;

BEGIN
clrscr;
randomize;
for i:=1 to 10 do
        begin
        t[i]:=10+random(81);
        write(t[i],'  ');
        end;
readkey;
END.

