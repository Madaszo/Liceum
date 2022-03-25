uses crt;
const N=10;
const Z=10;
type
        typtab=array[1..N]of byte;
var
        t,tsort:typtab;
        i:byte;
procedure Sortuj(var t:typtab);
var
                l,k,zmiana:byte;
Begin
k:=N-1;
repeat
        zmiana:=1;
        for l:=1 to k do
                begin
                if  t[l+1]<t[l] then
                        begin
                        zmiana:=t[l];
                        t[l]:=t[l+1];
                        t[l+1]:=zmiana;
                        zmiana:=l;
                        end;
                end;
        k:=zmiana-1;
until zmiana=1;

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
tsort:=t;
Sortuj(tsort);
for i:=1 to N do
        write(tsort[i]:4);
writeln;
write('qäiec');
readkey;
END.
