// FUN_01773ea4 @ 01773ea4 size=252 calls_out=5 calls_in=2
// strings: 

void FUN_01773ea4(int *param_1)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  
  if (*param_1 == 1) {
    bVar3 = param_1[2] != 0 || param_1[3] != 0;
    iVar2 = 0;
    if (bVar3) {
      iVar2 = param_1[4];
    }
    if (bVar3 && iVar2 != 0) {
      FUN_01443048(iVar2,param_1[5]);
      return;
    }
  }
  else if (*param_1 == 0) {
    cVar1 = (char)param_1[0x1c9];
    if (cVar1 == '\x04') {
      FUN_0177357c(param_1 + 0x1ca);
      *(undefined1 *)((int)param_1 + 0x726) = 0;
      if (param_1[0xe6] == 5 && param_1[0xe7] == 0) {
        FUN_017736f8(param_1 + 0xe6);
      }
    }
    else {
      if (cVar1 != '\x03') {
        if (cVar1 == '\0') {
          FUN_0177357c(param_1 + 2);
          FUN_01773654(param_1 + 0xe4);
          FUN_017725ac(param_1 + 0x1c8);
          return;
        }
        return;
      }
      if (param_1[0x1cc] != 5 || param_1[0x1cd] != 0) {
        FUN_0177357c(param_1 + 0x1cc);
        FUN_01773654(param_1 + 0x2ae);
      }
    }
    if (*(char *)((int)param_1 + 0x725) != '\0') {
      FUN_017725ac(param_1 + 0x1ca);
    }
    *(undefined1 *)((int)param_1 + 0x725) = 0;
    return;
  }
  return;
}

