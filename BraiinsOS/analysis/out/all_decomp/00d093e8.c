// FUN_00d093e8 @ 00d093e8 size=504 calls_out=8 calls_in=3
// strings: 

void FUN_00d093e8(undefined4 *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  bool bVar5;
  
  if (*(char *)(param_1 + 0x2d) == '\0') {
    piVar2 = (int *)*param_1;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar5 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar5);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00fa8e94(*param_1);
    }
    param_1 = param_1 + 1;
    FUN_01663cc4(*param_1);
    piVar2 = (int *)*param_1;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar5 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar5);
    *piVar2 = iVar3 + -1;
  }
  else {
    if (*(char *)(param_1 + 0x2d) != '\x03') {
      return;
    }
    if (*(char *)((int)param_1 + 0xb1) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x18);
      bVar5 = cVar1 == '\x03';
      if (bVar5) {
        cVar1 = *(char *)(param_1 + 9);
      }
      if (bVar5 && cVar1 == '\x03') {
        cVar1 = *(char *)(param_1 + 0x17);
        bVar5 = cVar1 == '\x03';
        if (bVar5) {
          cVar1 = *(char *)(param_1 + 0x16);
        }
        if (bVar5 && cVar1 == '\x03') {
          FUN_0163aa10(param_1 + 0xe);
          if (param_1[0x11] != 0) {
            (**(code **)(param_1[0x11] + 0xc))(param_1[0x12]);
          }
        }
      }
      FUN_0163bdc0(param_1 + 0x1a);
      if (param_1[0x1e] != 0) {
        (**(code **)(param_1[0x1e] + 0xc))(param_1[0x1f]);
      }
      FUN_005e6cdc(param_1 + 0x22);
      if (param_1[0x25] != -1) {
        FUN_016dffb2();
      }
      FUN_00a414e8(param_1 + 0x22);
      puVar4 = param_1 + 0x29;
      FUN_01663cc4(*puVar4);
      piVar2 = (int *)*puVar4;
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar5 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar5);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01665328(puVar4);
      }
      piVar2 = (int *)param_1[0x28];
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar5 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar5);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00fa8e94(param_1[0x28]);
        return;
      }
      return;
    }
    if (*(char *)((int)param_1 + 0xb1) != '\0') {
      return;
    }
    piVar2 = (int *)param_1[0x2a];
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar5 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar5);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00fa8e94(param_1[0x2a]);
    }
    param_1 = param_1 + 0x2b;
    FUN_01663cc4(*param_1);
    piVar2 = (int *)*param_1;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar5 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar5);
    *piVar2 = iVar3 + -1;
  }
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01665328(param_1);
    return;
  }
  return;
}

