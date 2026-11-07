// FUN_00acc8ec @ 00acc8ec size=548 calls_out=9 calls_in=1
// strings: 

void FUN_00acc8ec(undefined4 *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  cVar1 = *(char *)(param_1 + 10);
  if (cVar1 != '\x03') {
    if (cVar1 == '\x04') {
      FUN_00654988(param_1 + 0xe);
      iVar4 = 0x25;
      if ((-0x7ffffffd < (int)param_1[0xb]) && (param_1[0xb] != 0)) {
        thunk_FUN_016d3fb4(param_1[0xc]);
      }
      goto switchD_00acc9c8_default;
    }
    if (cVar1 != '\x05') {
      return;
    }
    switch(*(undefined1 *)(param_1 + 0x12)) {
    case 0:
      piVar2 = (int *)param_1[0xc];
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar2;
        bVar7 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar7);
      *piVar2 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0155edc8(param_1[0xc]);
      }
    default:
      goto switchD_00acc924_caseD_1;
    case 3:
      iVar4 = 0x49;
      FUN_00acb9a8(param_1 + 0x13);
      break;
    case 4:
      cVar1 = *(char *)(param_1 + 0x32);
      bVar7 = cVar1 == '\x03';
      if (bVar7) {
        cVar1 = *(char *)((int)param_1 + 0xc5);
      }
      if (bVar7 && cVar1 == '\x03') {
        FUN_00accc50(param_1 + 0x16);
      }
      piVar2 = (int *)param_1[0x14];
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar7 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar7);
      *piVar2 = iVar3 + -1;
      iVar4 = 0x49;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_008f1030(param_1[0x14]);
      }
      break;
    case 5:
      iVar4 = 0x49;
      FUN_00accd64(param_1 + 0x14);
    }
    goto switchD_00acc9c8_default;
  }
  iVar4 = 0x25;
  if (*(char *)((int)param_1 + 0x51) != '\x03') goto switchD_00acc9c8_default;
  switch(*(undefined1 *)((int)param_1 + 0x3e)) {
  case 3:
    if (param_1[0x11] != 0) {
      FUN_00c8204c(param_1[0x11],param_1[0x12],1);
    }
    break;
  case 4:
    if (param_1[0x11] != 0) {
      FUN_00c8204c(param_1[0x11],param_1[0x12],1);
    }
    goto LAB_00accad4;
  case 5:
    uVar5 = param_1[0x11];
    puVar6 = (undefined4 *)param_1[0x12];
    if ((code *)*puVar6 != (code *)0x0) {
      (*(code *)*puVar6)(uVar5);
    }
    goto LAB_00acca9c;
  case 6:
    uVar5 = param_1[0x11];
    puVar6 = (undefined4 *)param_1[0x12];
    if ((code *)*puVar6 != (code *)0x0) {
      (*(code *)*puVar6)(uVar5);
    }
LAB_00acca9c:
    if (puVar6[1] != 0) {
      thunk_FUN_016d3fb4(uVar5);
    }
    FUN_00c822ec(param_1[0xd]);
LAB_00accad4:
    FUN_00c822ec(param_1[0xb]);
  }
switchD_00acc9c8_default:
  *(undefined1 *)((int)param_1 + iVar4) = 0;
switchD_00acc924_caseD_1:
  if (*(char *)((int)param_1 + 0x26) != '\0') {
    piVar2 = (int *)*param_1;
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar7 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar7);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0155edc8(*param_1);
    }
  }
  *(undefined2 *)((int)param_1 + 0x26) = 0;
  return;
}

