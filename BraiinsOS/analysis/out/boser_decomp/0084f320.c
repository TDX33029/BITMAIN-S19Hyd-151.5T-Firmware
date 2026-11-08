// FUN_0084f320 @ 0084f320 size=212 calls_out=5 calls_in=1
// strings: 

void FUN_0084f320(undefined4 *param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = *(char *)((int)param_1 + 0x35);
  if (cVar1 == '\0') {
    FUN_019bb7e0(*param_1,param_1[1]);
    FUN_019bb7e0(param_1[3],param_1[4]);
  }
  else {
    if (cVar1 == '\x03') {
      if (*(char *)(param_1 + 0x1c) == '\x03') {
        cVar1 = *(char *)(param_1 + 0x1b);
        bVar2 = cVar1 == '\x03';
        if (bVar2) {
          cVar1 = *(char *)(param_1 + 0x1a);
        }
        if (bVar2 && cVar1 == '\x03') {
          FUN_0193c3cc(param_1 + 0x12);
        }
      }
    }
    else {
      if (cVar1 != '\x04') {
        return;
      }
      FUN_0084f46c(param_1 + 0x1c);
      FUN_0084f2e8(param_1 + 0xf);
      *(undefined1 *)((int)param_1 + 0x39) = 0;
      FUN_019f8c54(param_1[10],param_1[0xb]);
    }
    if (*(char *)(param_1 + 0xe) != '\0') {
      FUN_019bb7e0(*param_1,param_1[1]);
    }
    if (*(char *)((int)param_1 + 0x37) != '\0') {
      FUN_019bb7e0(param_1[3],param_1[4]);
    }
    if (*(char *)((int)param_1 + 0x36) == '\0') {
      return;
    }
  }
  if (param_1[6] == -0x80000000) {
    return;
  }
  FUN_019bb7e0(param_1[6],param_1[7]);
  return;
}

