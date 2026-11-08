// FUN_00e5148c @ 00e5148c size=868 calls_out=14 calls_in=1
// strings: 

void FUN_00e5148c(int *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  bool bVar6;
  
  if (*(char *)((int)param_1 + 0x2ea) == '\0') {
    piVar2 = (int *)param_1[0xb8];
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar6 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar6);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00e45d08(param_1[0xb8]);
    }
    iVar3 = param_1[0xb6];
    piVar2 = (int *)(iVar3 + 0xa4);
    do {
      iVar4 = *piVar2;
      bVar6 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar6);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      FUN_0163b708(iVar3 + 0x88);
    }
    piVar2 = (int *)param_1[0xb6];
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar6 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar6);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00aacce0(param_1[0xb6]);
    }
    FUN_01663cc4(param_1[0xb9]);
    piVar2 = (int *)param_1[0xb9];
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar6 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar6);
    *piVar2 = iVar3 + -1;
    goto LAB_00e517f0;
  }
  if (*(char *)((int)param_1 + 0x2ea) != '\x03') {
    return;
  }
  switch(*(undefined1 *)((int)param_1 + 0x106)) {
  case 0:
    piVar5 = param_1 + 0x3c;
    iVar3 = *piVar5;
    piVar2 = (int *)(iVar3 + 0xa4);
    do {
      iVar4 = *piVar2;
      bVar6 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar6);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      FUN_0163b708(iVar3 + 0x88);
    }
    piVar2 = (int *)*piVar5;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar6 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar6);
    *piVar2 = iVar3 + -1;
    goto LAB_00e51768;
  default:
    goto switchD_00e514bc_caseD_1;
  case 3:
    FUN_00ef7cf0(param_1 + 0x42);
    if (param_1[0x42] == 0) {
      FUN_00e46678(param_1[0x43]);
      piVar2 = (int *)param_1[0x43];
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar6 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar6);
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
        bVar6 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar6);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00e48dc4(param_1[0x44]);
      }
    }
    if ((char)param_1[0x56] == '\x03') {
      cVar1 = (char)param_1[0x55];
      bVar6 = cVar1 == '\x03';
      if (bVar6) {
        cVar1 = *(char *)((int)param_1 + 0x131);
      }
      if (bVar6 && cVar1 == '\x04') {
        FUN_0163bdc0(param_1 + 0x4d);
        if (param_1[0x51] != 0) {
          (**(code **)(param_1[0x51] + 0xc))(param_1[0x52]);
        }
        *(undefined1 *)(param_1 + 0x4c) = 0;
      }
    }
    break;
  case 4:
    FUN_00e51b34(param_1 + 0x42);
    *(undefined1 *)((int)param_1 + 0x105) = 0;
    break;
  case 5:
    FUN_00e51b34(param_1 + 0x42);
  }
  piVar2 = (int *)param_1[0x3f];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar6 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar6);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aaca60(param_1[0x3f]);
  }
  FUN_00efbca8(param_1);
  if (*param_1 != 0) {
    thunk_FUN_016d3fb4(param_1[1]);
  }
  piVar5 = param_1 + 0x38;
  iVar3 = *piVar5;
  piVar2 = (int *)(iVar3 + 0xa4);
  do {
    iVar4 = *piVar2;
    bVar6 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar6);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    FUN_0163b708(iVar3 + 0x88);
  }
  piVar2 = (int *)*piVar5;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar6 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar6);
  *piVar2 = iVar3 + -1;
LAB_00e51768:
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aacce0(*piVar5);
  }
switchD_00e514bc_caseD_1:
  FUN_0163bdc0(param_1 + 0xab);
  if (param_1[0xaf] != 0) {
    (**(code **)(param_1[0xaf] + 0xc))(param_1[0xb0]);
  }
  piVar2 = (int *)param_1[0xb8];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar6 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar6);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00e45d08(param_1[0xb8]);
  }
  FUN_01663cc4(param_1[0xb9]);
  piVar2 = (int *)param_1[0xb9];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar6 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar6);
  *piVar2 = iVar3 + -1;
LAB_00e517f0:
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01665328(param_1 + 0xb9);
    return;
  }
  return;
}

