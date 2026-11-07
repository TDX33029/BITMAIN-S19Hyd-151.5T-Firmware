// FUN_00b9da74 @ 00b9da74 size=512 calls_out=4 calls_in=2
// strings: 

void FUN_00b9da74(int *param_1)

{
  byte bVar1;
  bool bVar2;
  int *piVar3;
  int *piVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  
  if (*param_1 != 0) {
    if (*param_1 != 1) {
      return;
    }
    iVar7 = param_1[2];
    if (iVar7 == 0) {
      bVar1 = *(byte *)(param_1 + 4);
      cVar5 = bVar1 - 4;
      if (bVar1 < 4) {
        cVar5 = '\x04';
      }
      iVar6 = 0xc;
      if (cVar5 != '\x05') {
        if (cVar5 != '\x04') {
          return;
        }
        if (bVar1 != 3) {
          return;
        }
      }
    }
    else {
      iVar6 = 4;
      if (iVar7 != 2) {
        return;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00b9db40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)**(undefined4 **)((int)(param_1 + 2) + iVar6))();
    return;
  }
  cVar5 = (char)param_1[0x14];
  if (cVar5 == '\0') {
    piVar4 = param_1 + 2;
    if (*piVar4 != 0) {
      FUN_016af0b0(piVar4);
      piVar3 = (int *)*piVar4;
      DataMemoryBarrier(0xb);
      do {
        iVar7 = *piVar3;
        bVar2 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar2);
      *piVar3 = iVar7 + -1;
      if (iVar7 == 1) {
        DataMemoryBarrier(0xb);
        FUN_008f4138(*piVar4);
      }
    }
    param_1 = param_1 + 0xe;
    FUN_016af0b0(param_1);
    piVar4 = (int *)*param_1;
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar7 + -1;
    goto LAB_00b9dc58;
  }
  if (cVar5 == '\x03') {
    FUN_00b9ddf8(param_1 + 0x16);
  }
  else {
    if (cVar5 != '\x04') {
      return;
    }
    if ((char)param_1[0x3d] == '\x03') {
      FUN_00b9e31c(param_1 + 0x24);
    }
    bVar1 = *(byte *)(param_1 + 0x16);
    cVar5 = bVar1 - 4;
    if (bVar1 < 4) {
      cVar5 = '\x04';
    }
    if (cVar5 == '\x04') {
      if (bVar1 == 3) goto LAB_00b9dbcc;
    }
    else if (cVar5 == '\x05') {
LAB_00b9dbcc:
      (*(code *)**(undefined4 **)param_1[0x17])();
    }
    *(undefined1 *)((int)param_1 + 0x4e) = 0;
  }
  piVar3 = param_1 + 6;
  *(undefined1 *)((int)param_1 + 0x4f) = 0;
  FUN_016af0b0(piVar3);
  piVar4 = (int *)*piVar3;
  DataMemoryBarrier(0xb);
  do {
    iVar7 = *piVar4;
    bVar2 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar2);
  *piVar4 = iVar7 + -1;
  if (iVar7 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008f4138(*piVar3);
  }
  param_1 = param_1 + 4;
  if (*param_1 == 0) {
    return;
  }
  FUN_016af0b0(param_1);
  piVar4 = (int *)*param_1;
  DataMemoryBarrier(0xb);
  do {
    iVar7 = *piVar4;
    bVar2 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar2);
  *piVar4 = iVar7 + -1;
LAB_00b9dc58:
  if (iVar7 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008f4138(*param_1);
    return;
  }
  return;
}

