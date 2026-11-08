// FUN_0168bb80 @ 0168bb80 size=332 calls_out=4 calls_in=3
// strings: 

void FUN_0168bb80(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = *(uint *)(param_2 + 0x18);
  if (*(uint *)(param_2 + 8) < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,uVar2,*(uint *)(param_2 + 8),&DAT_01d07c5c);
  }
  if (uVar2 != 0) {
    uVar2 = **(uint **)(param_2 + 4);
    if (*(uint *)(param_1 + 0x148) <= uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar2,*(uint *)(param_1 + 0x148),&DAT_01d08b38);
    }
                    /* WARNING: Could not recover jumptable at 0x0168bbd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_0168bbd8 +
              *(int *)(&DAT_0168bbd8 + *(int *)(*(int *)(param_1 + 0x144) + uVar2 * 0x14) * 4)))();
    return;
  }
  iVar3 = *(int *)(param_3 + 4);
  iVar4 = *(int *)(param_3 + 8);
  iVar1 = FUN_0168b4c0(iVar3,iVar4);
  if (iVar1 != 0) {
    return;
  }
  FUN_0168b50c(iVar3,iVar4);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(1,0,0,&DAT_01d0788c);
  }
  uVar2 = iVar4 - 1;
  if (iVar4 == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(0,0,&DAT_01d0790c);
  }
  *(undefined1 *)(iVar3 + 1) = 0;
  if (uVar2 == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(1,1,&DAT_01d0791c);
  }
  *(undefined1 *)(iVar3 + 2) = 0;
  if (uVar2 < 3) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(2,2,&DAT_01d0792c);
  }
  *(undefined1 *)(iVar3 + 3) = 0;
  if (uVar2 == 3) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(3,3,&DAT_01d0793c);
  }
  *(undefined1 *)(iVar3 + 4) = 0;
  return;
}

