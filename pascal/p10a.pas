uses crt;
        const N=220;   // Nie wi©cej ni¾ byte
        const Z=246;   // +10; nie przekracza† byte
var
        l,k,zmiana:byte;
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
for l:=1 to N do
        write(t[l]:4);
readkey;
END.
