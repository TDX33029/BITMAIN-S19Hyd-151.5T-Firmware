// FUN_019b0a28 @ 019b0a28 size=188 calls_out=2 calls_in=7
// strings: 

/* WARNING: Removing unreachable block (ram,0x019b0a88) */

void FUN_019b0a28(int param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  
  piVar5 = (int *)(param_1 + 0x18);
  do {
    iVar2 = *piVar5;
    bVar1 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar1);
  *piVar5 = iVar2 + -1;
  DataMemoryBarrier(0xb);
  if (iVar2 == 1) {
    return;
  }
LAB_019b0a68:
  if ((*piVar5 == -1) &&
     (uVar3 = FUN_01be6c3c(0xf0,piVar5,0x89,0xffffffff,0,0,0xffffffff), 0x7fffffff < uVar3))
  goto code_r0x019b0aa0;
  goto LAB_019b0ac0;
code_r0x019b0aa0:
  piVar4 = (int *)FUN_01be3244();
  if (*piVar4 != 4) {
LAB_019b0ac0:
    while (*piVar5 == 1) {
      bVar1 = (bool)hasExclusiveAccess(piVar5);
      if (bVar1) {
        *piVar5 = 0;
        DataMemoryBarrier(0xb);
        return;
      }
    }
    ClearExclusiveLocal();
    DataMemoryBarrier(0xb);
  }
  goto LAB_019b0a68;
}

