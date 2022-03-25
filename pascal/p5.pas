uses crt;
var
        x,j,i,l:byte;
        tabela:array[1..5,1..3] of byte;
BEGIN
clrscr;
l:=1;
for i:=1 to 3 do
        begin
        for j:=1 to 5 do
                begin
                tabela[j,i]:=l;
                l:=l+1;
                write(tabela[j,i]:3);
                end;
        writeln;
        end;

for i:=1 to 3 do
        for j:=1 to 2 do
                begin
                x:=tabela[j,i];
                tabela[j,i]:=tabela[6-j,i];
                tabela[6-j,i]:=x;
                end;
gotoxy(1,wherey+3);
for i:=1 to 3 do
        begin
        for j:=1 to 5 do
                begin
                write(tabela[j,i]:3);
                end;
        writeln;
        end;
readkey;
END.

