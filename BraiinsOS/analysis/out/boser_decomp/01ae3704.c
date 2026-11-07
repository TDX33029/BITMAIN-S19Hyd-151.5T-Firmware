// FUN_01ae3704 @ 01ae3704 size=180 calls_out=2 calls_in=1
// strings: BUG: deferred_dirs should be non-empty

void FUN_01ae3704(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if (*(char *)(param_2 + 0x26) != '\0') {
    uVar4 = *(uint *)(param_2 + 0x5c);
    if (uVar4 < *(uint *)(param_2 + 0x48)) {
      iVar2 = *(uint *)(param_2 + 0x48) - 1;
      *(int *)(param_2 + 0x48) = iVar2;
      puVar1 = (undefined4 *)(*(int *)(param_2 + 0x44) + iVar2 * 0x20);
      iVar2 = puVar1[2];
      uVar6 = puVar1[1];
      if (iVar2 == -0x80000000) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("BUG: deferred_dirs should be non-empty",0x26,&DAT_01d300d0);
      }
      uVar3 = puVar1[3];
      if ((*(uint *)(param_2 + 0x1c) <= uVar4) && (uVar4 <= *(uint *)(param_2 + 0x20))) {
        *param_1 = *puVar1;
        param_1[1] = uVar6;
        param_1[2] = iVar2;
        param_1[3] = uVar3;
        uVar6 = puVar1[5];
        uVar3 = puVar1[6];
        uVar5 = puVar1[7];
        param_1[4] = puVar1[4];
        param_1[5] = uVar6;
        param_1[6] = uVar3;
        param_1[7] = uVar5;
        return;
      }
      FUN_0134bd64(iVar2,uVar3);
    }
  }
  param_1[2] = 0x80000000;
  return;
}

