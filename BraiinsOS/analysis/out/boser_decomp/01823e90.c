// FUN_01823e90 @ 01823e90 size=260 calls_out=5 calls_in=8
// strings: 

int * FUN_01823e90(undefined4 *param_1)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  piVar2 = (int *)*param_1;
  do {
    if (*piVar2 != 1) {
      bVar1 = false;
      ClearExclusiveLocal();
      goto LAB_01823ecc;
    }
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = 0;
  DataMemoryBarrier(0xb);
  bVar1 = true;
LAB_01823ecc:
  piVar2 = (int *)*param_1;
  if (bVar1) {
    if (piVar2[1] == 1) {
      DataMemoryBarrier(0xb);
      *piVar2 = 1;
      piVar3 = piVar2;
    }
    else {
      piVar5 = piVar2 + 1;
      piVar3 = (int *)FUN_01a756a0();
      FUN_01bed4e2(piVar3 + 2,piVar2 + 2,0x90);
      *param_1 = piVar3;
      if (piVar2 != (int *)&DAT_ffffffff) {
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *piVar5;
          bVar1 = (bool)hasExclusiveAccess(piVar5);
        } while (!bVar1);
        *piVar5 = iVar4 + -1;
        if (iVar4 == 1) {
          DataMemoryBarrier(0xb);
          thunk_FUN_01be4678(piVar2);
        }
      }
    }
  }
  else {
    piVar3 = (int *)FUN_0143c5b4(piVar2 + 2);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0143c7bc(*param_1);
    }
    *param_1 = piVar3;
  }
  return piVar3 + 2;
}

