// FUN_0177230c @ 0177230c size=132 calls_out=3 calls_in=2
// strings: 

void FUN_0177230c(int *param_1)

{
  int iVar1;
  bool bVar2;
  
  if (*param_1 == 1) {
    bVar2 = param_1[2] != 0 || param_1[3] != 0;
    iVar1 = 0;
    if (bVar2) {
      iVar1 = param_1[4];
    }
    if (bVar2 && iVar1 != 0) {
      FUN_01443048(iVar1,param_1[5]);
      return;
    }
  }
  else if (*param_1 == 0) {
    if ((char)param_1[0x6f] == '\x03') {
      FUN_01771acc(param_1 + 0x36);
      FUN_01771c90(param_1 + 0x6d);
      *(undefined1 *)((int)param_1 + 0x1bd) = 0;
      return;
    }
    if ((char)param_1[0x6f] == '\0') {
      FUN_01771acc(param_1 + 2);
      FUN_01771c90(param_1 + 0x6c);
      return;
    }
    return;
  }
  return;
}

