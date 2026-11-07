// FUN_01077260 @ 01077260 size=216 calls_out=7 calls_in=4
// strings: 

void FUN_01077260(undefined4 *param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = *(char *)(param_1 + 0xd);
  if (cVar1 == '\0') {
    FUN_019bb7e0(*param_1,param_1[1]);
    return;
  }
  if (cVar1 == '\x03') {
    if (*(char *)(param_1 + 0x1e) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x1d);
      bVar2 = cVar1 == '\x03';
      if (bVar2) {
        cVar1 = *(char *)(param_1 + 0x14);
      }
      if (bVar2 && cVar1 == '\x04') {
        FUN_0193c3cc(param_1 + 0x15);
      }
    }
  }
  else {
    if (cVar1 != '\x04') {
      return;
    }
    if (*(char *)(param_1 + 0x17f) == '\x03') {
      FUN_0103b1f4(param_1 + 0x24);
    }
    FUN_019bb7e0(param_1[0x10],param_1[0x11]);
    *(undefined1 *)((int)param_1 + 0x37) = 0;
    FUN_019bb7e0(param_1[0x1c],param_1[0x1d]);
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  FUN_01193f64(param_1 + 0xc);
  *(undefined1 *)((int)param_1 + 0x39) = 0;
  FUN_00d38e38(param_1 + 0xb);
  *(undefined1 *)((int)param_1 + 0x35) = 0;
  FUN_010785f4(param_1 + 10);
  *(undefined1 *)((int)param_1 + 0x3a) = 0;
  FUN_005faf6c(param_1 + 9);
  *(undefined2 *)((int)param_1 + 0x3b) = 0;
  FUN_019bb7e0(param_1[5],param_1[6]);
  *(undefined1 *)((int)param_1 + 0x36) = 0;
  return;
}

