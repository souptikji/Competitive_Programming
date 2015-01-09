{$R+,S+,Q+,I+,O-}
{R-,S-,Q-,I-,O+}
var
  s,tt,qq,n,i,j,it: longint;
  need,tot,ll,rr,mid: extended;
  p: array [0..10010] of longint;
begin
  assign(input,'in'); reset(input);
  assign(output,'out'); rewrite(output);
  read(tt);
  for qq:=1 to tt do
  begin
    write('Case #',qq,':');
    read(n);
    s:=0;
    for i:=1 to n do
    begin
      read(p[i]);
      inc(s,p[i]);
    end;
    for i:=1 to n do
    begin
      ll:=0; rr:=1;
      for it:=1 to 300 do
      begin
        mid:=(ll+rr)*0.5;
        tot:=p[i]+s*mid;
        need:=0;
        for j:=1 to n do
          if (i <> j) and (p[j] < tot) then need:=need+(tot-p[j])/s;
        if need+mid > 1 then rr:=mid
        else ll:=mid;
      end;
      write(' ',(ll+rr)*50:0:17);
    end;
    writeln;
  end;
  close(input);
  close(output);
end.