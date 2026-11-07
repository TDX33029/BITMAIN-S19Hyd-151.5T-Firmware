// FUN_01828ca0 @ 01828ca0 size=332 calls_out=4 calls_in=0
// strings: 

void FUN_01828ca0(char *param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  
  cVar1 = param_1[0x154];
  if (cVar1 != '\0') {
    if (cVar1 == '\x03') {
      if (param_1[0x290] == '\x03') {
        pcVar4 = param_1 + 500;
      }
      else {
        if (param_1[0x290] != '\0') goto LAB_01828d40;
        pcVar4 = param_1 + 0x158;
      }
      FUN_017520a0(pcVar4);
    }
    else {
      if (cVar1 != '\x04') {
        return;
      }
      FUN_01828ee4(param_1 + 0x160);
      piVar3 = *(int **)(param_1 + 0x158);
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar3;
        bVar2 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar2);
      *piVar3 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_018fa168(*(undefined4 *)(param_1 + 0x158));
      }
    }
LAB_01828d40:
    if (param_1[0x156] != '\0') {
      piVar3 = *(int **)(param_1 + 0x14);
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar3;
        bVar2 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar2);
      *piVar3 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_018fa168(*(undefined4 *)(param_1 + 0x14));
      }
    }
    if (param_1[0x155] == '\0') {
      return;
    }
    goto LAB_01828dc4;
  }
  if (param_1[0x150] == '\x03') {
    pcVar4 = param_1 + 0xb4;
LAB_01828d90:
    FUN_017520a0(pcVar4);
  }
  else if (param_1[0x150] == '\0') {
    pcVar4 = param_1 + 0x18;
    goto LAB_01828d90;
  }
  piVar3 = *(int **)(param_1 + 0x14);
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_018fa168(*(undefined4 *)(param_1 + 0x14));
  }
LAB_01828dc4:
  if ((*param_1 == '\0') && (*(int *)(param_1 + 4) != -0x80000000)) {
    FUN_019bb7e0(*(int *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
    return;
  }
  return;
}

