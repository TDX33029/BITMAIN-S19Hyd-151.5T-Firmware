// FUN_00d09e50 @ 00d09e50 size=592 calls_out=10 calls_in=3
// strings: 

void FUN_00d09e50(undefined4 *param_1)

{
  char cVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  switch(*(undefined1 *)(param_1 + 3)) {
  case 0:
    piVar2 = (int *)*param_1;
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar7 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar7);
    *piVar2 = iVar4 + -1;
    goto LAB_00d0a060;
  default:
    goto switchD_00d09e6c_caseD_1;
  case 3:
    if (param_1[4] != 0) {
      FUN_00c8204c(param_1[4],param_1[5],1);
    }
    goto LAB_00d0a044;
  case 4:
    break;
  case 5:
    cVar1 = *(char *)(param_1 + 6);
    if (cVar1 == '\x05') {
      FUN_00cefb4c(param_1 + 7);
      goto switchD_00d09ec0_default;
    }
    if (cVar1 == '\x04') {
      FUN_00a07b4c(param_1 + 8);
      goto switchD_00d09ec0_default;
    }
    if (cVar1 != '\x03') goto switchD_00d09ec0_default;
    uVar5 = param_1[7];
    puVar6 = (undefined4 *)param_1[8];
    pcVar3 = (code *)*puVar6;
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(uVar5);
    }
    if (puVar6[1] == 0) goto switchD_00d09ec0_default;
    goto LAB_00d0a004;
  }
  switch(*(undefined1 *)(param_1 + 9)) {
  case 3:
    if (param_1[10] != 0) {
      FUN_00c8204c(param_1[10],param_1[0xb],1);
    }
    break;
  case 4:
    FUN_00ac9060(param_1 + 0xe);
    goto LAB_00d09fe0;
  case 5:
    FUN_00ac9060(param_1 + 0xe);
LAB_00d09fe0:
    if (param_1[10] != 0) {
      thunk_FUN_016d3fb4(param_1[0xb]);
    }
LAB_00d09ff4:
    if (param_1[6] != 0) {
LAB_00d0a000:
      uVar5 = param_1[7];
LAB_00d0a004:
      thunk_FUN_016d3fb4(uVar5);
    }
    break;
  case 6:
    if (*(char *)(param_1 + 0x27) != '\x03') goto LAB_00d09ff4;
    if (*(char *)((int)param_1 + 0x55) == '\x04') {
      uVar5 = param_1[0x16];
      puVar6 = (undefined4 *)param_1[0x17];
      pcVar3 = (code *)*puVar6;
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)(uVar5);
      }
      if (puVar6[1] != 0) {
        thunk_FUN_016d3fb4(uVar5);
      }
      FUN_008672e4(param_1[0x12]);
    }
    else {
      if (*(char *)((int)param_1 + 0x55) != '\x03') goto LAB_00d09ff4;
      if (*(char *)(param_1 + 0x25) == '\x03') {
        cVar1 = *(char *)(param_1 + 0x24);
        bVar7 = cVar1 == '\x03';
        if (bVar7) {
          cVar1 = *(char *)(param_1 + 0x1b);
        }
        if (bVar7 && cVar1 == '\x04') {
          FUN_0163c790(param_1 + 0x1c);
          if (param_1[0x1d] != 0) {
            (**(code **)(param_1[0x1d] + 0xc))(param_1[0x1e]);
          }
        }
      }
    }
    *(undefined1 *)(param_1 + 0x15) = 0;
    if (param_1[6] == 0) break;
    goto LAB_00d0a000;
  }
switchD_00d09ec0_default:
  piVar2 = (int *)param_1[2];
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar7 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar7);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008f3984(param_1[2]);
  }
  FUN_00c822ec(param_1[1]);
LAB_00d0a044:
  piVar2 = (int *)*param_1;
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar7 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar7);
  *piVar2 = iVar4 + -1;
LAB_00d0a060:
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008f31e8(*param_1);
    return;
  }
switchD_00d09e6c_caseD_1:
  return;
}

