// FUN_0118de20 @ 0118de20 size=720 calls_out=15 calls_in=1
// strings: 

void FUN_0118de20(int param_1)

{
  char cVar1;
  ushort uVar2;
  int *piVar3;
  int iVar4;
  bool bVar5;
  
  FUN_019ede44(param_1 + 0x98c);
  FUN_0118de90(param_1);
  FUN_0118e0b0(param_1 + 0xa0);
  switch(*(undefined1 *)(param_1 + 0xa48)) {
  case 0:
    piVar3 = *(int **)(param_1 + 0x9cc);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar5 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar5);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0121d018(*(undefined4 *)(param_1 + 0x9cc));
    }
    piVar3 = *(int **)(param_1 + 0x9d0);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar5 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar5);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_011772ac(*(undefined4 *)(param_1 + 0x9d0));
    }
    piVar3 = *(int **)(param_1 + 0x9d4);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar5 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar5);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01177340(*(undefined4 *)(param_1 + 0x9d4));
      return;
    }
  default:
    return;
  case 3:
    uVar2 = (ushort)*(byte *)(param_1 + 0xa8c);
    bVar5 = uVar2 == 3;
    if (bVar5) {
      uVar2 = *(ushort *)(param_1 + 0xa6c);
    }
    if (bVar5 && uVar2 == 3) {
      FUN_0187266c(*(undefined1 *)(param_1 + 0xa70),*(undefined4 *)(param_1 + 0xa74));
    }
    goto LAB_0118e6a0;
  case 4:
    cVar1 = *(char *)(param_1 + 0xaa4);
    bVar5 = cVar1 == '\x03';
    if (bVar5) {
      cVar1 = *(char *)(param_1 + 0xa68);
    }
    if (bVar5 && cVar1 == '\x03') {
      cVar1 = *(char *)(param_1 + 0xaa0);
      bVar5 = cVar1 == '\x03';
      if (bVar5) {
        cVar1 = *(char *)(param_1 + 0xa9c);
      }
      if (bVar5 && cVar1 == '\x03') {
        FUN_019e12b8(param_1 + 0xa7c);
        if (*(int *)(param_1 + 0xa88) != 0) {
          (**(code **)(*(int *)(param_1 + 0xa88) + 0xc))(*(undefined4 *)(param_1 + 0xa8c));
        }
      }
    }
    goto LAB_0118e698;
  case 5:
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0xa4c),*(undefined4 *)(param_1 + 0xa50));
    break;
  case 6:
    if (*(char *)(param_1 + 0xa84) == '\x03') {
      cVar1 = *(char *)(param_1 + 0xa80);
      bVar5 = cVar1 == '\x03';
      if (bVar5) {
        cVar1 = *(char *)(param_1 + 0xa5c);
      }
      if (bVar5 && cVar1 == '\x04') {
        FUN_0193c3cc(param_1 + 0xa60);
      }
    }
    break;
  case 7:
    if (*(char *)(param_1 + 0xaba) == '\x03') {
      FUN_00ba6dc4(param_1 + 0xa50);
    }
    FUN_019f8c54(*(undefined4 *)(param_1 + 0xa40),1);
    break;
  case 8:
    if (*(char *)(param_1 + 0xa84) == '\x03') {
      cVar1 = *(char *)(param_1 + 0xa80);
      bVar5 = cVar1 == '\x03';
      if (bVar5) {
        cVar1 = *(char *)(param_1 + 0xa5c);
      }
      if (bVar5 && cVar1 == '\x04') {
        FUN_0193c3cc(param_1 + 0xa60);
      }
    }
    break;
  case 9:
    if (*(char *)(param_1 + 0xaba) == '\x03') {
      FUN_00ba6dc4(param_1 + 0xa50);
    }
    FUN_019f8c54(*(undefined4 *)(param_1 + 0xa44),1);
    break;
  case 10:
    FUN_01139b38(*(undefined4 *)(param_1 + 0xa54),*(undefined4 *)(param_1 + 0xa58));
  }
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0xa34),*(undefined4 *)(param_1 + 0xa38));
  FUN_00b76614(param_1 + 0xa24);
  if (*(int *)(param_1 + 0x9f4) == 2) {
    FUN_0118e8fc();
  }
LAB_0118e698:
  FUN_00b76614(param_1 + 0x9e4);
LAB_0118e6a0:
  piVar3 = *(int **)(param_1 + 0x9e0);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar5 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar5);
  *piVar3 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01177340(*(undefined4 *)(param_1 + 0x9e0));
  }
  piVar3 = *(int **)(param_1 + 0x9dc);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar5 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar5);
  *piVar3 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_011772ac(*(undefined4 *)(param_1 + 0x9dc));
  }
  piVar3 = *(int **)(param_1 + 0x9d8);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar5 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar5);
  *piVar3 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0121d018(*(undefined4 *)(param_1 + 0x9d8));
    return;
  }
  return;
}

