// FUN_019fb4c4 @ 019fb4c4 size=288 calls_out=8 calls_in=2
// strings: 

void FUN_019fb4c4(int *param_1)

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
  }
  else if (*param_1 == 0) {
    switch((char)param_1[0x15]) {
    case '\0':
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
      }
      FUN_019fafc0(param_1 + 2);
      FUN_0193c71c(param_1 + 0xf);
      return;
    default:
      goto switchD_019fb4f4_caseD_1;
    case '\x03':
      FUN_019faf5c(param_1 + 0x16);
      break;
    case '\x04':
      cVar1 = (char)param_1[0x21];
      bVar4 = cVar1 == '\x03';
      if (bVar4) {
        cVar1 = (char)param_1[0x20];
      }
      if (bVar4 && cVar1 == '\x03') {
        FUN_0193c3cc(param_1 + 0x18);
      }
      break;
    case '\x05':
      FUN_01139b38(param_1[0x16],param_1[0x17]);
      FUN_019f8c54(param_1[0x12],param_1[0x13]);
    }
    FUN_0193c71c(param_1 + 0x11);
    FUN_019fafc0(param_1 + 6);
    piVar3 = (int *)param_1[0x10];
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar4 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar4);
    *piVar3 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a38404(param_1[0x10]);
      return;
    }
    return;
  }
switchD_019fb4f4_caseD_1:
  return;
}

