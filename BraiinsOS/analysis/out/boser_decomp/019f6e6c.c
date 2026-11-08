// FUN_019f6e6c @ 019f6e6c size=256 calls_out=5 calls_in=4
// strings: threads should not terminate unexpectedly

undefined8 FUN_019f6e6c(undefined4 *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  
  FUN_019af2c4(param_1[2]);
  piVar3 = (int *)param_1[1];
  piVar5 = piVar3 + 1;
  do {
    if (*piVar5 != 1) {
      ClearExclusiveLocal();
      goto LAB_019f6f58;
    }
    bVar1 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar1);
  *piVar5 = -1;
  DataMemoryBarrier(0xb);
  DataMemoryBarrier(0xb);
  piVar3[1] = 1;
  if (*piVar3 == 1) {
    iVar4 = param_1[1];
    uVar6 = *(uint *)(iVar4 + 0xc);
    uVar2 = *(undefined8 *)(iVar4 + 0x10);
    *(undefined4 *)(iVar4 + 0xc) = 0;
    if ((uVar6 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d28e84);
    }
    piVar3 = (int *)*param_1;
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_019a2ffc(*param_1);
    }
    piVar3 = (int *)param_1[1];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_019db004(param_1[1]);
    }
    return uVar2;
  }
LAB_019f6f58:
                    /* WARNING: Subroutine does not return */
  FUN_0130739c("threads should not terminate unexpectedly",0x29,&DAT_01d28e74);
}

