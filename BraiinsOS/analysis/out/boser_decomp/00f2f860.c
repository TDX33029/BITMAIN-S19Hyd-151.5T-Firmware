// FUN_00f2f860 @ 00f2f860 size=120 calls_out=3 calls_in=1
// strings: 

void FUN_00f2f860(int *param_1)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  
  if (*param_1 == 0) {
    piVar2 = param_1 + 2;
    if ((char)param_1[0x66] == '\x03') {
      FUN_00f2b008(param_1 + 0x1e);
      piVar2 = param_1 + 0x10;
    }
    else if ((char)param_1[0x66] != '\0') {
      return;
    }
    FUN_00d39234(piVar2);
    return;
  }
  if (*param_1 != 1) {
    return;
  }
  iVar1 = param_1[2];
  bVar3 = iVar1 == 0 && param_1[3] == 0;
  if (iVar1 != 0 || param_1[3] != 0) {
    iVar1 = param_1[4];
    bVar3 = iVar1 == 0;
  }
  if (bVar3) {
    return;
  }
  FUN_00f80320(iVar1,param_1[5]);
  return;
}

