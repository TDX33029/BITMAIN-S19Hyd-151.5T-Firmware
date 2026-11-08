// FUN_0075d370 @ 0075d370 size=172 calls_out=4 calls_in=0
// strings: 

void FUN_0075d370(uint *param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  
  uVar2 = *param_1;
  if (uVar2 == 7) {
    return;
  }
  iVar3 = 1;
  if (3 < uVar2) {
    iVar3 = uVar2 - 4;
  }
  if (iVar3 == 0) {
    piVar4 = (int *)param_1[1];
    FUN_013cf52c(piVar4);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_013cef90(param_1[1]);
    }
  }
  else {
    if (iVar3 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0075d3b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_0075d3b4 + *(int *)(&DAT_0075d3b4 + uVar2 * 4)))();
      return;
    }
    if (param_1[1] != 0) {
      FUN_013f476c(param_1 + 1);
    }
  }
  FUN_0075d210(param_1 + 4);
  return;
}

