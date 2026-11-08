// FUN_0096db58 @ 0096db58 size=376 calls_out=9 calls_in=3
// strings: 

void FUN_0096db58(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  bool bVar6;
  
  cVar1 = *(char *)(param_1 + 0xc9);
  if (cVar1 == '\0') {
    FUN_0096e240(param_1 + 0x60);
    return;
  }
  if (cVar1 == '\x03') {
    if (*(char *)(param_1 + 0xd8) == '\x04') {
      cVar1 = *(char *)(param_1 + 0x120);
      bVar6 = cVar1 == '\x03';
      if (bVar6) {
        cVar1 = *(char *)(param_1 + 0x11c);
      }
      if (bVar6 && cVar1 == '\x03') {
        FUN_0096ddd4(param_1 + 0xe4);
      }
      FUN_00999f24(*(undefined4 *)(param_1 + 0xd4));
    }
    else if ((*(char *)(param_1 + 0xd8) == '\x03') && (*(int *)(param_1 + 0xdc) != 0)) {
      FUN_00999924(*(int *)(param_1 + 0xdc),*(undefined4 *)(param_1 + 0xe0),1);
    }
    goto LAB_0096dca8;
  }
  if (cVar1 != '\x04') {
    return;
  }
  if (*(char *)(param_1 + 0xf1) == '\x03') {
    FUN_0096e004(param_1 + 0xd0);
    *(undefined1 *)(param_1 + 0xf0) = 0;
    goto LAB_0096dca8;
  }
  if (*(char *)(param_1 + 0xf1) != '\0') goto LAB_0096dca8;
  iVar5 = *(int *)(param_1 + 0xec);
  DataMemoryBarrier(0xb);
  piVar3 = (int *)(iVar5 + 0x44);
  do {
    iVar2 = *piVar3;
    bVar6 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar6);
  *piVar3 = iVar2 + -1;
  DataMemoryBarrier(0xb);
  if (iVar2 == 1) {
    pcVar4 = (char *)(iVar5 + 0x10);
    if (*pcVar4 == '\0') {
      bVar6 = (bool)hasExclusiveAccess(pcVar4);
      if (!bVar6) goto LAB_0096dc54;
      *pcVar4 = '\x01';
      DataMemoryBarrier(0xb);
    }
    else {
      ClearExclusiveLocal();
LAB_0096dc54:
      FUN_01280da8(pcVar4);
    }
    FUN_0128236c(pcVar4);
    *(undefined1 *)(iVar5 + 0x2c) = 1;
    FUN_0072a978(iVar5 + 8,pcVar4);
  }
  piVar3 = *(int **)(param_1 + 0xec);
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar3;
    bVar6 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar6);
  *piVar3 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0078205c(*(undefined4 *)(param_1 + 0xec));
  }
LAB_0096dca8:
  FUN_0096e240(param_1);
  *(undefined1 *)(param_1 + 200) = 0;
  return;
}

