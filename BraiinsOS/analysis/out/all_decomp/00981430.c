// FUN_00981430 @ 00981430 size=336 calls_out=6 calls_in=1
// strings: 

void FUN_00981430(undefined4 *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  
  if (*(char *)(param_1 + 4) == '\x03') {
    FUN_00d8f5e8(param_1 + 5);
  }
  else {
    if (*(char *)(param_1 + 4) != '\x04') {
      return;
    }
    if (param_1[9] != 0) {
      FUN_00999924(param_1[9],param_1[10],1);
    }
    iVar2 = param_1[5];
    if (iVar2 != 0 && iVar2 != -1) {
      piVar3 = (int *)(iVar2 + 4);
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar3;
        bVar1 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar1);
      *piVar3 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        uVar4 = *(uint *)(param_1[6] + 8);
        if (uVar4 < 5) {
          uVar4 = 4;
        }
        if ((*(int *)(param_1[6] + 4) + uVar4 + 7 & -uVar4) != 0) {
          thunk_FUN_016d3fb4();
        }
      }
    }
    piVar3 = (int *)param_1[7];
    *(undefined1 *)(param_1 + 3) = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0089ddfc(param_1[7],param_1[8]);
    }
  }
  piVar3 = (int *)param_1[1];
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0099b058(param_1[1]);
  }
  piVar3 = (int *)*param_1;
  *(undefined2 *)((int)param_1 + 0xd) = 0;
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_009ba47c(*param_1);
  }
  *(undefined1 *)((int)param_1 + 0xf) = 0;
  return;
}

