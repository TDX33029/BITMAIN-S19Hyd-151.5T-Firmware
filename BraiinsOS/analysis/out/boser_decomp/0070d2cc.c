// FUN_0070d2cc @ 0070d2cc size=148 calls_out=1 calls_in=2
// strings: Path segments must not start with `:`. For capture groups; use `{capture}`. If you meant to literally match a segment starting with a colon; call `without_v07_checks` on the router. | Path segments must not start with `*`. For wildcard capture; use `{*wildcard}`. If you meant to literally match a segment starting with an asterisk; call `without_v07_checks` on the router.

char * FUN_0070d2cc(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined2 local_14;
  
  local_14 = 1;
  local_20 = 1;
  local_1c = 0;
  local_24 = 0x2f;
  uStack_2c = 0;
  local_38 = 0x2f;
  uStack_34 = param_1;
  uStack_30 = param_2;
  local_28 = param_2;
  local_18 = param_2;
  while( true ) {
    do {
      uVar2 = FUN_01a5c3e4(&local_38);
      if ((char *)uVar2 == (char *)0x0) {
        return (char *)0x0;
      }
    } while ((int)((ulonglong)uVar2 >> 0x20) == 0);
    cVar1 = *(char *)uVar2;
    if (cVar1 == '*') break;
    if (cVar1 == ':') {
      return 
      "Path segments must not start with `:`. For capture groups, use `{capture}`. If you meant to literally match a segment starting with a colon, call `without_v07_checks` on the router."
      ;
    }
  }
  return 
  "Path segments must not start with `*`. For wildcard capture, use `{*wildcard}`. If you meant to literally match a segment starting with an asterisk, call `without_v07_checks` on the router."
  ;
}

