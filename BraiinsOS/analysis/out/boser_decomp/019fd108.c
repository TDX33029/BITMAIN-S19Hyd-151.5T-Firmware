// FUN_019fd108 @ 019fd108 size=436 calls_out=11 calls_in=2
// strings: 

void FUN_019fd108(int *param_1)

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
  if (6 < *(byte *)((int)param_1 + 0xed)) {
    return;
  }
  switch(*(byte *)((int)param_1 + 0xed)) {
  case 0:
    piVar3 = (int *)param_1[0x38];
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar6 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar6);
    *piVar3 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a38404(param_1[0x38]);
    }
    FUN_019fcf58(param_1 + 10);
    FUN_0193c71c(param_1 + 0x39);
    return;
  default:
    goto switchD_019fd140_caseD_1;
  case 3:
    FUN_019faf5c(param_1 + 0x3c);
    goto LAB_019fd288;
  case 4:
    cVar1 = (char)param_1[0x47];
    bVar6 = cVar1 == '\x03';
    if (bVar6) {
      cVar1 = (char)param_1[0x46];
    }
    if (bVar6 && cVar1 == '\x03') {
      FUN_0193c3cc(param_1 + 0x3e);
    }
    goto LAB_019fd250;
  case 5:
    iVar2 = param_1[0x3c];
    puVar5 = (undefined4 *)param_1[0x3d];
    pcVar4 = (code *)*puVar5;
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(iVar2);
    }
    if (puVar5[1] != 0) {
      thunk_FUN_01be4678(iVar2);
    }
    break;
  case 6:
    FUN_01139b38(param_1[0x3c],param_1[0x3d]);
    *(undefined1 *)((int)param_1 + 0xeb) = 0;
    if (param_1[0x20] != 4 || param_1[0x21] != 0) {
      *(undefined1 *)(param_1 + 0x3a) = 0;
    }
  }
  *(undefined1 *)(param_1 + 0x3a) = 0;
  FUN_019f8c54(param_1[0x35],param_1[0x36]);
LAB_019fd250:
  if (*(char *)((int)param_1 + 0xea) != '\0') {
    FUN_0134c054(param_1[0x1a],param_1[0x1b],4,4);
  }
  if (*(char *)((int)param_1 + 0xe9) != '\0') {
    FUN_019bb7e0(param_1[0x1d],param_1[0x1e]);
  }
  *(undefined2 *)((int)param_1 + 0xe9) = 0;
LAB_019fd288:
  *(undefined1 *)(param_1 + 0x3b) = 0;
  FUN_0193c71c(param_1 + 0x33);
  FUN_019fcf58(param_1 + 2);
  piVar3 = (int *)param_1[0x32];
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar6 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar6);
  *piVar3 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38404(param_1[0x32]);
    return;
  }
switchD_019fd140_caseD_1:
  return;
}

