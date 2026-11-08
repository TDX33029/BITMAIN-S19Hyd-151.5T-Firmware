// FUN_00b9ddf8 @ 00b9ddf8 size=688 calls_out=13 calls_in=2
// strings: 

void FUN_00b9ddf8(int param_1)

{
  byte bVar1;
  bool bVar2;
  int *piVar3;
  int *piVar4;
  char cVar5;
  int iVar6;
  code *pcVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  
  switch(*(undefined1 *)(param_1 + 0x217)) {
  case 0:
    piVar3 = (int *)(param_1 + 0x1d0);
    if (*piVar3 != 0) {
      FUN_016af0b0(piVar3);
      piVar4 = (int *)*piVar3;
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar4;
        bVar2 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar2);
      *piVar4 = iVar6 + -1;
      if (iVar6 == 1) {
        DataMemoryBarrier(0xb);
        FUN_008f4138(*piVar3);
      }
    }
    puVar10 = (undefined4 *)(param_1 + 0x1f8);
    FUN_016af0b0(puVar10);
    piVar3 = (int *)*puVar10;
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f4138(*puVar10);
      return;
    }
    return;
  default:
    goto switchD_00b9de14_caseD_1;
  case 3:
    if (*(int *)(param_1 + 0x228) != 0) {
      FUN_00c8204c(*(int *)(param_1 + 0x228),*(undefined4 *)(param_1 + 0x22c),1);
    }
    goto LAB_00b9e020;
  case 4:
    FUN_00b9e3b8(param_1 + 0x220);
    goto LAB_00b9e010;
  case 5:
    FUN_00b9e894(param_1 + 0x220);
    if (*(char *)(param_1 + 0x214) == '\0') goto LAB_00b9e010;
    goto LAB_00b9e008;
  case 6:
    cVar5 = *(char *)(param_1 + 0x240);
    if (cVar5 == '\x05') {
      FUN_00654988(param_1 + 0x244);
    }
    else if (cVar5 == '\x04') {
      FUN_00a07b4c(param_1 + 0x248);
    }
    else if (cVar5 == '\x03') {
      puVar10 = *(undefined4 **)(param_1 + 0x248);
      uVar9 = *(undefined4 *)(param_1 + 0x244);
      pcVar7 = (code *)*puVar10;
      if (pcVar7 != (code *)0x0) {
        (*pcVar7)(uVar9);
      }
      if (puVar10[1] != 0) {
        thunk_FUN_016d3fb4(uVar9);
      }
    }
    bVar1 = *(byte *)(param_1 + 0x220);
    iVar8 = 0x212;
    cVar5 = bVar1 - 4;
    if (bVar1 < 4) {
      cVar5 = '\x04';
    }
    if (cVar5 == '\x04') {
      if (bVar1 == 3) goto LAB_00b9dfe4;
    }
    else if (cVar5 == '\x05') {
LAB_00b9dfe4:
      (**(code **)**(undefined4 **)(param_1 + 0x224))();
    }
    goto LAB_00b9dff4;
  case 7:
    FUN_00b9ea9c(param_1 + 0x220);
    break;
  case 8:
    FUN_00b9ebd0(param_1 + 0x220);
  }
  piVar3 = *(int **)(param_1 + 0x208);
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar6 + -1;
  iVar8 = 0x216;
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008f3984(*(undefined4 *)(param_1 + 0x208));
  }
LAB_00b9dff4:
  *(undefined1 *)(param_1 + iVar8) = 0;
  if (*(char *)(param_1 + 0x214) != '\0') {
LAB_00b9e008:
    FUN_00b9ecfc(param_1);
  }
LAB_00b9e010:
  *(undefined1 *)(param_1 + 0x214) = 0;
  FUN_00c822ec(*(undefined4 *)(param_1 + 0x204));
LAB_00b9e020:
  if (*(char *)(param_1 + 0x215) != '\0') {
    puVar10 = (undefined4 *)(param_1 + 0x1d8);
    FUN_016af0b0(puVar10);
    piVar3 = (int *)*puVar10;
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f4138(*puVar10);
    }
  }
  *(undefined1 *)(param_1 + 0x215) = 0;
  if ((*(char *)(param_1 + 0x213) != '\0') && (piVar3 = (int *)(param_1 + 0x220), *piVar3 != 0)) {
    FUN_016af0b0(piVar3);
    piVar4 = (int *)*piVar3;
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f4138(*piVar3);
    }
  }
  *(undefined1 *)(param_1 + 0x213) = 0;
switchD_00b9de14_caseD_1:
  return;
}

