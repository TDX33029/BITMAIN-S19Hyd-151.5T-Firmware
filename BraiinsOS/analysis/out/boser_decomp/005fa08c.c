// FUN_005fa08c @ 005fa08c size=468 calls_out=11 calls_in=1
// strings: 

void FUN_005fa08c(undefined4 *param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  
  cVar1 = *(char *)((int)param_1 + 0x233);
  if (cVar1 == '\x03') {
    FUN_005fbfa4(param_1 + 0xf8);
    piVar3 = (int *)param_1[0x90];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00b8eb0c(param_1[0x90]);
    }
  }
  else {
    if (cVar1 != '\x04') {
      if (cVar1 != '\x05') {
        return;
      }
      FUN_005f069c(param_1 + 0x8e);
    }
    pcVar5 = (char *)((int)param_1 + 0x22b);
    if (*pcVar5 != '\0') {
      FUN_005fa5c4(param_1 + 0x8e);
    }
    *(undefined2 *)((int)param_1 + 0x22f) = 0;
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5[2] = '\0';
    pcVar5[3] = '\0';
  }
  *(undefined1 *)((int)param_1 + 0x231) = 0;
  if (*(char *)(param_1 + 0x89) != '\0') {
    FUN_005f81f0(param_1 + 0x94);
  }
  *(undefined1 *)(param_1 + 0x89) = 0;
  if (*(char *)((int)param_1 + 0x225) != '\0') {
    piVar3 = (int *)param_1[0x91];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01177254(param_1[0x91],param_1[0x92]);
    }
  }
  *(undefined1 *)((int)param_1 + 0x225) = 0;
  if (*(char *)((int)param_1 + 0x226) != '\0') {
    FUN_005f7270(param_1 + 0x7f);
  }
  *(undefined1 *)((int)param_1 + 0x232) = 0;
  *(undefined1 *)((int)param_1 + 0x226) = 0;
  if (*(char *)((int)param_1 + 0x227) != '\0') {
    piVar3 = (int *)param_1[0x8f];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0121d018(param_1[0x8f]);
    }
  }
  *(undefined1 *)((int)param_1 + 0x227) = 0;
  if (*(char *)(param_1 + 0x8a) != '\0') {
    piVar3 = (int *)param_1[0x1c];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018531c0(param_1[0x1c],param_1[0x1d]);
    }
  }
  *(undefined2 *)(param_1 + 0x8a) = 0;
  FUN_019bb7e0(*param_1,param_1[1]);
  FUN_019bb7e0(param_1[3],param_1[4]);
  if (*(char *)((int)param_1 + 0x22a) != '\0') {
    FUN_005f69ac(param_1 + 0x24);
  }
  *(undefined1 *)((int)param_1 + 0x22a) = 0;
  return;
}

