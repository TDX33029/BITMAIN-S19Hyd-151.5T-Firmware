// FUN_00e43358 @ 00e43358 size=488 calls_out=9 calls_in=1
// strings: 

void FUN_00e43358(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  switch(*(undefined1 *)(param_1 + 0x9d)) {
  case 0:
    FUN_00a210b0(param_1);
    piVar2 = *(int **)(param_1 + 0x68);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar4 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar4);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01177340(*(undefined4 *)(param_1 + 0x68));
      return;
    }
    return;
  default:
    goto switchD_00e43374_caseD_1;
  case 3:
    if (*(char *)(param_1 + 0xb4) == '\x03') {
      FUN_01139b38(*(undefined4 *)(param_1 + 0xac),*(undefined4 *)(param_1 + 0xb0));
    }
    goto LAB_00e43508;
  case 4:
    FUN_00bba254(param_1 + 0xa8);
    goto LAB_00e434d8;
  case 5:
    if (*(char *)(param_1 + 0xdc) == '\x03') {
      cVar1 = *(char *)(param_1 + 0xd8);
      bVar4 = cVar1 == '\x03';
      if (bVar4) {
        cVar1 = *(char *)(param_1 + 0xd4);
      }
      if (bVar4 && cVar1 == '\x03') {
        FUN_0193c3cc(param_1 + 0xb4);
      }
    }
    goto LAB_00e434cc;
  case 6:
    if (*(char *)(param_1 + 0xdc) == '\x03') {
      cVar1 = *(char *)(param_1 + 0xd8);
      bVar4 = cVar1 == '\x03';
      if (bVar4) {
        cVar1 = *(char *)(param_1 + 0xd4);
      }
      if (bVar4 && cVar1 == '\x03') {
        FUN_0193c3cc(param_1 + 0xb4);
      }
    }
    goto LAB_00e434c4;
  case 7:
    if (*(char *)(param_1 + 0xdc) == '\x03') {
      cVar1 = *(char *)(param_1 + 0xd8);
      bVar4 = cVar1 == '\x03';
      if (bVar4) {
        cVar1 = *(char *)(param_1 + 0xd4);
      }
      if (bVar4 && cVar1 == '\x03') {
        FUN_0193c3cc(param_1 + 0xb4);
      }
    }
    break;
  case 8:
    if (*(char *)(param_1 + 0x144) == '\x03') {
      FUN_00e1003c(param_1 + 0xf0);
    }
    bVar4 = *(uint *)(param_1 + 0x148) < 2;
    if ((uint)-*(int *)(param_1 + 0x14c) < (uint)bVar4) {
      FUN_00a210b0((uint *)(param_1 + 0x148),-(*(int *)(param_1 + 0x14c) + (uint)!bVar4));
    }
    FUN_00b5f0e4(param_1 + 0xa8);
    *(undefined1 *)(param_1 + 0x9f) = 0;
    FUN_019f8c54(*(undefined4 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x94));
  }
  FUN_019f8c54(*(undefined4 *)(param_1 + 0x84),*(undefined4 *)(param_1 + 0x88));
LAB_00e434c4:
  FUN_019f8c54(*(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x7c));
LAB_00e434cc:
  FUN_019f8c54(*(undefined4 *)(param_1 + 0x60),1);
LAB_00e434d8:
  piVar2 = *(int **)(param_1 + 0x70);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar4 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar4);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00a967c0(*(undefined4 *)(param_1 + 0x70));
  }
LAB_00e43508:
  piVar2 = *(int **)(param_1 + 0x6c);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar4 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar4);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01177340(*(undefined4 *)(param_1 + 0x6c));
  }
  if (*(char *)(param_1 + 0xa0) != '\0') {
    FUN_00a210b0(param_1 + 0x30);
  }
  *(undefined1 *)(param_1 + 0xa0) = 0;
switchD_00e43374_caseD_1:
  return;
}

