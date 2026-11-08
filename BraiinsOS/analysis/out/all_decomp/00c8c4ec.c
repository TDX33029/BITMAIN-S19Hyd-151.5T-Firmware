// FUN_00c8c4ec @ 00c8c4ec size=324 calls_out=5 calls_in=2
// strings: 

void FUN_00c8c4ec(undefined4 *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  cVar1 = *(char *)(param_1 + 6);
  if (cVar1 == '\0') {
    piVar2 = (int *)*param_1;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar7 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar7);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0155edc8(*param_1);
    }
    piVar2 = (int *)param_1[2];
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar7 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar7);
    *piVar2 = iVar3 + -1;
  }
  else {
    if (cVar1 == '\x03') {
      if (param_1[7] != 0) {
        FUN_00c8204c(param_1[7],param_1[8],1);
      }
    }
    else {
      if (cVar1 != '\x04') {
        return;
      }
      cVar1 = *(char *)(param_1 + 0xd);
      bVar7 = cVar1 == '\x03';
      if (bVar7) {
        cVar1 = *(char *)(param_1 + 0xc);
      }
      if (bVar7 && cVar1 == '\x03') {
        uVar5 = param_1[10];
        puVar6 = (undefined4 *)param_1[0xb];
        pcVar4 = (code *)*puVar6;
        if (pcVar4 != (code *)0x0) {
          (*pcVar4)(uVar5);
        }
        if (puVar6[1] != 0) {
          thunk_FUN_016d3fb4(uVar5);
        }
      }
      FUN_00c822ec(param_1[5]);
    }
    piVar2 = (int *)param_1[3];
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar7 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar7);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0155edc8(param_1[3]);
    }
    piVar2 = (int *)param_1[2];
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar7 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar7);
    *piVar2 = iVar3 + -1;
  }
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00d0668c(param_1[2]);
    return;
  }
  return;
}

