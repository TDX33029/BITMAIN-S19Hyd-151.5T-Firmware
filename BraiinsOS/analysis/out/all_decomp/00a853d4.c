// FUN_00a853d4 @ 00a853d4 size=472 calls_out=6 calls_in=1
// strings: 

void FUN_00a853d4(undefined4 param_1,undefined4 *param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  
  if (*(char *)(param_2 + 1) != '\0') {
    if (*(char *)(param_2 + 1) == '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0186dad4);
    }
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0186dad4);
  }
  iVar5 = *(int *)*param_2;
  puVar4 = (uint *)(iVar5 + 0x98);
  uVar2 = *(uint *)(iVar5 + 0x98);
  if ((uVar2 < 0xfffffff0) && ((uVar2 & 8) == 0)) {
    if (*puVar4 == uVar2) {
      bVar1 = (bool)hasExclusiveAccess(puVar4);
      if (bVar1) {
        *puVar4 = uVar2 + 0x10;
        DataMemoryBarrier(0xb);
        goto LAB_00a85440;
      }
    }
    else {
      ClearExclusiveLocal();
    }
  }
  FUN_0127d66c(puVar4);
LAB_00a85440:
  FUN_0128236c(puVar4);
  FUN_0128236c((uint)puVar4 | 1);
  DataMemoryBarrier(0xb);
  iVar3 = *(uint *)(iVar5 + 0xa8) + 0xc4653601;
  if (*(uint *)(iVar5 + 0xa8) < 999999999) {
    iVar3 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00a85484. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((int)&DAT_00a85488 + (&DAT_00a85488)[iVar3]))();
  return;
}

