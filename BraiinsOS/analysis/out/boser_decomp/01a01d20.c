// FUN_01a01d20 @ 01a01d20 size=404 calls_out=9 calls_in=2
// strings: 

void FUN_01a01d20(int *param_1)

{
  char cVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int unaff_r4;
  undefined4 *puVar5;
  bool bVar6;
  
  if (*param_1 != 0) {
    if (*param_1 != 1) {
      return;
    }
    bVar6 = param_1[2] == 0 && param_1[3] == 0;
    if (param_1[2] != 0 || param_1[3] != 0) {
      unaff_r4 = param_1[4];
      bVar6 = unaff_r4 == 0;
    }
    if (!bVar6) {
      puVar5 = (undefined4 *)param_1[5];
      pcVar3 = (code *)*puVar5;
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)(unaff_r4);
      }
      if (puVar5[1] != 0) {
        thunk_FUN_01be4678(unaff_r4);
        return;
      }
    }
    return;
  }
  switch(*(undefined1 *)((int)param_1 + 0xad)) {
  case 0:
    piVar2 = (int *)param_1[0x29];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar6 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar6);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a38338(param_1[0x29]);
    }
    FUN_019fafc0(param_1 + 10);
    FUN_0193c71c(param_1 + 0x2a);
    FUN_005fb2fc(param_1 + 0x1a);
    return;
  default:
    return;
  case 3:
    if ((char)param_1[0x33] == '\x03') {
      FUN_009cdcac(param_1 + 0x2d);
    }
    goto LAB_01a019a4;
  case 4:
    cVar1 = (char)param_1[0x37];
    bVar6 = cVar1 == '\x03';
    if (bVar6) {
      cVar1 = (char)param_1[0x36];
    }
    if (bVar6 && cVar1 == '\x03') {
      FUN_0193c3cc(param_1 + 0x2e);
    }
    goto LAB_01a019a4;
  case 5:
    FUN_01139b38(param_1[0x2c],param_1[0x2d]);
    break;
  case 6:
    cVar1 = (char)param_1[0x38];
    bVar6 = cVar1 == '\x03';
    if (bVar6) {
      cVar1 = (char)param_1[0x37];
    }
    if (bVar6 && cVar1 == '\x03') {
      FUN_0193c3cc(param_1 + 0x2f);
    }
    piVar2 = (int *)param_1[0x2c];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar6 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar6);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a38404(param_1[0x2c]);
    }
    if ((char)param_1[0x18] == '\0') {
      *(undefined1 *)(param_1 + 0x2b) = 0;
    }
  }
  *(undefined1 *)(param_1 + 0x2b) = 0;
  FUN_019f8c54(param_1[0x26],param_1[0x27]);
LAB_01a019a4:
  FUN_005fb2fc(param_1 + 0xe);
  FUN_0193c71c(param_1 + 0x25);
  FUN_019fafc0(param_1 + 2);
  piVar2 = (int *)param_1[0x24];
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar6 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar6);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38338(param_1[0x24]);
    return;
  }
  return;
}

