// FUN_019fb154 @ 019fb154 size=332 calls_out=9 calls_in=2
// strings: 

void FUN_019fb154(int *param_1)

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
switchD_019fb188_caseD_1:
    return;
  }
  if (*param_1 != 0) {
    return;
  }
  if (5 < *(byte *)((int)param_1 + 0x17e)) {
    return;
  }
  switch(*(byte *)((int)param_1 + 0x17e)) {
  case 0:
    piVar3 = (int *)param_1[0x5d];
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar4 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar4);
    *piVar3 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a38404(param_1[0x5d]);
    }
    FUN_019fb37c(param_1 + 10);
    FUN_0193c71c(param_1 + 0x5e);
    return;
  default:
    goto switchD_019fb188_caseD_1;
  case 3:
    FUN_019faf5c(param_1 + 0x60);
    goto LAB_019fb26c;
  case 4:
    cVar1 = (char)param_1[0x6b];
    bVar4 = cVar1 == '\x03';
    if (bVar4) {
      cVar1 = (char)param_1[0x6a];
    }
    if (bVar4 && cVar1 == '\x03') {
      FUN_0193c3cc(param_1 + 0x62);
    }
    break;
  case 5:
    FUN_01139b38(param_1[0x60],param_1[0x61]);
    FUN_019f8c54(param_1[0x5a],param_1[0x5b]);
  }
  if ((char)param_1[0x5f] != '\0') {
    FUN_019fb3fc(param_1 + 0xe);
  }
  *(undefined1 *)(param_1 + 0x5f) = 0;
LAB_019fb26c:
  *(undefined1 *)((int)param_1 + 0x17d) = 0;
  FUN_0193c71c(param_1 + 0x59);
  FUN_019fb37c(param_1 + 2);
  piVar3 = (int *)param_1[0x58];
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar4 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar4);
  *piVar3 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38404(param_1[0x58]);
    return;
  }
  return;
}

