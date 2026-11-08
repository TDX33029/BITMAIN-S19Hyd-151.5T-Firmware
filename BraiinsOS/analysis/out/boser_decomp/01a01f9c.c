// FUN_01a01f9c @ 01a01f9c size=388 calls_out=9 calls_in=1
// strings: 

void FUN_01a01f9c(int *param_1)

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
  switch(*(undefined1 *)((int)param_1 + 0xed)) {
  case 0:
    piVar2 = (int *)param_1[0x38];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar6 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar6);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a38404(param_1[0x38]);
    }
    FUN_019fcf58(param_1 + 10);
    FUN_0193c71c(param_1 + 0x39);
    return;
  default:
    return;
  case 3:
    if ((char)param_1[0x43] == '\x03') {
      FUN_009cdcac(param_1 + 0x3d);
    }
    goto LAB_01a014f8;
  case 4:
    cVar1 = (char)param_1[0x47];
    bVar6 = cVar1 == '\x03';
    if (bVar6) {
      cVar1 = (char)param_1[0x46];
    }
    if (bVar6 && cVar1 == '\x03') {
      FUN_0193c3cc(param_1 + 0x3e);
    }
    goto LAB_01a014c0;
  case 5:
    FUN_01139b38(param_1[0x3c],param_1[0x3d]);
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
LAB_01a014c0:
  if (*(char *)((int)param_1 + 0xea) != '\0') {
    FUN_0134c054(param_1[0x1a],param_1[0x1b],4,4);
  }
  if (*(char *)((int)param_1 + 0xe9) != '\0') {
    FUN_019bb7e0(param_1[0x1d],param_1[0x1e]);
  }
  *(undefined2 *)((int)param_1 + 0xe9) = 0;
LAB_01a014f8:
  *(undefined1 *)(param_1 + 0x3b) = 0;
  FUN_0193c71c(param_1 + 0x33);
  FUN_019fcf58(param_1 + 2);
  piVar2 = (int *)param_1[0x32];
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar6 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar6);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38404(param_1[0x32]);
    return;
  }
  return;
}

