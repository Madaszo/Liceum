uses crt;
        const N=100;
var
        min,max,i:byte;
        t:array[1..N]of byte;
BEGIN
clrscr;
randomize;
for i:=1 to N do
        begin
        t[i]:=random(90)+10;
        write(t[i]:3);
        end;
min:=t[1];
max:=t[1];
writeln;
for i:=2 to N do
        begin
        if t[i]<min then
                min:=t[i]
        else
                if t[i]>max then
                        max:=t[i];
        end;
writeln('maksymalna liczba wynosi: ',max);
writeln('minimalna liczba wynosi: ',min);
readkey;
END.
