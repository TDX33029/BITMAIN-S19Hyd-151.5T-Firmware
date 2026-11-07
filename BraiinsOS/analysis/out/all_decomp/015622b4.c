// FUN_015622b4 @ 015622b4 size=168 calls_out=3 calls_in=19
// strings: 

void FUN_015622b4(undefined4 *param_1,uint *param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = *param_2;
  if (uVar3 < 0x80000001) {
    uVar3 = 1;
    if ((int)param_2[3] < 0) {
      uVar3 = param_2[3];
    }
                    /* WARNING: Could not recover jumptable at 0x015622f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_015622f4 + *(int *)(&DAT_015622f4 + uVar3 * 4)))();
    return;
  }
  iVar1 = param_4 << 1;
  iVar2 = thunk_FUN_016d4a50(iVar1);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,iVar1);
  }
  FUN_016dd1aa(iVar2,param_3,iVar1);
  param_1[1] = param_4;
  param_1[2] = iVar2;
  param_1[3] = param_4;
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(uVar3 + 0x804226d3);
  *param_1 = &DAT_80000013;
  return;
}

