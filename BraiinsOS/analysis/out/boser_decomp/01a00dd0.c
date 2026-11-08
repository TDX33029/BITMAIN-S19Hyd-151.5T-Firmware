// FUN_01a00dd0 @ 01a00dd0 size=320 calls_out=8 calls_in=1
// strings: 

void FUN_01a00dd0(int *param_1)

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
  switch(*(undefined1 *)((int)param_1 + 0x55)) {
  case 0:
    piVar2 = (int *)param_1[0x13];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar6 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar6);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a38404(param_1[0x13]);
    }
    FUN_019fafc0(param_1 + 10);
    FUN_019fb03c(param_1 + 0x14);
    return;
  default:
    return;
  case 3:
    if ((char)param_1[0x1d] == '\x03') {
      FUN_009cdcac(param_1 + 0x17);
    }
    goto LAB_01a00adc;
  case 4:
    cVar1 = (char)param_1[0x21];
    bVar6 = cVar1 == '\x03';
    if (bVar6) {
      cVar1 = (char)param_1[0x20];
    }
    if (bVar6 && cVar1 == '\x03') {
      FUN_0193c3cc(param_1 + 0x18);
    }
    goto LAB_01a00adc;
  case 5:
    FUN_01139b38(param_1[0x16],param_1[0x17]);
    break;
  case 6:
    FUN_01139b38(param_1[0x16],param_1[0x17]);
    FUN_0134c054(param_1[0x1a],param_1[0x18],1,0x10);
  }
  *(undefined1 *)(param_1 + 0x15) = 0;
  FUN_019f8c54(param_1[0x10],param_1[0x11]);
LAB_01a00adc:
  FUN_019fb03c(param_1 + 0xf);
  FUN_019fafc0(param_1 + 2);
  piVar2 = (int *)param_1[0xe];
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar6 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar6);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38404(param_1[0xe]);
    return;
  }
  return;
}

