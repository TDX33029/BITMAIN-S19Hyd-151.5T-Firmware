// FUN_0074889c @ 0074889c size=424 calls_out=7 calls_in=1
// strings: 

void FUN_0074889c(undefined4 *param_1)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  bool bVar5;
  
  cVar1 = *(char *)(param_1 + 3);
  if (cVar1 == '\0') {
    piVar3 = (int *)*param_1;
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar5 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar5);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a38efc(*param_1);
    }
    piVar3 = (int *)param_1[1];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar5 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar5);
    *piVar3 = iVar4 + -1;
    goto LAB_00748a2c;
  }
  if (cVar1 == '\x03') {
    if (*(char *)(param_1 + 0x12) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x11);
      bVar5 = cVar1 == '\x03';
      if (bVar5) {
        cVar1 = *(char *)(param_1 + 8);
      }
      if (bVar5 && cVar1 == '\x04') {
        FUN_019f9a9c(param_1 + 9);
        if (param_1[10] != 0) {
          (**(code **)(param_1[10] + 0xc))(param_1[0xb]);
        }
      }
    }
  }
  else {
    if (cVar1 != '\x04') {
      return;
    }
    if (*(char *)(param_1 + 0xaa) == '\x03') {
      uVar2 = (uint)*(byte *)(param_1 + 0x3a);
      if (uVar2 - 3 < 2) {
        FUN_007372d8(param_1 + 0x36);
        *(undefined1 *)((int)param_1 + 0xea) = 0;
      }
      else if (uVar2 == 6) {
        FUN_00741c1c(param_1 + 0x3c);
      }
      else {
        if (uVar2 != 5) goto LAB_007489d4;
        FUN_00741c1c(param_1 + 0x50);
        FUN_01431b40(param_1 + 0x3c);
      }
      if (*(char *)((int)param_1 + 0xe9) != '\0') {
        FUN_010a7ed4(param_1 + 0x1e);
      }
      *(undefined1 *)((int)param_1 + 0xe9) = 0;
    }
LAB_007489d4:
    FUN_019f8c54(param_1[2],1);
  }
  piVar3 = (int *)*param_1;
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar5 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar5);
  *piVar3 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38efc(*param_1);
  }
  piVar3 = (int *)param_1[1];
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar5 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar5);
  *piVar3 = iVar4 + -1;
LAB_00748a2c:
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38efc(param_1[1]);
    return;
  }
  return;
}

