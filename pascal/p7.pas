uses crt;
var
        i:byte;
        t:array[1..10]of byte;
        w:array[20..70] of boolean;
BEGIN
clrscr;
for i:=1 to 10 do
        begin
        repeat
                t[i]:=random(51)+20;
        until not w[t[i]];
        w[t[i]]:= true;
        write(t[i]:4);
        end;
readkey;

END.