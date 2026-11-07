// FUN_00d3ac34 @ 00d3ac34 size=476 calls_out=10 calls_in=2
// strings: 

void FUN_00d3ac34(int *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  if (*param_1 == 1) {
    iVar3 = 0;
    if (param_1[2] != 0 || param_1[3] != 0) {
      iVar3 = param_1[4];
    }
    if ((param_1[2] != 0 || param_1[3] != 0) && iVar3 != 0) {
      FUN_01443048(iVar3,param_1[5]);
      return;
    }
    return;
  }
  if (*param_1 != 0) {
    return;
  }
  cVar1 = (char)param_1[0x18];
  if (cVar1 == '\0') {
    piVar4 = (int *)param_1[0x16];
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a38efc(param_1[0x16]);
    }
    FUN_00d32270(param_1 + 2);
    piVar4 = (int *)param_1[0x17];
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_011772ac(param_1[0x17]);
    }
    goto LAB_00d3ae04;
  }
  if (cVar1 == '\x03') {
    if ((char)param_1[0x24] == '\x03') {
      FUN_0193c3cc(param_1 + 0x1c);
    }
  }
  else {
    if (cVar1 != '\x04') {
      return;
    }
    if ((char)param_1[0x4e] == '\x03') {
      cVar1 = *(char *)((int)param_1 + 0xba);
      if (cVar1 != '\x03') {
        if (cVar1 == '\x05') {
          FUN_00d3af84(param_1 + 0x3e);
          iVar5 = 0xe8;
          *(undefined1 *)(param_1 + 0x2e) = 0;
          iVar3 = 0xec;
        }
        else {
          if (cVar1 != '\x04') goto LAB_00d3ad94;
          FUN_00d3af84(param_1 + 0x3c);
          iVar5 = 0xe0;
          *(undefined1 *)((int)param_1 + 0xb9) = 0;
          iVar3 = 0xe4;
        }
        FUN_019bb7e0(*(undefined4 *)((int)param_1 + iVar5),*(undefined4 *)((int)param_1 + iVar3));
      }
      FUN_019bb7e0(param_1[0x26],param_1[0x27]);
      FUN_00d3b00c(param_1 + 0x1e);
    }
LAB_00d3ad94:
    FUN_019f8c54(param_1[0x1b],param_1[0x1c]);
  }
  piVar4 = (int *)param_1[0x16];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar4;
    bVar2 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar2);
  *piVar4 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38efc(param_1[0x16]);
  }
  FUN_00d32270(param_1 + 2);
  piVar4 = (int *)param_1[0x17];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar4;
    bVar2 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar2);
  *piVar4 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_011772ac(param_1[0x17]);
  }
LAB_00d3ae04:
  FUN_00d3238c(param_1 + 8);
  return;
}

