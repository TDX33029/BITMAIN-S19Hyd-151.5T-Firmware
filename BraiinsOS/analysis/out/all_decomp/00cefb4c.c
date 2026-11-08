// FUN_00cefb4c @ 00cefb4c size=292 calls_out=3 calls_in=10
// strings: 

void FUN_00cefb4c(undefined4 *param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  
  cVar1 = *(char *)(param_1 + 4);
  if (cVar1 == '\0') {
    piVar3 = (int *)param_1[2];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00790cd0(param_1[2]);
    }
    piVar3 = (int *)*param_1;
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0155edc8(*param_1);
      return;
    }
    return;
  }
  if (cVar1 != '\x03') {
    if (cVar1 != '\x04') {
      return;
    }
    piVar3 = (int *)param_1[6];
    if (*piVar3 == 0xcc) {
      DataMemoryBarrier(0xb);
      bVar2 = (bool)hasExclusiveAccess(piVar3);
      if (bVar2) {
        *piVar3 = 0x84;
        goto LAB_00cefc10;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    (**(code **)(piVar3[2] + 0x10))();
  }
LAB_00cefc10:
  if (*(char *)((int)param_1 + 0x11) != '\0') {
    piVar3 = (int *)param_1[6];
    if (*piVar3 == 0xcc) {
      DataMemoryBarrier(0xb);
      bVar2 = (bool)hasExclusiveAccess(piVar3);
      if (bVar2) {
        *piVar3 = 0x84;
        goto LAB_00cefc54;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    (**(code **)(piVar3[2] + 0x10))();
  }
LAB_00cefc54:
  *(undefined1 *)((int)param_1 + 0x11) = 0;
  FUN_00cefce4(param_1 + 3);
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined2 *)((int)param_1 + 0x12) = 0;
  return;
}

