// FUN_019fbbb4 @ 019fbbb4 size=448 calls_out=10 calls_in=2
// strings: 

void FUN_019fbbb4(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  undefined4 *puVar5;
  bool bVar6;
  
  if (*param_1 == 1) {
    iVar2 = 0;
    if (param_1[2] != 0 || param_1[3] != 0) {
      iVar2 = param_1[4];
    }
    if ((param_1[2] != 0 || param_1[3] != 0) && iVar2 != 0) {
      FUN_01443048(iVar2,param_1[5]);
      return;
    }
    return;
  }
  if (*param_1 != 0) {
    return;
  }
  if (6 < *(byte *)((int)param_1 + 0xad)) {
    return;
  }
  switch(*(byte *)((int)param_1 + 0xad)) {
  case 0:
    piVar3 = (int *)param_1[0x29];
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar6 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar6);
    *piVar3 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a38338(param_1[0x29]);
    }
    FUN_019fafc0(param_1 + 10);
    FUN_0193c71c(param_1 + 0x2a);
    FUN_005fb2fc(param_1 + 0x1a);
    return;
  default:
    goto switchD_019fbbe8_caseD_1;
  case 3:
    FUN_019faf5c(param_1 + 0x2c);
    break;
  case 4:
    cVar1 = (char)param_1[0x37];
    bVar6 = cVar1 == '\x03';
    if (bVar6) {
      cVar1 = (char)param_1[0x36];
    }
    if (bVar6 && cVar1 == '\x03') {
      FUN_0193c3cc(param_1 + 0x2e);
    }
    break;
  case 5:
    iVar2 = param_1[0x2c];
    puVar5 = (undefined4 *)param_1[0x2d];
    pcVar4 = (code *)*puVar5;
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(iVar2);
    }
    if (puVar5[1] != 0) {
      thunk_FUN_01be4678(iVar2);
    }
    goto LAB_019fbd24;
  case 6:
    cVar1 = (char)param_1[0x38];
    bVar6 = cVar1 == '\x03';
    if (bVar6) {
      cVar1 = (char)param_1[0x37];
    }
    if (bVar6 && cVar1 == '\x03') {
      FUN_0193c3cc(param_1 + 0x2f);
    }
    piVar3 = (int *)param_1[0x2c];
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar6 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar6);
    *piVar3 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a38404(param_1[0x2c]);
    }
    if ((char)param_1[0x18] == '\0') {
      *(undefined1 *)(param_1 + 0x2b) = 0;
    }
LAB_019fbd24:
    *(undefined1 *)(param_1 + 0x2b) = 0;
    FUN_019f8c54(param_1[0x26],param_1[0x27]);
  }
  FUN_005fb2fc(param_1 + 0xe);
  FUN_0193c71c(param_1 + 0x25);
  FUN_019fafc0(param_1 + 2);
  piVar3 = (int *)param_1[0x24];
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar6 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar6);
  *piVar3 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38338(param_1[0x24]);
    return;
  }
switchD_019fbbe8_caseD_1:
  return;
}

