// FUN_0175cb0c @ 0175cb0c size=412 calls_out=6 calls_in=2
// strings: 

void FUN_0175cb0c(undefined4 *param_1)

{
  bool bVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  
  if (param_1[2] == 0x3b9aca01) {
    uVar5 = *param_1;
    puVar6 = (undefined4 *)param_1[1];
    pcVar3 = (code *)*puVar6;
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(uVar5);
    }
    if (puVar6[1] != 0) {
      thunk_FUN_01be4678(uVar5);
      return;
    }
  }
  else {
    piVar2 = (int *)param_1[0xb];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0143c7bc(param_1[0xb]);
    }
    piVar2 = (int *)param_1[0xc];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018531c0(param_1[0xc],param_1[0xd]);
    }
    piVar2 = (int *)param_1[0xe];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018fa168(param_1[0xe]);
    }
    piVar2 = (int *)param_1[0xf];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018fa168(param_1[0xf]);
    }
    piVar2 = (int *)param_1[0x10];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01703e40(param_1[0x10]);
    }
    if (*(char *)(param_1 + 10) != '\x02') {
      (**(code **)(param_1[6] + 0x10))(param_1 + 9,param_1[7],param_1[8]);
    }
    piVar2 = (int *)param_1[4];
    if (piVar2 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar2;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0070451c(param_1[4],param_1[5]);
        return;
      }
      return;
    }
  }
  return;
}

