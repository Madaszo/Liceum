uses crt;
const N=10;
const Z=255;
type
        typtab=array[1..N]of byte;
var
        t:typtab;
        i:byte;
Function Srednia(t:typtab):real;
var
                i:byte;
                wynik:real;
Begin
wynik:=0;
for i:=1 to N do
        wynik:=wynik+t[i];

Srednia:=wynik/N;
End;

BEGIN
clrscr;
randomize;
for i:=1 to N do
        begin
        t[i]:=random(Z)+1;
        write(t[i]:4);
        end;
writeln;
writeln('wynik: ',Srednia(t):0:3);
write('qäiec');
readkey;
END.
