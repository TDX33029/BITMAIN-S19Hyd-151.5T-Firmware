// FUN_01193634 @ 01193634 size=440 calls_out=5 calls_in=0
// strings: 

void FUN_01193634(int param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  bool bVar5;
  
  if ((*(int *)(param_1 + 0x778) == 0) || (*(char *)(param_1 + 0x801) != '\x03')) goto LAB_011936d4;
  cVar1 = *(char *)(param_1 + 0x7e8);
  bVar5 = cVar1 == '\x03';
  if (bVar5) {
    cVar1 = *(char *)(param_1 + 0x7e4);
  }
  if (bVar5 && cVar1 == '\x03') {
    if (*(char *)(param_1 + 0x7e0) == '\0') {
      puVar3 = (undefined4 *)(param_1 + 0x790);
      piVar2 = (int *)*puVar3;
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar2;
        bVar5 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar5);
      *piVar2 = iVar4 + -1;
    }
    else {
      if (*(char *)(param_1 + 0x7e0) != '\x03') goto LAB_01193668;
      if (*(char *)(param_1 + 0x7dc) == '\0') {
        puVar3 = (undefined4 *)(param_1 + 0x798);
        piVar2 = (int *)*puVar3;
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *piVar2;
          bVar5 = (bool)hasExclusiveAccess(piVar2);
        } while (!bVar5);
        *piVar2 = iVar4 + -1;
LAB_01193790:
        if (iVar4 == 1) {
          DataMemoryBarrier(0xb);
          FUN_01182544(*puVar3);
        }
      }
      else if (*(char *)(param_1 + 0x7dc) == '\x03') {
        if (*(char *)(param_1 + 0x7d8) == '\x03') {
          cVar1 = *(char *)(param_1 + 0x7d4);
          bVar5 = cVar1 == '\x03';
          if (bVar5) {
            cVar1 = *(char *)(param_1 + 0x7b0);
          }
          if (bVar5 && cVar1 == '\x04') {
            FUN_0193c3cc(param_1 + 0x7b4);
          }
        }
        puVar3 = (undefined4 *)(param_1 + 0x79c);
        piVar2 = (int *)*puVar3;
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *piVar2;
          bVar5 = (bool)hasExclusiveAccess(piVar2);
        } while (!bVar5);
        *piVar2 = iVar4 + -1;
        goto LAB_01193790;
      }
      puVar3 = (undefined4 *)(param_1 + 0x794);
      piVar2 = (int *)*puVar3;
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar2;
        bVar5 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar5);
      *piVar2 = iVar4 + -1;
    }
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01182544(*puVar3);
    }
  }
LAB_01193668:
  piVar2 = *(int **)(param_1 + 0x7f4);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar5 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar5);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38efc(*(undefined4 *)(param_1 + 0x7f4));
  }
  piVar2 = *(int **)(param_1 + 0x7ec);
  *(undefined1 *)(param_1 + 0x800) = 0;
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar5 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar5);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0070451c(*(undefined4 *)(param_1 + 0x7ec),*(undefined4 *)(param_1 + 0x7f0));
  }
LAB_011936d4:
  FUN_01195280(param_1);
  return;
}

