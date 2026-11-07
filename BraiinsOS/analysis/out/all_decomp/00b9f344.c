// FUN_00b9f344 @ 00b9f344 size=772 calls_out=10 calls_in=3
// strings: 

void FUN_00b9f344(undefined4 *param_1)

{
  char cVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  switch(*(undefined1 *)((int)param_1 + 0x1f)) {
  case 0:
    param_1 = param_1 + 2;
    FUN_016af0b0(param_1);
    piVar2 = (int *)*param_1;
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar7 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar7);
    *piVar2 = iVar4 + -1;
    goto LAB_00b9f648;
  default:
    goto switchD_00b9f360_caseD_1;
  case 3:
    uVar5 = param_1[9];
    puVar6 = (undefined4 *)param_1[10];
    if ((code *)*puVar6 != (code *)0x0) {
      (*(code *)*puVar6)(uVar5);
    }
    goto LAB_00b9f610;
  case 4:
    if (*(char *)(param_1 + 0x2b) == '\x03') {
      FUN_00b9e31c(param_1 + 0x12);
    }
    break;
  case 5:
    cVar1 = *(char *)((int)param_1 + 0x49);
    bVar7 = cVar1 == '\x03';
    if (bVar7) {
      cVar1 = *(char *)(param_1 + 0xf);
    }
    if (bVar7 && cVar1 == '\x03') {
      puVar6 = param_1 + 0xd;
      FUN_016af0b0(puVar6);
      piVar2 = (int *)*puVar6;
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar2;
        bVar7 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar7);
      *piVar2 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_008f4138(*puVar6);
      }
    }
    break;
  case 6:
    cVar1 = *(char *)(param_1 + 0x31);
    bVar7 = cVar1 == '\x03';
    if (bVar7) {
      cVar1 = *(char *)(param_1 + 0x2b);
    }
    if (bVar7 && cVar1 == '\x03') {
      FUN_00b9e31c(param_1 + 0x12);
    }
    break;
  case 7:
    uVar5 = param_1[9];
    puVar6 = (undefined4 *)param_1[10];
    if ((code *)*puVar6 != (code *)0x0) {
      (*(code *)*puVar6)(uVar5);
    }
    goto LAB_00b9f610;
  case 8:
    if (param_1[9] != 0) {
      FUN_00c8204c(param_1[9],param_1[10],1);
    }
    goto LAB_00b9f534;
  case 9:
    uVar5 = param_1[9];
    puVar6 = (undefined4 *)param_1[10];
    pcVar3 = (code *)*puVar6;
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(uVar5);
    }
    if (puVar6[1] != 0) {
      thunk_FUN_016d3fb4(uVar5);
    }
    FUN_00c822ec(param_1[5]);
LAB_00b9f534:
    *(undefined1 *)((int)param_1 + 0x1e) = 0;
    break;
  case 10:
    if (*(char *)(param_1 + 0x7c) == '\x03') {
      if (*(char *)(param_1 + 0x77) == '\x03') {
        FUN_00b9e31c(param_1 + 0x5e);
      }
      FUN_00ac8e24(param_1 + 0x1a);
    }
    break;
  case 0xb:
    uVar5 = param_1[9];
    puVar6 = (undefined4 *)param_1[10];
    if ((code *)*puVar6 != (code *)0x0) {
      (*(code *)*puVar6)(uVar5);
    }
LAB_00b9f610:
    if (puVar6[1] != 0) {
LAB_00b9f620:
      thunk_FUN_016d3fb4(uVar5);
    }
    break;
  case 0xc:
    if (*(char *)(param_1 + 0x2b) == '\x03') {
      FUN_00b9e31c(param_1 + 0x12);
    }
    break;
  case 0xd:
    uVar5 = param_1[0x1e];
    puVar6 = (undefined4 *)param_1[0x1f];
    pcVar3 = (code *)*puVar6;
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(uVar5);
    }
    if (puVar6[1] != 0) {
      thunk_FUN_016d3fb4(uVar5);
    }
    FUN_00a07b4c(param_1 + 10);
    break;
  case 0xe:
    cVar1 = *(char *)(param_1 + 0x1c);
    bVar7 = cVar1 == '\x03';
    if (bVar7) {
      cVar1 = *(char *)(param_1 + 0x1b);
    }
    if (bVar7 && cVar1 == '\x03') {
      cVar1 = *(char *)(param_1 + 0x1a);
      bVar7 = cVar1 == '\x03';
      if (bVar7) {
        cVar1 = *(char *)(param_1 + 0x11);
      }
      if (bVar7 && cVar1 == '\x04') {
        FUN_0163c790(param_1 + 0x12);
        if (param_1[0x13] != 0) {
          (**(code **)(param_1[0x13] + 0xc))(param_1[0x14]);
        }
      }
    }
    break;
  case 0xf:
    if (param_1[9] != 0) {
      FUN_00c8204c(param_1[9],param_1[10],1);
    }
    break;
  case 0x10:
    FUN_00b9f9bc(param_1 + 0xc);
    if (param_1[9] == 0) break;
    uVar5 = param_1[10];
    goto LAB_00b9f620;
  case 0x11:
    if (*(char *)(param_1 + 0xf) == '\x03') {
      uVar5 = param_1[0xd];
      puVar6 = (undefined4 *)param_1[0xe];
      if ((code *)*puVar6 != (code *)0x0) {
        (*(code *)*puVar6)(uVar5);
      }
      goto LAB_00b9f610;
    }
  }
  FUN_016af0b0(param_1);
  piVar2 = (int *)*param_1;
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar7 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar7);
  *piVar2 = iVar4 + -1;
LAB_00b9f648:
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008f4138(*param_1);
    return;
  }
switchD_00b9f360_caseD_1:
  return;
}

