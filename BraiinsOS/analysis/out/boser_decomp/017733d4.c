// FUN_017733d4 @ 017733d4 size=140 calls_out=3 calls_in=2
// strings: 

void FUN_017733d4(int *param_1)

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
    if ((char)param_1[0x1a] == '\x03') {
      FUN_0177327c(param_1 + 0x11);
      if (param_1[0xe] == 2) {
        return;
      }
      FUN_01772dfc(param_1 + 0xe);
      return;
    }
    if ((char)param_1[0x1a] == '\0') {
      FUN_01772dfc(param_1 + 2);
      FUN_0177327c(param_1 + 5);
      return;
    }
  }
  return;
}

