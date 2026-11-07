// FUN_014adb2c @ 014adb2c size=272 calls_out=7 calls_in=2
// strings: 

void FUN_014adb2c(int *param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  int unaff_r4;
  undefined4 *puVar4;
  bool bVar5;
  
  if (*param_1 != 0) {
    if (*param_1 != 1) {
      return;
    }
    bVar5 = param_1[2] == 0 && param_1[3] == 0;
    if (param_1[2] != 0 || param_1[3] != 0) {
      unaff_r4 = param_1[4];
      bVar5 = unaff_r4 == 0;
    }
    if (!bVar5) {
      puVar4 = (undefined4 *)param_1[5];
      pcVar3 = (code *)*puVar4;
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)(unaff_r4);
      }
      if (puVar4[1] != 0) {
        thunk_FUN_01be4678(unaff_r4);
        return;
      }
    }
    return;
  }
  if ((char)param_1[0xcb] == '\0') {
    FUN_00b76614(param_1 + 2);
    piVar1 = (int *)param_1[0xc0];
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar1;
      bVar5 = (bool)hasExclusiveAccess(piVar1);
    } while (!bVar5);
    *piVar1 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_014afd70(param_1[0xc0]);
    }
    FUN_010a7080(param_1 + 6);
    FUN_006763fc(param_1 + 0xc1);
    if (param_1[0xba] != -0x80000000) {
      FUN_019bb7e0(param_1[0xba],param_1[0xbb]);
    }
  }
  else {
    if ((char)param_1[0xcb] != '\x03') {
      return;
    }
    FUN_014adafc(param_1 + 8);
    FUN_006763fc(param_1 + 0xc1);
  }
  if (param_1[0xbd] == -0x80000000) {
    return;
  }
  FUN_019bb7e0(param_1[0xbd],param_1[0xbe]);
  return;
}

