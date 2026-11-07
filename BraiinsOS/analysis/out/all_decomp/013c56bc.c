// FUN_013c56bc @ 013c56bc size=228 calls_out=2 calls_in=3
// strings: 

void FUN_013c56bc(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_2 + 0x18);
  if (*(uint *)(param_2 + 8) < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,uVar1,*(uint *)(param_2 + 8),&DAT_01894298);
  }
  if (uVar1 != 0) {
    uVar2 = **(uint **)(param_2 + 4);
    if (*(uint *)(param_1 + 0x148) <= uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar2,*(uint *)(param_1 + 0x148),&DAT_01894288,param_2,
                   *(uint **)(param_2 + 4) + uVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x013c5748. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_013c574c +
              *(int *)(&DAT_013c574c + *(int *)(*(int *)(param_1 + 0x144) + uVar2 * 0x14) * 4)))();
    return;
  }
  uVar1 = *(uint *)(param_3 + 8);
  if (uVar1 < 5) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(5,uVar1,uVar1,&DAT_01894388);
  }
  if (uVar1 - 5 < 4) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,4,uVar1 - 5,&DAT_018943d8);
  }
  if (*(int *)(*(int *)(param_3 + 4) + 5) == 0) {
    *(undefined4 *)(*(int *)(param_3 + 4) + 1) = 0;
  }
  return;
}

