// FUN_0171378c @ 0171378c size=132 calls_out=3 calls_in=2
// strings: 

void FUN_0171378c(int *param_1)

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
    if ((char)param_1[0xb] == '\x03') {
      FUN_017131b8(param_1[6],param_1[7]);
      FUN_017058e4(param_1 + 5);
      *(undefined1 *)((int)param_1 + 0x2d) = 0;
      return;
    }
    if ((char)param_1[0xb] == '\0') {
      FUN_017131b8(param_1[2],param_1[3]);
      FUN_017058e4(param_1 + 4);
      return;
    }
    return;
  }
  return;
}

