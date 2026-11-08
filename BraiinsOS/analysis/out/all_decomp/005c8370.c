// FUN_005c8370 @ 005c8370 size=660 calls_out=9 calls_in=4
// strings: 

void FUN_005c8370(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  bool bVar8;
  
  iVar5 = 0x24;
  switch(*(undefined1 *)(param_1 + 0x38)) {
  case 0:
    goto switchD_005c8390_caseD_0;
  default:
    return;
  case 3:
    FUN_005bd080(param_1 + 0x40);
    break;
  case 4:
    cVar1 = *(char *)(param_1 + 0x68);
    bVar8 = cVar1 == '\x03';
    if (bVar8) {
      cVar1 = *(char *)(param_1 + 0x65);
    }
    if (bVar8 && cVar1 == '\x03') {
      cVar1 = *(char *)(param_1 + 0x55);
      if (cVar1 == '\x05') {
        uVar6 = *(undefined4 *)(param_1 + 0x58);
        puVar7 = *(undefined4 **)(param_1 + 0x5c);
        pcVar4 = (code *)*puVar7;
        if (pcVar4 != (code *)0x0) {
          (*pcVar4)(uVar6);
        }
        if (puVar7[1] != 0) {
          thunk_FUN_016d3fb4(uVar6);
        }
        FUN_00e44900(*(undefined4 *)(param_1 + 0x4c));
      }
      else {
        if (cVar1 != '\x04') {
          if ((cVar1 == '\x03') && (*(int *)(param_1 + 0x58) != 0)) {
            FUN_00e44660(*(int *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x5c),1);
          }
          break;
        }
        if (*(int *)(param_1 + 0x58) != 0) {
          FUN_00e44660(*(int *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x5c),1);
        }
      }
      FUN_00e44900(*(undefined4 *)(param_1 + 0x44));
    }
    break;
  case 5:
    cVar1 = *(char *)(param_1 + 0xa5);
    if (cVar1 != '\x05') {
      if (cVar1 == '\x04') {
        FUN_005bd080(param_1 + 0xa8);
      }
      else {
        if (cVar1 != '\x03') break;
        cVar1 = *(char *)(param_1 + 0xdc);
        bVar8 = cVar1 == '\x03';
        if (bVar8) {
          cVar1 = *(char *)(param_1 + 0xd8);
        }
        if (bVar8 && cVar1 == '\x03') {
          FUN_00e7c67c(param_1 + 0xc0);
          if (*(int *)(param_1 + 0xc4) != 0) {
            (**(code **)(*(int *)(param_1 + 0xc4) + 0xc))(*(undefined4 *)(param_1 + 200));
          }
        }
      }
      goto switchD_005c8580_default;
    }
    cVar1 = *(char *)(param_1 + 0xd4);
    bVar8 = cVar1 == '\x03';
    if (bVar8) {
      cVar1 = *(char *)(param_1 + 0xd1);
    }
    if (!bVar8 || cVar1 != '\x03') goto switchD_005c8580_default;
    switch(*(undefined1 *)(param_1 + 0xbe)) {
    case 3:
      if (*(int *)(param_1 + 0xc4) != 0) {
        FUN_00e44660(*(int *)(param_1 + 0xc4),*(undefined4 *)(param_1 + 200),1);
      }
      break;
    case 4:
      if (*(int *)(param_1 + 0xc4) != 0) {
        FUN_00e44660(*(int *)(param_1 + 0xc4),*(undefined4 *)(param_1 + 200),1);
      }
      goto LAB_005c8624;
    case 5:
      puVar7 = *(undefined4 **)(param_1 + 200);
      uVar6 = *(undefined4 *)(param_1 + 0xc4);
      pcVar4 = (code *)*puVar7;
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)(uVar6);
      }
      iVar5 = puVar7[1];
      goto LAB_005c85f0;
    case 6:
      uVar6 = *(undefined4 *)(param_1 + 0xc4);
      puVar7 = *(undefined4 **)(param_1 + 200);
      pcVar4 = (code *)*puVar7;
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)(uVar6);
      }
      iVar5 = puVar7[1];
LAB_005c85f0:
      if (iVar5 != 0) {
        thunk_FUN_016d3fb4(uVar6);
      }
      FUN_00e44900(*(undefined4 *)(param_1 + 0xb4));
LAB_005c8624:
      FUN_00e44900(*(undefined4 *)(param_1 + 0xac));
    }
switchD_005c8580_default:
    FUN_00a07b4c(param_1 + 0x40);
    break;
  case 6:
    cVar1 = *(char *)(param_1 + 0x68);
    bVar8 = cVar1 == '\x03';
    if (bVar8) {
      cVar1 = *(char *)(param_1 + 100);
    }
    if (bVar8 && cVar1 == '\x03') {
      FUN_00e7c67c(param_1 + 0x4c);
      if (*(int *)(param_1 + 0x50) != 0) {
        (**(code **)(*(int *)(param_1 + 0x50) + 0xc))(*(undefined4 *)(param_1 + 0x54));
      }
    }
  }
  FUN_00e7decc(param_1);
  piVar2 = *(int **)(param_1 + 8);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar8 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar8);
  *piVar2 = iVar3 + -1;
  iVar5 = 0x10;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0078205c(*(undefined4 *)(param_1 + 8));
  }
switchD_005c8390_caseD_0:
  FUN_005c49b4(param_1 + iVar5);
  return;
}

