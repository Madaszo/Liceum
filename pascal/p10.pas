uses crt;
        const N=255;   // Nie wi©cej ni¾ byte
        const Z=245;   // +10; nie przekracza† byte
var
        l,p,b:byte;
        t:array[1..N]of byte;
BEGIN
clrscr;
randomize;
for l:=1 to N do
        begin
        t[l]:=random(Z)+10;
        write(t[l]:4);
        end;
gotoxy(1,wherey+3);
for l:=1 to N-1 do
        for p:=l+1 to N do
                if t[p]<t[l] then
                        begin
                        b:=t[p];
                        t[p]:=t[l];
                        t[l]:=b
                        end;
for l:=1 to N do
        write(t[l]:4);
readkey;
END.
