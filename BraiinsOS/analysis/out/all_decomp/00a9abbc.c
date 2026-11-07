// FUN_00a9abbc @ 00a9abbc size=768 calls_out=8 calls_in=7
// strings: 

undefined1 FUN_00a9abbc(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  bool bVar5;
  
  if (*(uint *)(param_1 + 8) != 2) {
    iVar2 = *(int *)(param_1 + 0xc);
    if ((*(uint *)(param_1 + 8) & 1) != 0) {
      iVar2 = iVar2 + (*(int *)(*(int *)(param_1 + 0x10) + 8) - 1U & 0xfffffff8) + 8;
    }
    (**(code **)(*(int *)(param_1 + 0x10) + 0x30))(iVar2,param_1);
  }
  if (7 < *(byte *)(param_1 + 0x47)) goto switchD_00a9ac20_caseD_1;
  switch(*(byte *)(param_1 + 0x47)) {
  case 0:
    piVar3 = *(int **)(param_1 + 0x40);
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar5 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar5);
    *piVar3 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00aa7b14(*(undefined4 *)(param_1 + 0x40));
    }
  default:
    goto switchD_00a9ac20_caseD_1;
  case 3:
    if (*(int *)(param_1 + 0x48) != 0) {
      FUN_00aa0a58(*(int *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),1);
    }
    goto LAB_00a9ae48;
  case 4:
    if (*(char *)(param_1 + 0x78) == '\x03') {
      if (*(char *)(param_1 + 0x74) == '\x03') {
        cVar1 = *(char *)(param_1 + 0x70);
        bVar5 = cVar1 == '\x03';
        if (bVar5) {
          cVar1 = *(char *)(param_1 + 0x6c);
        }
        if ((bVar5 && cVar1 == '\x03') && (*(int *)(param_1 + 100) != 0)) {
          FUN_00aa190c(*(int *)(param_1 + 100),*(undefined4 *)(param_1 + 0x68),1);
        }
      }
      piVar3 = *(int **)(param_1 + 0x54);
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar3;
        bVar5 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar5);
      *piVar3 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00aa7b14(*(undefined4 *)(param_1 + 0x54));
      }
    }
    goto LAB_00a9ae40;
  case 5:
    FUN_00a9b07c(param_1 + 0x48);
    break;
  case 6:
    if (*(int *)(param_1 + 0x48) != 0) {
      FUN_00aa0a58(*(int *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),1);
    }
    break;
  case 7:
    if (*(char *)(param_1 + 0x4dc) == '\x03') {
      FUN_00a9b298(param_1 + 0x50);
    }
    else if (*(char *)(param_1 + 0x4dc) == '\0') {
      iVar2 = *(int *)(param_1 + 0x48);
      piVar3 = (int *)(iVar2 + 0x44);
      do {
        iVar4 = *piVar3;
        bVar5 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar5);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        FUN_00a8cda4(iVar2 + 8);
      }
      piVar3 = *(int **)(param_1 + 0x48);
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar3;
        bVar5 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar5);
      *piVar3 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00aa79bc(*(undefined4 *)(param_1 + 0x48));
      }
    }
  }
  if (*(char *)(param_1 + 0x44) != '\0') {
    iVar2 = *(int *)(param_1 + 0x28);
    piVar3 = (int *)(iVar2 + 0x44);
    do {
      iVar4 = *piVar3;
      bVar5 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar5);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      FUN_00a8cda4(iVar2 + 8);
    }
    piVar3 = *(int **)(param_1 + 0x28);
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar5 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar5);
    *piVar3 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00aa79bc(*(undefined4 *)(param_1 + 0x28));
    }
  }
  piVar3 = *(int **)(param_1 + 0x38);
  *(undefined2 *)(param_1 + 0x44) = 0;
  if (piVar3 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar5 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar5);
    *piVar3 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00aa7b14(*(undefined4 *)(param_1 + 0x38));
    }
  }
LAB_00a9ae40:
  FUN_00a1f528(param_1 + 0x20);
LAB_00a9ae48:
  piVar3 = *(int **)(param_1 + 0x34);
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar5 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar5);
  *piVar3 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aa7b14(*(undefined4 *)(param_1 + 0x34));
  }
  *(undefined1 *)(param_1 + 0x46) = 0;
switchD_00a9ac20_caseD_1:
  if (*(uint *)(param_1 + 8) != 2) {
    iVar2 = *(int *)(param_1 + 0xc);
    if ((*(uint *)(param_1 + 8) & 1) != 0) {
      iVar2 = iVar2 + (*(int *)(*(int *)(param_1 + 0x10) + 8) - 1U & 0xfffffff8) + 8;
    }
    (**(code **)(*(int *)(param_1 + 0x10) + 0x34))(iVar2,param_1);
  }
  return DAT_018dd947;
}

