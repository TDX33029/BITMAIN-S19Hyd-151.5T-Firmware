// FUN_00f2e038 @ 00f2e038 size=184 calls_out=6 calls_in=1
// strings: 

void FUN_00f2e038(int *param_1)

{
  int iVar1;
  bool bVar2;
  
  if (*param_1 == 0) {
    if (*(char *)((int)param_1 + 0xb1) == '\0') {
      FUN_00d315e0(param_1 + 0x28);
      FUN_00d31680(param_1 + 0x2a);
    }
    else {
      if (*(char *)((int)param_1 + 0xb1) != '\x03') {
        return;
      }
      FUN_00f2a48c(param_1 + 2);
      if ((4 < (uint)param_1[0x1a]) || ((1 << (param_1[0x1a] & 0xffU) & 0x16U) == 0)) {
        FUN_00963164(param_1 + 0x1b);
      }
      FUN_00d315e0(param_1 + 0x28);
      FUN_00d31680(param_1 + 0x2a);
    }
    FUN_005faf6c(param_1 + 0x2b);
    return;
  }
  if (*param_1 != 1) {
    return;
  }
  iVar1 = param_1[2];
  bVar2 = iVar1 == 0 && param_1[3] == 0;
  if (iVar1 != 0 || param_1[3] != 0) {
    iVar1 = param_1[4];
    bVar2 = iVar1 == 0;
  }
  if (bVar2) {
    return;
  }
  FUN_00f80320(iVar1,param_1[5]);
  return;
}

