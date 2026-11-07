// FUN_00d3d88c @ 00d3d88c size=576 calls_out=10 calls_in=2
// strings: 

void FUN_00d3d88c(int *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  bool bVar5;
  
  if (*param_1 == 1) {
    bVar5 = param_1[2] != 0 || param_1[3] != 0;
    iVar2 = 0;
    if (bVar5) {
      iVar2 = param_1[4];
    }
    if (bVar5 && iVar2 != 0) {
      FUN_01443048(iVar2,param_1[5]);
      return;
    }
switchD_00d3d8bc_caseD_1:
    return;
  }
  if (*param_1 != 0) {
    return;
  }
  switch(*(undefined1 *)((int)param_1 + 0x32)) {
  case 0:
    param_1 = param_1 + 0xb;
    piVar4 = (int *)*param_1;
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar4;
      bVar5 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar5);
    *piVar4 = iVar2 + -1;
    goto LAB_00d3d9cc;
  default:
    goto switchD_00d3d8bc_caseD_1;
  case 3:
    if ((char)param_1[0x1c1] != '\x03') goto switchD_00d3d940_default;
    break;
  case 4:
    if ((char)param_1[0x1c] == '\x03') {
      cVar1 = (char)param_1[0x1b];
      bVar5 = cVar1 == '\x03';
      if (bVar5) {
        cVar1 = (char)param_1[0x12];
      }
      if (bVar5 && cVar1 == '\x04') {
        FUN_0193c3cc(param_1 + 0x13);
      }
    }
  case 5:
    uVar3 = (uint)*(byte *)((int)param_1 + 0x31);
    bVar5 = uVar3 == 1;
    if (bVar5) {
      uVar3 = param_1[8];
    }
    if (bVar5 && uVar3 == 0) {
      piVar4 = (int *)param_1[9];
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar4;
        bVar5 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar5);
      *piVar4 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00a956ec(param_1[9]);
      }
    }
    goto switchD_00d3d940_default;
  }
  switch((char)param_1[0x15]) {
  case '\x03':
    if ((char)param_1[0x48] == '\x03') {
      FUN_00d35804(param_1 + 0x17);
    }
    break;
  case '\x04':
    if (*(char *)((int)param_1 + 0x5f6) == '\x03') {
      if ((char)param_1[0x17a] == '\x03') {
        piVar4 = param_1 + 200;
LAB_00d3dadc:
        FUN_00d35898(piVar4);
      }
      else if ((char)param_1[0x17a] == '\0') {
        piVar4 = param_1 + 0x16;
        goto LAB_00d3dadc;
      }
      *(undefined1 *)(param_1 + 0x17d) = 0;
    }
    goto LAB_00d3dae8;
  case '\x05':
    if (*(char *)((int)param_1 + 0x5f6) == '\x03') {
      if ((char)param_1[0x17a] == '\x03') {
        piVar4 = param_1 + 200;
LAB_00d3daa0:
        FUN_00d35898(piVar4);
      }
      else if ((char)param_1[0x17a] == '\0') {
        piVar4 = param_1 + 0x16;
        goto LAB_00d3daa0;
      }
      *(undefined1 *)(param_1 + 0x17d) = 0;
    }
    goto LAB_00d3dacc;
  case '\x06':
    if (*(char *)((int)param_1 + 0x6fe) == '\x03') {
      if ((char)param_1[0x1bc] == '\x03') {
        piVar4 = param_1 + 0x10a;
LAB_00d3dab8:
        FUN_00d35898(piVar4);
      }
      else if ((char)param_1[0x1bc] == '\0') {
        piVar4 = param_1 + 0x58;
        goto LAB_00d3dab8;
      }
      *(undefined1 *)(param_1 + 0x1bf) = 0;
    }
    FUN_00d3b8cc(param_1 + 0x16);
LAB_00d3dacc:
    FUN_00a573e8(param_1 + 0x12);
LAB_00d3dae8:
    FUN_0084ec48(param_1 + 0xf);
  }
switchD_00d3d940_default:
  *(undefined1 *)((int)param_1 + 0x31) = 0;
  FUN_00668c84(param_1[6]);
  param_1 = param_1 + 10;
  piVar4 = (int *)*param_1;
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar4;
    bVar5 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar5);
  *piVar4 = iVar2 + -1;
LAB_00d3d9cc:
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01182544(*param_1);
    return;
  }
  return;
}

