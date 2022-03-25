uses crt;
var
        j,i,l:byte;
        tabela:array[1..5,1..5] of byte;
BEGIN
clrscr;
l:=1;
for i:=1 to 5 do
        begin
        for j:=1 to 5 do
                begin
                tabela[j,i]:=l;
                l:=l+1;
                write(tabela[j,i]:3);
                end;
        writeln;
        end;
for i:=2 to 5 do
        begin
        for j:=1 to i do
                begin
                l:=tabela[j,i];
                tabela[j,i]:=tabela[i,j];
                tabela[i,j]:=l
                end;
        end;
gotoxy(1,wherey+3);
for i:=1 to 5 do
        begin
        for j:=1 to 5 do
                begin
                write(tabela[j,i]:3);
                end;
        writeln;
        end;
readkey;
END.

