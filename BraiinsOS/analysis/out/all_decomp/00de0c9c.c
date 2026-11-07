// FUN_00de0c9c @ 00de0c9c size=524 calls_out=11 calls_in=3
// strings: 

void FUN_00de0c9c(int *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  switch(*(undefined1 *)((int)param_1 + 0x106)) {
  case 0:
    param_1 = param_1 + 0x3c;
    iVar3 = *param_1;
    piVar2 = (int *)(iVar3 + 0xa4);
    do {
      iVar4 = *piVar2;
      bVar5 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar5);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      FUN_0163b708(iVar3 + 0x88);
    }
    piVar2 = (int *)*param_1;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar5 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar5);
    *piVar2 = iVar3 + -1;
    goto LAB_00de0ea4;
  default:
    return;
  case 3:
    FUN_00ef7cf0(param_1 + 0x42);
    if (param_1[0x42] == 0) {
      FUN_00e46678(param_1[0x43]);
      piVar2 = (int *)param_1[0x43];
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar5 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar5);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00aac878(param_1[0x43]);
      }
    }
    piVar2 = (int *)param_1[0x44];
    if (piVar2 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar5 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar5);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00e48dc4(param_1[0x44]);
      }
    }
    if ((char)param_1[0x56] == '\x03') {
      cVar1 = (char)param_1[0x55];
      bVar5 = cVar1 == '\x03';
      if (bVar5) {
        cVar1 = *(char *)((int)param_1 + 0x131);
      }
      if (bVar5 && cVar1 == '\x04') {
        FUN_0163bdc0(param_1 + 0x4d);
        if (param_1[0x51] != 0) {
          (**(code **)(param_1[0x51] + 0xc))(param_1[0x52]);
        }
        *(undefined1 *)(param_1 + 0x4c) = 0;
      }
    }
    break;
  case 4:
    FUN_005bc8a0(param_1 + 0x42);
    *(undefined1 *)((int)param_1 + 0x105) = 0;
    break;
  case 5:
    FUN_005bc8a0(param_1 + 0x42);
  }
  piVar2 = (int *)param_1[0x3f];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar5 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar5);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aaca60(param_1[0x3f]);
  }
  FUN_00efbca8(param_1);
  if (*param_1 != 0) {
    thunk_FUN_016d3fb4(param_1[1]);
  }
  param_1 = param_1 + 0x38;
  iVar3 = *param_1;
  piVar2 = (int *)(iVar3 + 0xa4);
  do {
    iVar4 = *piVar2;
    bVar5 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar5);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    FUN_0163b708(iVar3 + 0x88);
  }
  piVar2 = (int *)*param_1;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar5 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar5);
  *piVar2 = iVar3 + -1;
LAB_00de0ea4:
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aacce0(*param_1);
    return;
  }
  return;
}

