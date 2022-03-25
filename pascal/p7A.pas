uses crt;
var
        i:byte;
        t:array[1..10]of byte;
        w:array[20..70] of byte;
BEGIN
clrscr;
randomize;
for i:=1 to 10 do
        begin
        repeat
                t[i]:=random(51)+20;
                w[t[i]]:=w[t[i]] + 1;
        until w[t[i]]=1;
        write(t[i]:4);
        end;
writeln;
for i:=1 to 10 do
        write(w[t[i]]:4);
readkey;
END.