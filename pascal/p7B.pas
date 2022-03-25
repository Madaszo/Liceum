uses crt;
var
        i:byte;
        t:array[1..10,1..2]of byte;
        w:array[20..70]of boolean;
BEGIN
clrscr;
randomize;
for i:=1 to 10 do
        begin
        repeat
                t[i,1]:=random(10)+20;
                t[i,2]:=t[i,2] + 1;
        until not w[t[i,1]];
        w[t[i,1]]:=True;
        write(t[i,1]:4);
        end;
writeln;
for i:=1 to 10 do
        write(t[i,2]:4);
readkey;
END.
