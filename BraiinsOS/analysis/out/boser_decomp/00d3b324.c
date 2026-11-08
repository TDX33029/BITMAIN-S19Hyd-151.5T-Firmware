// FUN_00d3b324 @ 00d3b324 size=204 calls_out=8 calls_in=2
// strings: 

void FUN_00d3b324(int *param_1)

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
    if ((char)param_1[0x160] == '\x03') {
      if ((char)param_1[0x142] == '\x03') {
        FUN_01431b40(param_1 + 0x144);
      }
      FUN_00d36744(param_1 + 0x46);
      FUN_00d36930(param_1 + 0x36);
      if (param_1[0x34] != 0) {
        FUN_019d8724(param_1 + 0x34);
      }
      FUN_005f0424(param_1 + 2);
      return;
    }
    if ((char)param_1[0x160] != '\0') {
      return;
    }
    if (param_1[0x34] != 0) {
      FUN_019d8724();
    }
    FUN_005f0424(param_1 + 2);
    FUN_00b76614(param_1 + 0x2a);
    FUN_01139b38(param_1[0x32],param_1[0x33]);
    return;
  }
  return;
}

