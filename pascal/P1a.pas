uses crt;
var
        t:array[1..3,1..5]of integer;
        w,k:byte;

BEGIN
clrscr;
randomize;
for w:=1 to 3 do
        begin
        for k:=1 to 5 do
                begin
                t[w,k]:=-20+random(171);
                write(t[w,k]:5);
                end;
        writeln;
        end;
readkey;
END.

