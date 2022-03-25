uses crt;
        const N=255;
var
        pmin,pmax,i:byte;
        t:array[1..N]of byte;
BEGIN
clrscr;
randomize;
for i:=1 to N do
        begin
        t[i]:=random(N)+10;
        write(t[i]:3);
        end;
pmin:=1;
pmax:=1;
writeln;
for i:=2 to N do
        if t[i]<t[pmin] then
                pmin:=i
        else
                if t[i]>t[pmax] then
                        pmax:=i;
writeln('maksymalna liczba wynosi: ',t[pmax]);
writeln('minimalna liczba wynosi: ',t[pmin]);
readkey;
END.
