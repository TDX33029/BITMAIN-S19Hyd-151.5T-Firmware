// FUN_014a8930 @ 014a8930 size=268 calls_out=9 calls_in=2
// strings: 

void FUN_014a8930(int *param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  
  if (*param_1 == 1) {
    bVar4 = param_1[2] != 0 || param_1[3] != 0;
    iVar2 = 0;
    if (bVar4) {
      iVar2 = param_1[4];
    }
    if (bVar4 && iVar2 != 0) {
      FUN_01443048(iVar2,param_1[5]);
      return;
    }
  }
  else if (*param_1 == 0) {
    if ((char)param_1[0xcb] == '\0') {
      FUN_00b76614(param_1 + 2);
      piVar1 = (int *)param_1[0xc0];
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar1;
        bVar4 = (bool)hasExclusiveAccess(piVar1);
      } while (!bVar4);
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
      FUN_019f1850(param_1 + 8);
      FUN_00668d74(param_1 + 0x14);
      iVar2 = param_1[9];
      bVar4 = param_1[8] == 0;
      bVar3 = bVar4 && iVar2 == 0;
      if (!bVar4 || iVar2 != 0) {
        iVar2 = param_1[0x10];
        bVar3 = iVar2 == 0;
      }
      if (!bVar3) {
        (**(code **)(iVar2 + 0xc))(param_1[0x11]);
      }
      FUN_014a83b4(param_1 + 0x1c);
      FUN_006763fc(param_1 + 0xc1);
    }
    if (param_1[0xbd] == -0x80000000) {
      return;
    }
    FUN_019bb7e0(param_1[0xbd],param_1[0xbe]);
    return;
  }
  return;
}

