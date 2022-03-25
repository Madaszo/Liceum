uses crt;
var
        l,d:longint;
        czy_pierwsza:boolean;
BEGIN
clrscr;
for l:=1000000 to 2000000 do
        begin
        czy_pierwsza:=true;
        for d:=2 to trunc(sqrt(l)) do
                if l mod d = 0 then
                        begin
                        czy_pierwsza:=false ;
                        break;
                        end;
        if (czy_pierwsza) then
                write(l:8);
        end;
readkey;
END.
