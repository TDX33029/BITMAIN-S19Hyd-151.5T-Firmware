// FUN_00737600 @ 00737600 size=476 calls_out=8 calls_in=2
// strings: 

void FUN_00737600(int *param_1)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  bool bVar5;
  
  if (*param_1 == 1) {
    iVar4 = 0;
    if (param_1[2] != 0 || param_1[3] != 0) {
      iVar4 = param_1[4];
    }
    if ((param_1[2] != 0 || param_1[3] != 0) && iVar4 != 0) {
      FUN_01443048(iVar4,param_1[5]);
      return;
    }
    return;
  }
  if (*param_1 != 0) {
    return;
  }
  cVar1 = (char)param_1[5];
  if (cVar1 == '\0') {
    piVar3 = (int *)param_1[2];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar5 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar5);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a38efc(param_1[2]);
    }
    piVar3 = (int *)param_1[3];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar5 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar5);
    *piVar3 = iVar4 + -1;
    goto LAB_007377c4;
  }
  if (cVar1 == '\x03') {
    if ((char)param_1[0x14] == '\x03') {
      cVar1 = (char)param_1[0x13];
      bVar5 = cVar1 == '\x03';
      if (bVar5) {
        cVar1 = (char)param_1[10];
      }
      if (bVar5 && cVar1 == '\x04') {
        FUN_019f9a9c(param_1 + 0xb);
        if (param_1[0xc] != 0) {
          (**(code **)(param_1[0xc] + 0xc))(param_1[0xd]);
        }
      }
    }
  }
  else {
    if (cVar1 != '\x04') {
      return;
    }
    if ((char)param_1[0xac] == '\x03') {
      uVar2 = (uint)*(byte *)(param_1 + 0x3c);
      if (uVar2 - 3 < 2) {
        FUN_007372d8(param_1 + 0x38);
        *(undefined1 *)((int)param_1 + 0xf2) = 0;
      }
      else if (uVar2 == 6) {
        FUN_007371b0(param_1 + 0x3e);
      }
      else {
        if (uVar2 != 5) goto LAB_0073776c;
        FUN_007371b0(param_1 + 0x52);
        FUN_01431b40(param_1 + 0x3e);
      }
      if (*(char *)((int)param_1 + 0xf1) != '\0') {
        FUN_010a7ed4(param_1 + 0x20);
      }
      *(undefined1 *)((int)param_1 + 0xf1) = 0;
    }
LAB_0073776c:
    FUN_019f8c54(param_1[4],1);
  }
  piVar3 = (int *)param_1[2];
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar5 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar5);
  *piVar3 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38efc(param_1[2]);
  }
  piVar3 = (int *)param_1[3];
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar5 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar5);
  *piVar3 = iVar4 + -1;
LAB_007377c4:
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38efc(param_1[3]);
    return;
  }
  return;
}

