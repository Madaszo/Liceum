uses crt;
const N=10;
const Z=10;
type
        typtab=array[1..N]of byte;
var
        t:typtab;
        i:byte;
        sr:real;
procedure Srednia(t:typtab;var sr:real);
var
                i:byte;
Begin
sr:=0;
for i:=1 to N do
        sr:=sr+t[i];
        sr:=sr/N;
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
Srednia(t,sr);
writeln('wynik: ',sr:0:3);
write('qäiec');
readkey;
END.
