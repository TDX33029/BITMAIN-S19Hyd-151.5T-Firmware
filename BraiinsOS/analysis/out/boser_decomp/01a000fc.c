// FUN_01a000fc @ 01a000fc size=324 calls_out=8 calls_in=1
// strings: 

void FUN_01a000fc(int *param_1)

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
  switch(*(undefined1 *)((int)param_1 + 0x17e)) {
  case 0:
    piVar2 = (int *)param_1[0x5d];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar6 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar6);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a38404(param_1[0x5d]);
    }
    FUN_019fb37c(param_1 + 10);
    FUN_0193c71c(param_1 + 0x5e);
    return;
  default:
    return;
  case 3:
    if ((char)param_1[0x67] == '\x03') {
      FUN_009cdcac(param_1 + 0x61);
    }
    goto LAB_019fff0c;
  case 4:
    cVar1 = (char)param_1[0x6b];
    bVar6 = cVar1 == '\x03';
    if (bVar6) {
      cVar1 = (char)param_1[0x6a];
    }
    if (bVar6 && cVar1 == '\x03') {
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
LAB_019fff0c:
  *(undefined1 *)((int)param_1 + 0x17d) = 0;
  FUN_0193c71c(param_1 + 0x59);
  FUN_019fb37c(param_1 + 2);
  piVar2 = (int *)param_1[0x58];
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar6 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar6);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38404(param_1[0x58]);
    return;
  }
  return;
}

