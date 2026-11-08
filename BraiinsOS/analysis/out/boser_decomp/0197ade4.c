// FUN_0197ade4 @ 0197ade4 size=324 calls_out=2 calls_in=23
// strings: 

/* WARNING: Removing unreachable block (ram,0x0197ae58) */
/* WARNING: Removing unreachable block (ram,0x0197aecc) */

void FUN_0197ade4(int *param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  bool bVar5;
  
  iVar1 = *param_1;
  if (iVar1 == 1) {
    iVar4 = -99;
    do {
      HintYield();
      iVar1 = *param_1;
      if (iVar1 != 1) break;
      bVar5 = iVar4 != 0;
      iVar4 = iVar4 + 1;
    } while (bVar5);
  }
  if (iVar1 == 0) {
    while (iVar1 = *param_1, iVar1 == 0) {
      bVar5 = (bool)hasExclusiveAccess(param_1);
      if (bVar5) {
        *param_1 = 1;
        DataMemoryBarrier(0xb);
        return;
      }
    }
    ClearExclusiveLocal();
  }
  do {
    do {
      if (iVar1 != 2) {
        do {
          iVar1 = *param_1;
          bVar5 = (bool)hasExclusiveAccess(param_1);
        } while (!bVar5);
        *param_1 = 2;
        DataMemoryBarrier(0xb);
        if (iVar1 == 0) {
          return;
        }
      }
      do {
        if ((*param_1 != 2) ||
           (uVar2 = FUN_01be6c3c(0xf0,param_1,0x89,2,0,0,0xffffffff), uVar2 < 0x80000000)) break;
        piVar3 = (int *)FUN_01be3244();
      } while (*piVar3 == 4);
      iVar1 = *param_1;
    } while (iVar1 != 1);
    iVar4 = -99;
    do {
      HintYield();
      iVar1 = *param_1;
      if (iVar1 != 1) break;
      bVar5 = iVar4 != 0;
      iVar4 = iVar4 + 1;
    } while (bVar5);
  } while( true );
}

