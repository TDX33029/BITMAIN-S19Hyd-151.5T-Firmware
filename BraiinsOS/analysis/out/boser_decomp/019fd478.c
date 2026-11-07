// FUN_019fd478 @ 019fd478 size=328 calls_out=9 calls_in=2
// strings: 

void FUN_019fd478(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  
  if (*param_1 == 1) {
    bVar4 = param_1[2] != 0 || param_1[3] != 0;
    iVar2 = 0;
    if (bVar4) {
      iVar2 = param_1[4];
    }
    if (bVar4 && iVar2 != 0) {
      FUN_01443048(iVar2,param_1[5]);
      return;
    }
switchD_019fd4ac_caseD_1:
    return;
  }
  if (*param_1 != 0) {
    return;
  }
  if (6 < *(byte *)((int)param_1 + 0x55)) {
    return;
  }
  switch(*(byte *)((int)param_1 + 0x55)) {
  case 0:
    piVar3 = (int *)param_1[0x13];
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar4 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar4);
    *piVar3 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a38404(param_1[0x13]);
    }
    FUN_019fafc0(param_1 + 10);
    FUN_019fb03c(param_1 + 0x14);
    return;
  default:
    goto switchD_019fd4ac_caseD_1;
  case 3:
    FUN_019faf5c(param_1 + 0x16);
    goto LAB_019fd598;
  case 4:
    cVar1 = (char)param_1[0x21];
    bVar4 = cVar1 == '\x03';
    if (bVar4) {
      cVar1 = (char)param_1[0x20];
    }
    if (bVar4 && cVar1 == '\x03') {
      FUN_0193c3cc(param_1 + 0x18);
    }
    goto LAB_019fd598;
  case 5:
    FUN_01139b38(param_1[0x16],param_1[0x17]);
    break;
  case 6:
    FUN_01139b38(param_1[0x16],param_1[0x17]);
    FUN_0134c054(param_1[0x1a],param_1[0x18],1,0x10);
  }
  *(undefined1 *)(param_1 + 0x15) = 0;
  FUN_019f8c54(param_1[0x10],param_1[0x11]);
LAB_019fd598:
  FUN_019fb03c(param_1 + 0xf);
  FUN_019fafc0(param_1 + 2);
  piVar3 = (int *)param_1[0xe];
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar4 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar4);
  *piVar3 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38404(param_1[0xe]);
    return;
  }
  return;
}

