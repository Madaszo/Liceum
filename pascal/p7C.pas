uses crt;
const N = 10;
var
        i,p:byte;
        t:array[1..N]of byte;
        w:array[1..N]of byte;
BEGIN
clrscr;
randomize;
for i:= 1 to N do
        begin
        w[i]:=19+i;
        write(w[i]:3);
        end;
writeln;
for i:=1 to N do
        begin
        p:=random(N+1-i)+1;
        t[i]:=w[p];
        w[p]:=w[N+1-i];
        write(t[i]:3);
        end;

readkey;
END.
