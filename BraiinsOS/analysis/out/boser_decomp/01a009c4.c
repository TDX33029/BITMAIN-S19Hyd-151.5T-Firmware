// FUN_01a009c4 @ 01a009c4 size=312 calls_out=6 calls_in=2
// strings: 

void FUN_01a009c4(int *param_1)

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
  cVar1 = *(char *)((int)param_1 + 0x3a);
  if (cVar1 == '\0') {
    piVar2 = (int *)param_1[0xc];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar6 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar6);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a39294(param_1[0xc]);
    }
    FUN_019fba9c(param_1 + 6);
    FUN_019fb03c(param_1 + 0xd);
    return;
  }
  if (cVar1 == '\x03') {
    if ((char)param_1[0x17] == '\x03') {
      FUN_009cdcac(param_1 + 0x11);
    }
  }
  else {
    if (cVar1 != '\x04') {
      return;
    }
    cVar1 = (char)param_1[0x22];
    bVar6 = cVar1 == '\x03';
    if (bVar6) {
      cVar1 = (char)param_1[0x21];
    }
    if (bVar6 && cVar1 == '\x03') {
      FUN_0193c3cc(param_1 + 0x19);
    }
    if (param_1[0x10] != -0x80000000) {
      FUN_0134c054(param_1[0x10],param_1[0x11],4,4);
    }
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  *(undefined1 *)((int)param_1 + 0x39) = 0;
  FUN_019fb03c(param_1 + 0xb);
  FUN_019fba9c(param_1 + 2);
  piVar2 = (int *)param_1[10];
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar6 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar6);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a39294(param_1[10]);
    return;
  }
  return;
}

