// FUN_00d38948 @ 00d38948 size=480 calls_out=10 calls_in=2
// strings: 

void FUN_00d38948(int *param_1)

{
  int *piVar1;
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
    if (*(char *)((int)param_1 + 0x537) == '\0') {
      piVar1 = (int *)param_1[0x140];
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar1;
        bVar3 = (bool)hasExclusiveAccess(piVar1);
      } while (!bVar3);
      *piVar1 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_011772ac(param_1[0x140]);
      }
      FUN_00d38e38(param_1 + 0x141);
      FUN_019bb7e0(param_1[0x144],param_1[0x145]);
      FUN_019bb7e0(param_1[0x147],param_1[0x148]);
      FUN_019bb7e0(param_1[0x14a],param_1[0x14b]);
      FUN_005faf6c(param_1 + 0x142);
      piVar1 = (int *)param_1[0x143];
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar1;
        bVar3 = (bool)hasExclusiveAccess(piVar1);
      } while (!bVar3);
      *piVar1 = iVar2 + -1;
    }
    else {
      if (*(char *)((int)param_1 + 0x537) != '\x03') {
        return;
      }
      FUN_00d35d8c(param_1 + 2);
      FUN_019ede44(param_1 + 0x10f);
      FUN_00d38d48(param_1 + 0x118);
      piVar1 = (int *)param_1[0x13f];
      DataMemoryBarrier(0xb);
      *(undefined1 *)(piVar1 + 2) = 0;
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar1;
        bVar3 = (bool)hasExclusiveAccess(piVar1);
      } while (!bVar3);
      *piVar1 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01a38efc(param_1[0x13f]);
      }
      piVar1 = (int *)param_1[0x140];
      *(undefined1 *)((int)param_1 + 0x536) = 0;
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar1;
        bVar3 = (bool)hasExclusiveAccess(piVar1);
      } while (!bVar3);
      *piVar1 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_011772ac(param_1[0x140]);
      }
      FUN_00d38e38(param_1 + 0x141);
      FUN_019bb7e0(param_1[0x144],param_1[0x145]);
      FUN_019bb7e0(param_1[0x147],param_1[0x148]);
      FUN_019bb7e0(param_1[0x14a],param_1[0x14b]);
      FUN_005faf6c(param_1 + 0x142);
      piVar1 = (int *)param_1[0x143];
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar1;
        bVar3 = (bool)hasExclusiveAccess(piVar1);
      } while (!bVar3);
      *piVar1 = iVar2 + -1;
    }
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0121cce0(param_1[0x143]);
      return;
    }
    return;
  }
  return;
}

