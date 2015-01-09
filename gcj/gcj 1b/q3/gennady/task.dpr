{$R+,S+,Q+,I+,O-}
{R-,S-,Q-,I-,O+}
var
  a,b: array [0..1111111] of longint;
  tt,qq,n,i,j: longint;
  first,ok: boolean;
  q: array [0..111] of longint;

procedure Sort(l,r:longint);
var
  i,j,x,tmp: longint;
begin
  i:=l; j:=r;
  x:=a[l+random(r-l+1)];
  repeat
    while a[i] < x do inc(i);
    while x < a[j] do dec(j);
    if i <= j then
    begin
      tmp:=a[i]; a[i]:=a[j]; a[j]:=tmp;
      tmp:=b[i]; b[i]:=b[j]; b[j]:=tmp;
      inc(i); dec(j);
    end;
  until i > j;
  if l < j then Sort(l,j);
  if i < r then Sort(i,r);
end;

begin
  assign(input,'in'); reset(input);
  assign(output,'out'); rewrite(output);
  read(tt);
  for qq:=1 to tt do
  begin
    writeln('Case #',qq,':');
    read(n);
    for i:=1 to n do read(q[i]);
    for i:=0 to 1 shl n-1 do
    begin
      a[i]:=0; b[i]:=i;
      for j:=1 to n do
        if i and (1 shl (j-1)) <> 0 then a[i]:=a[i]+q[j];
    end;
    Sort(0,1 shl n-1);
    ok:=False;
    for i:=0 to 1 shl n-2 do
      if a[i] = a[i+1] then
      begin
        first:=True;
        for j:=1 to n do
          if b[i] and (1 shl (j-1)) <> 0 then
          begin
            if not first then write(' ');
            first:=False;
            write(q[j]);
          end;
        writeln;
        first:=True;
        for j:=1 to n do
          if b[i+1] and (1 shl (j-1)) <> 0 then
          begin
            if not first then write(' ');
            first:=False;
            write(q[j]);
          end;
        writeln;
        ok:=True;
        break;
      end;
    if not ok then writeln('Impossible');
  end;
  close(input);
  close(output);
end.